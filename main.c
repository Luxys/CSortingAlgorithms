//
// Created by Lucas on 18/06/2018.
//


#include <stdio.h>
#include "selection.h"
#include "bubble.h"
#include "insertion.h"
#include "quick.h"
#include "heap.h"

void printArray(int *arr, int size) {
    for (int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}


int main() {
    int arr[5] = {8,6,5,2,12};
    int size = (sizeof(arr)/ sizeof(arr[0]));

    printArray(arr, size);

//    selectionSort(arr, size);
//    printArray(arr, size);

//    bubbleSort(arr, size);
//    printArray(arr, size);

//    insertionSort(arr, size);
//    printArray(arr, size);

//    quickSort(arr, size, 0, size-1);
//    printArray(arr, size);
    
    heapSort(arr, size);
    printArray(arr, size);

    return 0;
}