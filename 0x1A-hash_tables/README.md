# C - Hash tables
## Description
This ALX School project is about hash tables in C. How to create and use one, how to deal with collisions. It also covers what makes a good hash function and what are the most common use for hash tables.

## Table of Contents
| Files | Description |
| --- | --- |
| [hash_tables.h](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/hash_tables.h)	| Header file containing the function prototypes and structs for this project. |
| [0-hash_table_create.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/0-hash_table_create.c)	| C function that creates a hash table. |
| [1-djb2.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/1-djb2.c)	| C hash function implementing the djb2 algorithm. |
| [2-key_index.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/2-key_index.c)	| C function that gives you the index of a key. |
| [3-hash_table_set.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/3-hash_table_set.c)	| C function that adds an element to the hash table. |
| [4-hash_table_get.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/4-hash_table_get.c)	| C function that retrieves a value associated with a key. |
| [5-hash_table_print.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/5-hash_table_print.c)	| C function that prints a hash table. |
| [6-hash_table_delete.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/6-hash_table_delete.c)	| C function that deletes a hash table
| [100-sorted_hash_table.c](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/100-sorted_hash_table.c)	| C functions for a sorted hash table. |


## Requirements
<img src="https://alx-apply.hbtn.io/brand_alx/share_image_2019.jpg" width="300" height="100" />

- Allowed editors: `vi`, `vim`, `emacs`
- Compiler;
  - Ubuntu 20.04 LTS using gcc.
  - Using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Coding style;
  - Betty Style.
- The use of global variables is not allowed.
- The prototypes of all functions should be included in a header file called [hash_tables.h](https://github.com/TosinISOGUN/alx-low_level_programming/blob/master/0x1A-hash_tables/hash_tables.h)

Here is an example of the data structure used for this project;
```C
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Authors & Credits
- [Oluwatomisin ISOGUN](https://@github.com/TosinISOGUN)
