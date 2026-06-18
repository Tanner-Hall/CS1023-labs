#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char name[50];
    char number[20];
    struct contact *next;
};

// Function Prototypes
void addContact(struct contact **head, char name[], char number[]);
void displayContacts(struct contact *head);
void searchByName(struct contact *head, char targetName[]);
void searchByNumber(struct contact *head, char targetNumber[]);
void updateNumber(struct contact *head, char targetName[], char newNumber[]);
void deleteByName(struct contact **head, char targetName[]);
void deleteByNumber(struct contact **head, char targetNumber[]);
int countContacts(struct contact *head);
void freeList(struct contact *head);


void addContact(struct contact **head, char name[], char number[]) {
    struct contact *newContact = malloc(sizeof(struct contact));
    if (newContact == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    
    strcpy(newContact->name, name);
    strcpy(newContact->number, number);
    newContact->next = NULL;

    struct contact *prevNode = NULL;
    struct contact *currentNode = *head;

    while (currentNode != NULL && strcmp(currentNode->name, newContact->name) < 0) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (prevNode == NULL) {
        newContact->next = *head;
        *head = newContact;
    } else {
        prevNode->next = newContact;
        newContact->next = currentNode;
    }
    printf("Contact added successfully!\n");
}
