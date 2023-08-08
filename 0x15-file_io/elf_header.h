#ifndef _ELF_H_
#define _ELF_H_

/*
 * File: 100-elf_header.c
 * Auth: CHERRADI NABIL
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void is_elf(unsigned char *e_ident);
void printf_magic(unsigned char *e_ident);
void printf_class(unsigned char *e_ident);
void printf_data(unsigned char *e_ident);
void printf_version(unsigned char *e_ident);
void printf_abi(unsigned char *e_ident);
void printf_osabi(unsigned char *e_ident);
void printf_type(unsigned int e_type, unsigned char *e_ident);
void printf_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int elf);

#endif
