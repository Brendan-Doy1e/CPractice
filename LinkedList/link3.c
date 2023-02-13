#include <stdio.h>
#include <stdlib.h>

struct sPerson {
    int age;
    struct node* link;
};

struct sPerson *getNewPerson(const int age){
    struct sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
    newPerson->age = age;
    printf("New person at %p\n", newPerson);
    printf("New person at %d\n",  age);
    return newPerson;
}

int main() {
    struct sPerson *first = NULL;
    struct sPerson *second = NULL;



    return 0;
}