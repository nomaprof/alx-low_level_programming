#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* struct listint_s - a singly linked list to use for searching
*
* @n: the integer
* @index: the index of the node in the list searched
* @next: Pointer to the next node of the list searched
*
* Description: this is a singly linked list for search algorithms
*/
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

/**
* struct skiplist_s - Singly linked list with ability to use an express lane
*
* @n: the integer
* @index: the index of the node in the lists searched
* @next: Pointer to the next node of the list searched
* @express: Pointer to the next node in the express lane that makes it unique
*
* Description: singly linked list node structure with use of  an express lane
*/
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
