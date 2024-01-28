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

struct node* deletehead(struct node* head){
    struct node* ptr =head;
    head=head->next;
    free(ptr);
    return head;
}

struct node* deleteAtIndex(struct node* head, int index){
    struct node* p = head;
    struct node* q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p -> next;
        q =  q -> next;
    }
    p -> next = q->next;
    free(q);
    
    return head;
}

struct node* deleteAtLast(struct node* head){
    struct node* p = head;
    struct node* q = head->next;
    while (q->next !=NULL)
    {
        p = p -> next;
        q =  q -> next;
    }
    p -> next = NULL;
    free(q);
    
    return head;
}

struct node* deleteAtKey(struct node* head, int value){
    struct node* p = head;
    struct node* q = head->next;
    while (q->data !=value && q->next !=NULL)
    {
        p = p -> next;
        q =  q -> next;
    }
    if (q ->data==value)
    {
    p -> next = q->next;
    free(q);
    }
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
    //head=deletehead(head);
    //head = deleteAtIndex( head,1);
    //head = deleteAtLast( head);
    head = deleteAtKey( head,35);
    traversal(head);
}