#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: string that give us the hash table through hash function
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        unsigned long int n;

        n = hash_djb2(key); /*retorna la posición donde se debe ubicar el string*/
        return (n % size);
}