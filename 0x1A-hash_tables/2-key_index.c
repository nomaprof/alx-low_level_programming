#include "hash_tables.h"

/**
 * key_index - create a hash and get the key index
 * @key: the key
 * @size: the size of the array
 *
 * Return: the array index
 *
 * Description: use the hash function djb2
 */

unsigned lon int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
