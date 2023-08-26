#include <stdio.h>
#include <stdlib.h>

int* createIntArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int size = 5;
    int* ptr = createIntArray(size);
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]); // 1 2 3 4 5 と表示される
    }
    free(ptr); // メモリを解放
    return 0;
}
