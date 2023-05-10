#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <elf.h>


void myelf(unsigned char *e_ident);
void mymagic(unsigned char *e_ident);
void myclass(unsigned char *e_ident);
void mydata(unsigned char *e_ident);
void myversion(unsigned char *e_ident);
void myabi(unsigned char *e_ident);
void myosabi(unsigned char *e_ident);
void mytype(unsigned int e_type, unsigned char *e_ident);
void myentry(unsigned long int e_entry, unsigned char *e_ident);
void myclose(int fix);
int _putchar (char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */
