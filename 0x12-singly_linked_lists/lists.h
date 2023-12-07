#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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


/*putchar function*/
int _putchar(char c);

size_t print_list(const list_t *h);

/* returns the number of elements in a linked list_t list.>*/
size_t list_len(const list_t *h);

/* adds a new node at the beginning of a list_t list.*/
list_t *add_node(list_t **head, const char *str);

/*that adds a new node at the end of a list_t list.*/
list_t *add_node_end(list_t **head, const char *str);

/*function that frees a list_t list.*/
void free_list(list_t *head);

/*first node*/
void free_list(list_t *head);

/* strdup*/
char *_strdup(const char *str);

/* task 100*/
void print_before_main(void) __attribute__ ((constructor));

/*Prints the specified message before main is executed*/
void print_before_main(void)



#endif
