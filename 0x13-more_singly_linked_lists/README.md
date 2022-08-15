# C - More Singly Linked Lists

<p align="center"> <img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif" /> </p>

## Description
A `linked list` is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.
> In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

`Singly Linked List` therefore is the simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type. The node contains a pointer to the next node means that the node stores the address of the next node in the sequence. A single linked list allows the traversal of data only in one way. Below is the image for the same;

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124319/Singly-Linked-List1.png" width="800" height="300"/>

## Contents
- File 0-print_listint.c is a function that prints all the elements of a listint_t list.

- File 1-listint_len.c is a function that returns the number of elements in a linked listint_t list.

- File 2-add_nodeint.c is a function that adds a new node at the beginning of a listint_t list.

- File 3-add_nodeint_end.c is a function that adds a new node at the end of a listint_t list.

- File 4-free_listint.c is a function that frees a listint_t list.

- File 5-free_listint2.c is a function that frees a listint_t list and sets the head pointer to NULL.

- File 6-pop_listint.c is a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

- File 7-get_nodeint.c is a function that returns the nth node of a listint_t linked list.

- File 8-sum_listint.c is a function that returns the sum of all the data (n) of a listint_t linked list.

- File 9-insert_nodeint.c is a function that inserts a new node at a given position.

- File 10-delete_nodeint.c is a function that deletes the node at index index of a listint_t linked list.

- File 100-reverse_listint.c is a function that reverses a linked list.

- File 101-print_listint_safe.c is a function that prints a listint_t linked list, safely.

- File 102-free_listint_safe.c is a function that frees a listint_t list, safely.

- File 103-find_loop.c is a function that finds the loop in a linked list.

- File lists.h is the header file containing all these function prototypes and the data structure listint_t.

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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Credits
- Collaborators are acknowledged within the project.
