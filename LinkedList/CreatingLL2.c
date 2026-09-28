#include <stdio.h>
#include <stdlib.h>

// 1. Structure definition for a single node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// =========================================================
// Case 1: Insertion at the Beginning (O(1) complexity)
// =========================================================
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* newNode = createNode(new_data);
    
    // 1. Point new node's next to the current head
    newNode->next = *head_ref;
    
    // 2. Move head to point to the new node
    *head_ref = newNode;
    printf("Inserted %d at the beginning.\n", new_data);
}

// =========================================================
// Case 2: Insertion at the End (O(N) complexity)
// =========================================================
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* newNode = createNode(new_data);
    
    // If the list is empty, make the new node the head
    if (*head_ref == NULL) {
        *head_ref = newNode;
        printf("Inserted %d at the end (was empty).\n", new_data);
        return;
    }
    
    // Traverse the list to find the last node
    struct Node* current = *head_ref;
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Change the last node's next pointer to the new node
    current->next = newNode;
    printf("Inserted %d at the end.\n", new_data);
}

// =========================================================
// Case 3: Insertion at a Specific Position (O(N) complexity)
// =========================================================
// 'position' is 1-based index (e.g., position 3 is the 3rd node)
void insertAtPosition(struct Node** head_ref, int new_data, int position) {
    // Handle insertion at the beginning (position 1)
    if (position == 1) {
        insertAtBeginning(head_ref, new_data);
        return;
    }

    struct Node* newNode = createNode(new_data);
    struct Node* current = *head_ref;
    int i;
    
    // Traverse to the node *before* the desired position.
    // Loop runs (position - 2) times for a 1-based index.
    for (i = 1; current != NULL && i < position - 1; i++) {
        current = current->next;
    }

    // If 'current' is NULL, it means the position is out of bounds
    // (e.g., trying to insert at position 10 in a 5-node list)
    if (current == NULL) {
        printf("Error: Position %d is out of bounds.\n", position);
        free(newNode); // Free the allocated memory
        return;
    }

    // 1. New node points to the node currently after 'current'
    newNode->next = current->next;
    
    // 2. Current node points to the new node
    current->next = newNode;
    printf("Inserted %d at position %d.\n", new_data, position);
}

// Function to print the linked list
void printList(struct Node* node) {
    printf("Current List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate the insertions
int main() {
    struct Node* head = NULL; // Initialize an empty list

    // 1. Insertion at the Beginning
    insertAtBeginning(&head, 10); // List: 10 -> NULL
    insertAtBeginning(&head, 5);  // List: 5 -> 10 -> NULL
    printList(head);

    // 2. Insertion at the End
    insertAtEnd(&head, 20); // List: 5 -> 10 -> 20 -> NULL
    insertAtEnd(&head, 30); // List: 5 -> 10 -> 20 -> 30 -> NULL
    printList(head);

    // 3. Insertion at a Specific Position
    insertAtPosition(&head, 15, 3); // List: 5 -> 10 -> 15 -> 20 -> 30 -> NULL
    insertAtPosition(&head, 0, 1);  // Test case for beginning: List: 0 -> 5 -> 10 -> 15 -> 20 -> 30 -> NULL
    insertAtPosition(&head, 40, 7); // Test case for end/after last element
    printList(head);
    
    // Test for out-of-bounds position
    insertAtPosition(&head, 99, 10); 
    
    // Remember to free the allocated memory when done (not shown here for simplicity)
    return 0;
}