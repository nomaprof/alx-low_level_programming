#include "hash_tables.h"

/**
 * hash_djb2 - program the djb2 algorithm
 * @str: generate the hash value for storing in the hash table
 *
 * Return: the hash value
 */

 unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int m;

    hash = 5381;
    while ((m = *str++))
    {
        hash = ((hash << 5) + hash) + m;
    }
    return (hash);
}
