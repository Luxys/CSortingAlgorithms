//
// Created by Lucas on 18/06/2018.
//

#include "quick.h"
#include <stdio.h>
#include <stdbool.h>

/*
 * Quicksort
 * --
 * WC: O(n^2)
 * AC: O(n logn)
 * BC: O(n logn)
 *
 * -> "Divide and conquer"
 */
void quickSort(int *arr, int size, int l, int r) {
    printf("Quicksort for [l:%d, r:%d]:\n", l, r);
    if (r>l) {
        int i = partition(arr, l, r); // get pivot at its proper position
        quickSort(arr,size,l, i-1);
        quickSort(arr, size, i+1, r);
    }
}

int partition(int *arr, int l, int r) {
    int v = arr[r]; // pivot
    int i = l-1;
    int j = r;

    while(true) {

        while (arr[++i] < v) {
            if (i==r) break; // if i gets at pivot position
        }

        while (arr[--j] > v) {
            if (j==l) break; // if j cross left marker
        }

        if (i >= j) break; // if markers cross eachother

        /*
         * Swap arr[i] & arr[rj]
         */
        int x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
    }

    /*
     * Swap arr[i] & arr[r]
     */
    int x = arr[i];
    arr[i] = arr[r];
    arr[r] = x;
    return i;
}