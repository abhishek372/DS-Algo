//Insertion at the beginning
//Time - O(1)
//Space - O(1)

#include<stdio.h>
#include<stdlib.h>

// Node 
struct node {
    int data;
    struct node *next;
};

// Insert function
void insert(struct node **head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head;

    newNode->data=data;
    newNode->next=NULL;

    if (*head==NULL){
        *head=newNode;
    }
    else{
        newNode->next=temp;
        *head = newNode;
    }

}
int main()
{
    // Head node
    struct node *head=NULL;

    //Calling functions
    insert(&head, 20);
    insert(&head, 40);
    insert(&head, 60);
    insert(&head, 80);
    insert(&head, 100);

    struct node *start= head;

    // Print linked list
    while(start!=NULL){

        printf("%d\n", start->data);
        start = start->next;
    }

    return 0;
}