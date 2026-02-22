#include <stdio.h>

// function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);
// or void swapArray(int *a, int *b, int size);

int main() {
    int a = 1, b = 2, c = 3;

    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap function : a=%d, b=%d, c=%d\n", a, b, c);

    // calling swapArray()
    {
        int aArr[] = {1, 2, 3};
        int bArr[] = {4, 5, 6};
        int size = 3;
        int i;

        printf("\nBefore swapArray:\n");
        printf("a: ");
        for(i = 0; i < size; i++)printf("%d ", aArr[i]);
        printf("\nb: ");
        for(i = 0; i < size; i++)printf("%d ", bArr[i]);
        printf("\n");
        swapArray(aArr, bArr, size);
        printf("After swapArray:\n");
        printf("a: ");
        for(i = 0; i < size; i++)printf("%d ", aArr[i]);
        printf("\nb: ");
        for(i = 0; i < size; i++)printf("%d ", bArr[i]);
        printf("\n");
    }
    return 0;
}

void swapValue(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void swapArray(int a[], int b[], int size){
    int i, temp;
    for (i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
