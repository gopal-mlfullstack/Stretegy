#include <stdio.h>
#include <stdlib.h>

// First i need to define what a node looks like
struct Node {
    int data;  // The actual value we store
    struct Node* next;  // Pointer to the next node (like arrow to next box)
};

int main(){
    // creating my first node manually
    struct Node* head = NULL; // starting with an empty list

    // allocating memory for one node
    head = (struct Node*)malloc(sizeof(struct Node));

    // putting data in it
    head -> data = 10;
    head -> next = NULL; // No next node yet, so NULL (end of list)

    // printing what we have
    printf("First node data: %d\n", head -> data);
    printf("First node next pointer: %p\n", (void*)head -> next);

    // Free up the memory
    free(head);

    return 0;
}
