#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d", &N);
    int **arr = (int**)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &M);
        *arr[i] = (int*)malloc(sizeof(int) * M);
        for(int j = 0; j < M; i++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0;i < N; i++) {
        for(int j = 0; j < sizeof(arr[i]) / sizeof(int); i++) {
            printf("%d ", arr[i][j]);
        }
    }
}