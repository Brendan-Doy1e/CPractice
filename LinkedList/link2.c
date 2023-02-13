#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int main(){

    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data =95;
    current->link = NULL;
    head->link = current;
    printf("%d\n", current->data);

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    printf("%d\n", current->data);


    head->link->link = current;

    return 0;
}