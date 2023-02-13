#include <stdio.h>
#include <stdlib.h>

struct node {
    /* data */
    double data;
    struct node* link;
};

int main(){

    struct node* head = malloc(sizeof(struct node));
    head->data = 500.00;
    head->link = NULL;

    struct node* current = malloc(sizeof(struct node));
    current->data = 1000.00;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 20000.0;
    current->link = NULL;

    head->link->link = current;


    return 0;
}
