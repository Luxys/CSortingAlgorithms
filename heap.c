//
// Created by Lucas on 19/06/2018.
//

#include "heap.h"
#include <stdio.h>
#include "main.h"

/*
 * Heapsort
 * --
 * O(n logn)
 *
 * -> "Build heap and heapify"
 */
void heapSort(int *arr, int size) {
    printf("Heapsort:\n");
    buildHeap(arr, size); // first, build heap

    /*
     * Extract largest element from the heap
     */
    for (int i = size-1; i >= 0; i--) {

        /*
         * Swap root with smallest element
         */
        int x = arr[i];
        arr[i] = arr[0];
        arr[0] = x;

        heapify(arr, i, 0); // heapify the reduced tree (i and not size-1 because last element is removed)
    }
}

/*
 * Correct heap by putting largest element as root
 */
void heapify(int *arr, int size, int i) {

    int v = i; // root is at position i
    int lw = 2*i+1; // left child of v
    int rw = 2*i+2; // right child of v

    /*
     * Left child > root
     */
    if (lw < size && arr[lw] > arr[v]) {
        v = lw; // root is now the element at position lw (left child of previous v)
    }

    /*
     * Right child > v
     */
    if (rw < size && arr[rw] > arr[v]) {
        v = rw; // root is now the element at position rw
    }

    /*
     * If the new largest element is no longer the root
     */
    if (v != i) {

        /*
         * Swap arr[i] & arr[v]
         */
        int x = arr[i];
        arr[i] = arr[v];
        arr[v] = x;

        heapify(arr, size, v); //Recursively heapify the new subtree
    }

}


/*
 * Build heap: rearrange array
 */
void buildHeap(int *arr, int size) {

    /*
     * Heapify from bottom to top to place largest element as root
     */
    for (int i = (size/2-1); i >= 0; i--) {
        heapify(arr, size, i);
    }

}