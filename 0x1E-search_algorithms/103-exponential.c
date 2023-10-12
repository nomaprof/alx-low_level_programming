#include "search_algos.h"

int binary_search_helper(int *array, int value,
size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
* min - get the minimum between two size_t values
* @a: the first value
* @b: the second value
*
* Return: Success or Failure
*/
size_t min(size_t a, size_t b)
{
return (a <= b ? a : b);
}

/**
* binary_search_helper - a special case of the binary search
* @value: the element desired from the array
* @low: start line  with this index
* @high: end line with this index
* @array: the array under consideration
* Return: Success or Failure
*/

int binary_search_helper(int *array, int value,
size_t low, size_t high)
{
size_t mid, i;

if (!array)
return (-1);

while (low <= high)
{
mid = (low + high) / 2;
printf("Searching in array: ");
for (i = low; i <= high; i++)
printf("%i%s", array[i], i == high ? "\n" : ", ");
if (array[mid] < value)
low = mid + 1;
else if (array[mid] > value)
high = mid - 1;
else
return ((int)mid);
}

return (-1);
}

/**
* exponential_search - searches for a value from an array
* @array: the pointer to the first element
* @size: the humber of elements in the array
* @value: the element desired from the array
*
* Return: Success or Failure
*/

int exponential_search(int *array, size_t size, int value)
{
size_t low, high, bound = 1;

if (!array || size == 0)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n",
bound, array[bound]);
bound *= 2;
}

low = bound / 2;
high = min(bound, size - 1);
/* the found message and display as formatted */
printf("Value found between indexes [%lu] and [%lu]\n", low, high);
return (binary_search_helper(array, value, low, high));
}
