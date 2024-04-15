#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
size_t min(size_t x, size_t y);
int interpolation_search(int *array, size_t size, int value);


#endif
