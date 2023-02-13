#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} dob;

typedef struct person {
    char name[50];
    int age;
    dob date_of_b;
    struct person* link;
} person;

void add_at_end(person* head, char name[50], int age, int day, int month, int year){
    person* ptr = head;
    person* temp = malloc(sizeof(person));

    strncpy(temp->name, name, sizeof(temp->name)-1);
    temp->name[sizeof(temp->name)-1] = '\0';
    temp->age = age;
    temp->date_of_b.day = day;
    temp->date_of_b.month = month;
    temp->date_of_b.year = year;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;

}

void print_data(person* head){
    if(head == NULL){
        printf("LL is empty!");
    }
    person* ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        printf("I am %s, I am %d years old, born on %d/%d/%d.\n", ptr->name, ptr->age, ptr->date_of_b.day, ptr->date_of_b.month, ptr->date_of_b.year);
        ptr = ptr->link;
    }
}

int main(){

    person* head = malloc(sizeof(person));
    strcpy(head->name, "Brendan");
    head->age = 30;
    head->date_of_b.day = 4;
    head->date_of_b.month = 10;
    head->date_of_b.year = 1992;
    head->link = NULL;
    printf("I am %s, I am %d years old, born on %d/%d/%d.\n", 
        head->name, head->age, head->date_of_b.day, head->date_of_b.month, head->date_of_b.year);

    person* current = malloc(sizeof(person));
    strcpy(current->name, "Nick");
    current->age = 28;
    current->date_of_b.day = 22;
    current->date_of_b.month = 6;
    current->date_of_b.year = 1994;
    printf("I am %s, I am %d years old, born on %d/%d/%d.\n", 
        current->name, current->age, current->date_of_b.day, current->date_of_b.month, current->date_of_b.year);
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(person));
    strcpy(current->name, "Matt");
    current->age = 26;
    current->date_of_b.day = 29;
    current->date_of_b.month = 5;
    current->date_of_b.year = 1996;
    printf("I am %s, I am %d years old, born on %d/%d/%d.\n", 
        current->name, current->age, current->date_of_b.day, current->date_of_b.month, current->date_of_b.year);
    current->link = NULL;
    head->link->link = current;

    add_at_end(head, "James", 24, 28, 8, 1998);
    print_data(head);

    return 0;
}
