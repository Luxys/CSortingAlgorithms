//
// Created by Lucas on 18/06/2018.
//

#include "bubble.h"
#include <stdio.h>

/*
 * Bubble Sort
 * --
 * WC: O(n^2)
 * AC: O(n^2)
 * BC: O(n^2)
 *
 * -> "Bubble to the next element"
 */
void bubbleSort(int *arr, int size) {
    printf("Bubble Sort:\n");
    for (int i=0; i<size; i++) {
        for (int j=0; j < size-i; j++) {
            if (arr[j] > arr[j+1]) {
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
        }
    }
}