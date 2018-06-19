//
// Created by Lucas on 18/06/2018.
//

#include "insertion.h"
#include <stdio.h>

/*
 * Insertion Sort
 * --
 * WC: O(n^2)
 * AC: O(n^2)
 * BC: O(n)
 *
 * -> "Insert element at its correct position"
 */
void insertionSort(int *arr, int size) {
    printf("Insertion Sort:\n");
    for (int i=0; i < size; i++) {
        int j = i;
        while(j >=0 && (arr[j] < arr[j-1])) {
            int x = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = x;
            j--;
        }
    }
}
