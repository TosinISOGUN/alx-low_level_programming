# C - Singly linked lists

## Contents

- File 0-print_list.c is a function that prints all the elements of a list_t list.

- File 1-list_len.c is a a function that returns the number of elements in a linked list_t list.

- File 2-add_node.c is a function that adds a new node at the beginning of a list_t list.

- File 3-add_node_end.c is a function that adds a new node at the end of a list_t list.

- File 4-free_list.c is a function that frees a list_t list.

- File 100-first.c is a function that prints a sentence before the main function is executed.

- File 101-hello_holberton.asm is 64-bit program in assembly that prints "Hello, Holberton", followed by a new line.

- File lists.h is the header file containing the definition of the list_t struct and all the prototypes of the above functions.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiler;
  - Ubuntu 20.04 LTS using gcc.
  - Using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Coding style;
  - Betty Style.
- The use of global variables is not allowed.
> The only C standard library functions allowed are `malloc`, `free` and `exit`.
> Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.

Here is an example of the data structure used for this project;
```C
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Credits
- Collaborators are acknowledged within the project.
