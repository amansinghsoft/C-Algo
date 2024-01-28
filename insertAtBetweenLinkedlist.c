#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");    
}

struct node * insertFirst(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node * insertAtBetween(struct node *head, int data, int index){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
 
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node * insertAtEnd(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node * insertAtAnyWhere(struct node *head, struct node *prevnode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    ptr->next = prevnode->next;
    prevnode->next = ptr;

    return head;
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    
    head =(struct node*) malloc(sizeof(struct node));
    second =(struct node*) malloc(sizeof(struct node));
    third =(struct node*) malloc(sizeof(struct node));
    
    

    head ->data=7;
    head-> next =second;

    second -> data =12;
    second -> next =third;

    third -> data=35;
    third -> next = NULL;

    printf("Insettation before:\n");
    traversal(head);
    printf("\nInsettation before:\n");
    head =insertFirst(head,62);
    head =insertAtBetween(head,68,1);
    head =insertAtEnd(head,34);
    insertAtAnyWhere(head,second,89);
    traversal(head);

}
