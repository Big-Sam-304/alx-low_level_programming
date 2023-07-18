#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

/**
 * Elf64 - struct of typedef
 * @e_ident: array of values
 * @e_machine: machine
 * @e_type: type
 * @e_version: version
 * @e_entry: entry
 * @e_phoff: program header offset
 * @e_shoff: section header offset
 * @e_flags: flags
 * @e_ehsize: size
 * @e_phentsize: program header entry size
 * @e_phnum: program header number
 * @e_shentsize: size
 * @e_shnum: section header number
 * @e_shstrndx: index
 */

typedef struct
{
        unsigned char e_ident[16];
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
} Elf64;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_permission(const char *filename);
int if_exists(const char *filename);
void exit_with_error(const char *msg, int code);
int copy_content(const char *file_from, const char *file_to);
void print_error(const char *msg);
int elf_info(const char *elf_filename);

#endif /* MAIN_H */
