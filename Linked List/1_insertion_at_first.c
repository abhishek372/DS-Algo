// Insertion at the end
// Time - O(1)
// Space - O(1)

#include<stdio.h>
#include<stdlib.h>

// Node
struct node {
    int data;
    struct node *next;
};

//Insert function
void insert(struct node **head, struct node **end, int data)
{
    // New node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head;
    struct node *temp1 = *end;

    newNode->data=data;
    newNode->next=NULL;
    
    if (*head==NULL){
        *head=newNode;
    }
    else{
        temp1->next=newNode;
    }
    *end = newNode;
}
int main()
{
    // Head node and end node
    struct node *head=NULL;
    struct node *end=NULL;

    // Calling functions
    insert(&head, &end, 20);
    insert(&head, &end, 40);
    insert(&head, &end, 60);
    insert(&head, &end, 80);
    insert(&head, &end, 100);

    struct node *start= head;

    // Print the linked list
    while(start!=NULL){

        printf("%d\n", start->data);
        start = start->next;
    }

    return 0;
}
