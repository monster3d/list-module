#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} node_l;

int main() {

    node_l *unit, *unit2, *unit3, *unit4, *unit5;

    unit = malloc(sizeof(unit));
    unit2 = malloc(sizeof(unit2));
    unit3 = malloc(sizeof(unit3));
    unit4 = malloc(sizeof(unit4));
    unit5 = malloc(sizeof(unit5));

    unit->value = 10;
    unit2->value = 50;
    unit3->value = 1000;
    unit4->value = 70000;
    unit5->value = 100000;
    
    unit->next = unit2;
    unit2->next = unit3;
    unit3->next = unit4;
    unit4->next = unit5;
    unit5->next = NULL;

    node_l *current = unit;

    while(current != NULL){
        printf("%d \n", current->value);
        current = current->next;
    }
    

    return 0;
}