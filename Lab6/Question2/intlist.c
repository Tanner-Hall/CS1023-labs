#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
void freeLinkList(struct node *head);
void insert(struct node **head, int data);
void printLinkList(struct node *head, int target);

int main(void){
    puts("how many integers would you like to add to the list?");
    int size =0;
    int value = 0;
    scanf("%d", &size);
    struct node *head = NULL;
    for (int i = 0; i < size; i++) {
        printf("enter value number %d:\n", i+1);
        scanf("%d", &value);
        insert(&head, value);
    }
    int searchTarget = 0;
    printf("Enter one value to search for: ");
    scanf("%d", &searchTarget);

    printLinkList(head, searchTarget);
}

void insert(struct node **head, int data){
    // first we need to allocate memory for the new node
    // because we need to need to first create the container
    struct node *newNode = malloc(sizeof(struct node));
    
    // then we need to check if the memory allocation was successful
    // if the memory allocation was successful, we can proceed to insert the new node
    if (newNode != NULL) {
        newNode->data = data;
        newNode->next = NULL;
        // then we need to create two pointters to traverse the linked list
        struct node *prevNode = NULL;
        struct node *currentNode = *head;
        printf("Inserting %d into the linked list...\n", data);

        while (currentNode !=NULL && currentNode->data < newNode->data){
            prevNode = currentNode;
            currentNode = currentNode->next;
            // printing the current node and prev node
            if (prevNode != NULL) {
                printf("Current node: %d, Previous node: %d\n", currentNode != NULL ? currentNode->data : -1, prevNode->data);
            } else {
                printf("Current node: %d, Previous node: NULL\n", currentNode != NULL ? currentNode->data : -1);
            }
        }
        // just in case if we are inserting the first node at the begining of the linked list
        if (prevNode == NULL) {
            printf("Inserting %d at the beginning of the linked list.\n", data);
            newNode->next = *head;
            *head = newNode;
        } else {
            prevNode->next = newNode;  
            newNode->next = currentNode;
        }
    }
    else {
        printf("Memory allocation failed for new node with data: %d\n", data);
    }
}

void printLinkList(struct node *head, int target){
    struct node *currentNode = head;

    if (head == NULL) {
        printf("\n");
        return;
    }

    int sum = 0;
    int count = 0;
    int found = 0;

    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        sum += currentNode->data;
        count += 1;
        currentNode = currentNode->next;
    }
    currentNode = head;
    while (currentNode != NULL) {
        if (currentNode->data == target) {
            found = 1;
            break; 
        }
        if (currentNode->data > target) {
            break;
        }
        currentNode = currentNode->next;
    }
    
    printf("amount of nodes: %d, sum of numbers: %d\n", count, sum);
    if (found) {
    printf("Value %d was found in the linked list.\n", target);
    } else {
    printf("Value %d was NOT found in the linked list.\n", target);
    }
    printf("\n");
}

void freeLinkList(struct node *head) {
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("Memory successfully cleared.\n");
}

/*This question is a little differnet from the last since I initally ask the usr how many inputs they wish o enter, I then implement a for loop that loops for as many times as the user specified. ach loop asks te user to enter a value and calls a function that takes hat value s an input. The linklist itself is implemented the exact same as in problem one with the smallest integer being at the front anf the largest being at the back of the linklist. The print function excecutes finding the sum of the nodes and how many nodes there are in the same way as the last code. What is new is that there is also a whle loop that searches for an input given by the user. It does this by going through each node and checking if the data in that node is equal to the entered value. Finally here is a function called freelinklist that frees the list from the first node to the last. */