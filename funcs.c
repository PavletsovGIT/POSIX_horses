#include "header.h"

void set_str(char** f, int i, int j, char* str, int size_str) {
	int count = 0;
	//printf("%s", str);
	while (count < size_str - 1) {
		printf("%c", str[count]);
		f[i][j + count] = str[count];
		printf("%c\n", f[i][j + count]);
		count++;
	}
}

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
        for (int j = 0; j < N; j++) {
            if ((i == 0) || (i == M - 1)) {
                f[i][j] = '-';
                continue;
            }
            if ((j == 0) || (j == N - 1)) {
                f[i][j] = '|';
                continue;
            } 
			if (j == 1) {
				set_str(f, i, j, str_n, (int)sizeof(str_n));
				printf("%s\n", f[i]);
				continue;
			}else {
                f[i][j] = ' '; 
            }
        }
    }
}

void clear(char ** f, int M, int N) {
    for (int i = 0; i < M; i++){
        free(f[i]);
    }
    free(f);
}
