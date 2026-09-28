#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;    
};
void insertstart(struct node **head, int data)
{
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    newnode ->data = data;
    newnode ->next = *head;
}
void display(struct node*node)
{
    while(node!=NULL)
    {
        printf("%d", node->data);
        node = node->next;

    }
    printf("\n");

}
int main()
{
    struct node*head = NULL;
    insertstart(&head, 25);
    display(head);
    return 0;

}