# C - Singly linked lists
<p align="center"> <img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif" /> </p>

## Description
A `linked list` is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.
> In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

`Singly Linked List` therefore is the simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type. The node contains a pointer to the next node means that the node stores the address of the next node in the sequence. A single linked list allows the traversal of data only in one way. Below is the image for the same;

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124319/Singly-Linked-List1.png" width="800" height="300"/>

## Contents

- File 0-print_list.c is a function that prints all the elements of a list_t list.

- File 1-list_len.c is a a function that returns the number of elements in a linked list_t list.

- File 2-add_node.c is a function that adds a new node at the beginning of a list_t list.

- File 3-add_node_end.c is a function that adds a new node at the end of a list_t list.

- File 4-free_list.c is a function that frees a list_t list.

- File 100-first.c is a function that prints a sentence before the main function is executed.

- File 101-hello_holberton.asm is a 64-bit program in assembly that prints "Hello, Holberton", followed by a new line.

- File lists.h is the header file containing the definition of the list_t struct and all the prototypes of the above functions.

## Requirements
<img src="https://alx-apply.hbtn.io/brand_alx/share_image_2019.jpg" width="300" height="100" />

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
