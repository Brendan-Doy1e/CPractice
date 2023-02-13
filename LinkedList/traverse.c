#include <stdio.h>
#include <stdlib.h>

struct node {
    /* data */
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head){
    int count = 0;
    if(head == NULL){
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
}

int main() {

    struct node* head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    printf("data at node 1 is %d\n", head->data);
  
    struct node *current = malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;
    printf("data at node 2 is %d\n", current->data);


    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    printf("data at node 3 is %d\n", current->data);


    head->link->link = current;

    count_of_nodes(head);

    return 0;
}
