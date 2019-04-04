#include <stdlib.h>
#include "list.c"

/**
 * Create a new node list
 */
struct node *create(int data, struct node *next);

/**
 * Prepend head node 
 */
struct node *prepend(struct node *head, int data);

/**
 * Node list callback map
 */
void traverse(struct node* head, void (*callback)(struct node *head));

/**
 * Counting list items
 */
int count(struct node *head);

/**
 * Append element to list
 */
struct node *append(struct node *head, int data);

/**
 * Insert element after target element 
 */ 
struct node *insertAfter(struct node *head, int data, struct node *prev);