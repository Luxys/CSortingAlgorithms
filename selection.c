//
// Created by Lucas on 18/06/2018.
//

#include "selection.h"
#include "stdio.h"

/*
 * Selection Sort
 * --
 * WC: O(n^2)
 * AC: O(n^2)
 * BC: O(n^2)
 *
 * -> "select minimum"
 */
void selectionSort(int *arr, int size) {
    printf("Selection Sort:\n");
    for (int i=0; i < size; i++) {
        int k = i;
        for (int j=i+1; j < size; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        int x = arr[i];
        arr[i] = arr[k];
        arr[k] = x;
    }

}