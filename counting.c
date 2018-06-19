//
// Created by Lucas on 19/06/2018.
//

#include "counting.h"
#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * Counting Sort
 * --
 * O(n)
 *
 * -> "Count for each element x the number of elements <= x"
 */
void countingSort(int *arr, int size) {
    printf("Counting Sort:\n");

    int counter[256]; // count array with fixed size
    memset(counter, 0, sizeof(counter)); // initialise array with 0 values

    /*
     * Count occurences
     */
    for (int i = 0; i < size; i++) {
        counter[arr[i]]++;
    }

    /*
     * Sum up counters
     */
    for (int j = 1; j < 256; j++) {
        counter[j] += counter[j-1];
    }

    int output[size]; // array used as output purpose only
    memset(output, 0, sizeof(output)); // initialise array with 0 values

    /*
     * Place elements at their correct position in output
     */
    for (int k=0; k<size; k++) {

        /*
         * Occurrences counted like 1-2-3-x
         * Array starts at 0 so if counter=1 it takes position 0 (counter-1)
         */
        output[counter[arr[k]]-1] = arr[k]; // output at position counter[arr[k]]-1 takes value arr[k]
        counter[arr[k]]--; // decrement counter for element arr[k] since it has been placed in output
    }

    /*
     * Set arr as the output array
     */
    for (int o = 0; o < size; o++) {
        arr[o] = output[o];
    }
}