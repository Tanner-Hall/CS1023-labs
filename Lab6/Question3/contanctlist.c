#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char name[50];
    char number[20];
    struct contact *next;
};

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

void displayContacts(struct contact *head) {
    if (head == NULL) {
        printf("Address book is empty.\n");
        return;
    }
    printf("\n--- Contact List ---\n");
    while (head != NULL) {
        printf("Name: %-20s | Phone: %s\n", head->name, head->number);
        head = head->next;
    }
}

void searchByName(struct contact *head, char targetName[]) {
    while (head != NULL) {
        if (strcmp(head->name, targetName) == 0) {
            printf("Found! Name: %s, Phone: %s\n", head->name, head->number);
            return;
        }
        head = head->next;
    }
    printf("Contact with name '%s' not found.\n", targetName);
}

void searchByNumber(struct contact *head, char targetNumber[]) {
while (head != NULL) {
if (strcmp(head->number, targetNumber) == 0) {
printf("Found! Name: %s, Phone: %s\n", head->name, head->number);
return;
}
head = head->next;
}
printf("Contact with phone number '%s' not found.\n", targetNumber);
}

void updateNumber(struct contact *head, char targetName[], char newNumber[]) {
while (head != NULL) {
if (strcmp(head->name, targetName) == 0) {
strcpy(head->number, newNumber);
printf("Phone number updated successfully for %s.\n", targetName);
return;
}
head = head->next;
}
printf("Contact '%s' not found. Update failed.\n", targetName);
}

void deleteByName(struct contact **head, char targetName[]) {
struct contact *prevNode = NULL;
struct contact *currentNode = *head;

while (currentNode != NULL && strcmp(currentNode->name, targetName) != 0) {
prevNode = currentNode;
currentNode = currentNode->next;
}

if (currentNode == NULL) {
printf("Contact '%s' not found. Nothing to delete.\n", targetName);
return;
}

if (prevNode == NULL) {
*head = currentNode->next;
} else {
prevNode->next = currentNode->next;
}

free(currentNode);
printf("Contact '%s' deleted successfully.\n", targetName);
}

void deleteByNumber(struct contact **head, char targetNumber[]) {
struct contact *prevNode = NULL;
struct contact *currentNode = *head;

while (currentNode != NULL && strcmp(currentNode->number, targetNumber) != 0) {
prevNode = currentNode;
currentNode = currentNode->next;
}

if (currentNode == NULL) {
printf("Contact with phone number '%s' not found. Nothing to delete.\n", targetNumber);
return;
}

if (prevNode == NULL) {
*head = currentNode->next;
} else {
prevNode->next = currentNode->next;
}

printf("Contact '%s' deleted successfully.\n", currentNode->name);
free(currentNode);
}

int countContacts(struct contact *head) {
int count = 0;
while (head != NULL) {
count++;
head = head->next;
}
return count;
}

void freeList(struct contact *head) {
struct contact *temp;
while (head != NULL) {
temp = head;
head = head->next;
free(temp);
}
printf("All resources cleared. Goodbye!\n");
}