#include "header.h"

int main(void) {
	int M = 25;
	int N = 100;
    char** field = (char**)malloc(M * sizeof(char*));
    
    for (int i = 0; i < M; i++) {
        field[i] = (char*)malloc(N * sizeof(char));
    }
    
    init_field(field, M, N);
    draw_field(field, M, N);
    
    clear(field, M, N);
    return 0;
}

