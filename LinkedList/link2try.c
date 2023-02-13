#include <stdio.h>
#include <stdlib.h>

struct node {
    int age;
    struct node* link;
};

int main(){
    
    struct node* head = malloc(sizeof(struct node));
    head->age = 30;
    head->link = NULL;

    struct node* current = malloc(sizeof(struct node));
    current->age =31;
    current->link = NULL;
    head->link = current;
    printf("%d\n", current->age);


    current = malloc(sizeof(struct node));
    current->age = 32;
    current->link = NULL;
    printf("%d\n", current->age);


    head->link->link = current;

    return 0;
}