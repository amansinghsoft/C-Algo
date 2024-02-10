#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;     
    while(ptr==NULL){
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head->next;
    while(p->next != NULL){
        p = p->next;
    }
    // At this point p points to the last node of this double linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    p->prev = NULL;
    return head;

}

int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;
    head->prev = NULL;

    // Link second and third nodes
    second->data = 3;
    second->next = third;
    second ->prev = head;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
    third->prev = second;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;
    fourth ->prev = third;

    printf("Circular Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 54);
    printf("Circular Linked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}