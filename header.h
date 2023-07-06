#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

void draw_field(char** f, int M, int N);

void init_field(char** f, int M, int N);

void clear(char** f, int M, int N);

void set_str_to_row(char** f, int i, int j, char* str, int size_str);
#endif /*HEADER_H*/
