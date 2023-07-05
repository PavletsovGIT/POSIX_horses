#ifndef GOLOVA_H
#define GOLOVA_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void set_str(char** f, int i, int j, char* str, int size_str);

void draw_field(char** f, int M, int N);

void init_field(char** f, int M, int N);

void clear(char** f, int M, int N);

#endif /*GOLOVA_H*/
