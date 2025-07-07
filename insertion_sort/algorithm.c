#include <stdio.h>

void insertion_sort(int A[], int size) {
    for (int i = 1; i < size; i++)
    {
        int key = A[i];

        int j = i - 1;
        while (j >= 0 && A[j] > key)
        {
           A[j + 1] = A[j];
           j = j - 1; 
        }
        A[j + 1] = key;    
    }
    
    
}

int main() {
    int array[] = {7, 3, 5, 6, 1, 0, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    insertion_sort(array, size);

    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("]\n");
    
    return 0;

}