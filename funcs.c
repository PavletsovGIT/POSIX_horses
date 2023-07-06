#include "header.h"

void draw_field(char** f, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c", f[i][j]);
        }
	printf("\n");
    }
}

void init_field(char** f, int M, int N) {
    int h_count = 0;
	char str_n[] = "No.";
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            if ((i == 0) || (i == M - 1)) {
                f[i][j] = '-';
                continue;
            }
            if ((j == 0) || (j + 1 == N)) {
                f[i][j] = '|';
                continue;
            }
            char buff[5];
            sprintf(buff, "%d", h_count);
            strcat(str_n, buff);
            set_str_to_row(f, i, 1, str_n, strlen(str_n));
            h_count++;
        }
    }
}

void clear(char ** f, int M, int N) {
    for (int i = 0; i < M; i++){
        free(f[i]);
    }
    free(f);
    printf("Clear...\n");
}

void set_str_to_row(char** f, int i, int j, char* str, int size_str) {
	int count = 0;
	while (count <= size_str - 1) {
		f[i][j + count] = str[count];
		count++;
	}
}
