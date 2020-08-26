#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* HEADERS */
#include <stdio.h>
#include <math.h>

/* DATA STRUCTURES*/
/* PROTOTYPES OF FUNCTIONS */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
