#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        print("Memory Allocation Failed!!");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head,int data){
    
}
