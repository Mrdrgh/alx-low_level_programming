#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ELF_MAGIC_SIZE 16

typedef struct {
    unsigned char e_ident[ELF_MAGIC_SIZE];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_error(const char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void print_elf_header(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Failed to read ELF header");
    }

    if (header.e_ident[0] != 0x7F || strncmp((char *)header.e_ident + 1, "ELF", 3) != 0) {
        print_error("Not an ELF file");
    }

    printf("Magic: %02x %02x %02x %02x\n", header.e_ident[0], header.e_ident[1], header.e_ident[2], header.e_ident[3]);
    printf("Class: %d-bit\n", header.e_ident[4] == 1 ? 32 : 64);
    printf("Data: %s\n", header.e_ident[5] == 1 ? "Little Endian" : "Big Endian");
    printf("Version: %d\n", header.e_ident[6]);
    printf("OS/ABI: %d\n", header.e_ident[7]);
    printf("ABI Version: %d\n", header.e_ident[8]);
    printf("Type: %u\n", header.e_type);
    printf("Entry point address: 0x%llx\n", (unsigned long long)header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    print_elf_header(argv[1]);

    return 0;
}
