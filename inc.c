#include "inc.h"
#include <stdio.h>

struct node *create(int data, struct node *next) {
    struct node *newNode = malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("%s", "Error creating a new node");
        exit(0);
    }

    newNode->data = data;
    newNode->next = next;

    return newNode;
}

struct node *prepend(struct node *head, int data) {
    struct node *newNode = create(data, head);
    head = newNode;

    return head;
}

void traverse(struct node *head, void (callback)(struct node *head)) {
    struct node *cursor = head;

    while (cursor != NULL) {
        callback(cursor);
        cursor = cursor->next;
    }
}

int count(struct node *head) {
    struct node *cursor = head;
    int i = 0;

    while (cursor != NULL) {
        i++;
        cursor = cursor->next;
    }
    
    return i;
}

struct node *append(struct node *head, int data) {
    struct node *cursor = head;

    while (cursor != NULL) {
        cursor = cursor->next;
    }

    struct node *newNode = create(data, NULL);
    cursor->next = newNode;

    return head;
}

struct node *insertAfter(struct node *head, int data, struct node *prev) {
    struct node *cursor = head;

    while (cursor != prev) {
        cursor = cursor->next;
    }

    if (cursor != NULL) {
        struct node *newNode = create(data, cursor->next);
        cursor->next = newNode;

        return head;
    } else {
        return NULL;
    }
    
}