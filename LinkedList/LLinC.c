// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node* next;  
// };

// // struct node* createnode(int data){
// //     struct node* newnode = (struct node*)malloc(sizeof(struct node));
// //     if (newnode == NULL){
// //         printf("Memory allocation failed!\n");
// //         exit(1);
// //     }
// //     newnode->data = data;
// //     newnode->next = NULL;
// //     return newnode;
// // }

// // void insertAtBeginning(struct node** head , int new_data){
// //     struct node* newNode = createnode(new_data);
// //     newNode->next = *head;
// //     *head = newNode;
// //     printf("Inserted %d at the beginning.\n", new_data);
// // }

    
// // void insertAtEnd(struct node** head , int new_data){
// //     struct node* newNode = createnode(new_data);
// //     if (*head == NULL) {
// //         *head = newNode;
// //         printf("Inserted %d at the end (was empty).\n", new_data);
// //         return;
// //     }
// //     struct node* current = *head;
// //     while(current->next != NULL){
// //         current = current->next;
// //     }

// //     current->next = newNode;
// // }


// // void printList(struct node* node){
// //     while (node =! NULL){
// //         printf("%d ->", node->data);
// //         node = node->next;
// //     }
// //     printf("NULL\n");
// // }

// // int main(){
// //     struct node* head = NULL;
// //     insertAtBeginning(&head , 10);
// //     insertAtBeginning(&head , 20);
// //     insertAtBeginning(&head , 30);
// //     printList(head);
// // }



// void insertAtBegin(struct node** head , int new_data){
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = new_data;
//     newNode->next = *head;
//     *head = newNode;
// }

// void printList(struct node* node){
    
//     while(node != NULL){
//         printf("%d -> ", node->data);
//         node = node->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct Node* head = NULL;

//     insertAtBeginning(&head, 10);
//     insertAtBeginning(&head, 20);
//     insertAtBeginning(&head, 30);

//     printList(head);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = new_data;

    newNode->next = *head_ref;  // Link new node to current head
    *head_ref = newNode;        // Move head to point to new node
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printList(head);
    return 0;
}
