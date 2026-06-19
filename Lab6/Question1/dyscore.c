#include <stdio.h>
#include <stdlib.h>

struct node {
    double data;
    struct node *next;
};

void insert(struct node **head, double data);
void printLinkList(struct node *head);

int main(void){
    struct node *head = NULL;
    double input = 0;
while (1) {
        puts("enter score you wish to be stored, negative number to end");
        if (scanf("%lf", &input) != 1) { 
            break; 
        }
        
        if (input < 0) {
            break; 
        }

        insert(&head, input);
        printLinkList(head);
    }
    printLinkList(head);
}

void insert(struct node **head, double data){
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
        printf("Inserting %f into the linked list...\n", data);

        while (currentNode !=NULL && currentNode->data < newNode->data){
            prevNode = currentNode;
            currentNode = currentNode->next;
            // printing the current node and prev node
            if (prevNode != NULL) {
                printf("Current node: %f, Previous node: %f\n", currentNode != NULL ? currentNode->data : -1, prevNode->data);
            } else {
                printf("Current node: %f, Previous node: NULL\n", currentNode != NULL ? currentNode->data : -1);
            }
        }
        // just in case if we are inserting the first node at the begining of the linked list
        if (prevNode == NULL) {
            printf("Inserting %f at the beginning of the linked list.\n", data);
            newNode->next = *head;
            *head = newNode;
        } else {
            prevNode->next = newNode;  
            newNode->next = currentNode;
        }
    }
    else {
        printf("Memory allocation failed for new node with data: %f\n", data);
    }
}

void printLinkList(struct node *head){
    struct node *currentNode = head;

    if (head == NULL) {
        printf("\n");
        return;
    }

    double min = head->data;
    double max = head->data; 
    double sum = 0;
    int count = 0;

    while (currentNode != NULL) {
        printf("%f ", currentNode->data);
        
        sum += currentNode->data;
        count++;

        if (currentNode->next == NULL) {
            max = currentNode->data;
        }

        currentNode = currentNode->next;
    }
    printf("\n");

    double average = sum / count;
    printf("Min: %f, Max: %f, Avg: %f\n", min, max, average);

}

/* the code implements a whle loop that asks he user for scores and adds it to a node until the user inputs a negative number. The lnklist function then allocates the proper amount of memory for each node of information. It then check to see if there are alrady inputs in the linklist. If there re no inputs then th new score node is he head. If this is not th case, the function will go through the linklist unil it finds the right place to insert the node into the list according to the score that resides in the node. The print linklist function does more than just print the list. It keeps track of the sum by adding the data of every node and it keeps count of how many nodes are considered. Since this linklis is self sorting in terms of score size, max and min can be found simply by looking a the first nd last node of the list. We know the first and last node because the first node is the head and the last has a pointer that points to null.*/