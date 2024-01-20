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
    
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* forth;
    struct node* fifth;
    head =(struct node*) malloc(sizeof(struct node));
    second =(struct node*) malloc(sizeof(struct node));
    third =(struct node*) malloc(sizeof(struct node));
    forth =(struct node*) malloc(sizeof(struct node));
    fifth =(struct node*) malloc(sizeof(struct node));

    head ->data=7;
    head-> next =second;

    second -> data =12;
    second -> next =third;

    third -> data=35;
    third -> next = forth;

    forth -> data=38;
    forth -> next = fifth;

    fifth -> data=39;
    fifth -> next = NULL;

    traversal(head);

}
