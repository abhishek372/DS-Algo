// Insertion at any position of linked list
// Time - O(n)
// Space - O(1)

#include<stdio.h>
#include<stdlib.h>

// Node
struct node {
    int data;
    struct node *next;
};

// Insert function
void insert(struct node **head, int data, int pos)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head;
    struct node *temp1;

    newNode->data=data;
    newNode->next=NULL;

    // Checks for 1st position
    if(pos==1)
    {
        newNode->next=temp;
        *head = newNode;
    }
    // Checks for any other positions
    else
    {
        pos = pos-1;
        temp1 = temp;
        
        while(pos--)
        {    
            temp = temp1;
            temp1 = temp->next;
        }
        newNode->next = temp1;
        temp->next = newNode;
    }
}
int main()
{
    // head node 
    struct node *head=NULL;

    // New node
    struct node *newNode; 

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = 20;
    newNode->next = NULL;

    head = newNode;
    struct node *temp = head; 
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = 40;
    newNode->next = NULL;
    temp->next = newNode;

    struct node *temp1 = head;  
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = 60;
    newNode->next = NULL;
    temp1->next->next = newNode;

    
    // insert(&head, 80, 2);        // Insert at postion 2
    insert(&head, 100, 1);          // Insert at postion 1
    // insert(&head, 80, 3);        // Insert at postion 3

    struct node *start= head;

    // Print the linked list
    while(start!=NULL){
        printf("%d\n", start->data);
        start = start->next;
    }

    return 0;
}
