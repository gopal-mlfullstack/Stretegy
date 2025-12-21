#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//= Practice 1: Create 3 nodes and link them
void practice1(){
    printf("\n=== Practice 1: Create 3 nodes and link them ===\n");

    // creating three separate nodes
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    // putting  data in each node
   first -> data = 10; // first points to the second
   second -> data = 20; // second points to the third
   third -> data = 30;  // third is the last node

   // linking them together
   first -> next = second; // first points to second
   second -> next = third; // second points to third
   third -> next = NULL;   // third is the last node

   // Now i have: [10] -> [20] -> [30] -> NULL

   // Printing the linked list by following the chair
   printf("First node: %d\n", first -> data);
   printf("Second node: %d\n", first -> next -> data); // jump to second
   printf("Third node: %d\n", first -> next -> next -> data);  // jump to third

   // free all nodes
   free(first);
   free(second);
   free(third);
}

void practice2(){
    printf("\n=== PRACTICE 2: Traversing with a loop===\n");

    // creating 4 nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 5;
    head -> next = (struct Node*)malloc(sizeof(struct Node));

    head -> next -> data = 15;
    head -> next -> next = (struct Node*)malloc(sizeof(struct Node));

    head -> next -> next -> data = 25;
    head -> next -> next -> next = (struct Node*)malloc(sizeof(struct Node));

    head -> next -> next -> next -> data = 35;
    head -> next -> next -> next -> next = NULL;

    // Now traversing
    printf("List contents: ");
    struct Node* temp = head; // starting from head

    while (temp != NULL){
        printf("%d -> ", temp-> data); // printing current data
        temp  = temp -> next; // Move to next node
    }
    printf("NULL\n");

    // Free up memory
    struct Node* current = head;
    struct Node* nextNode;
    while(current != NULL){
        nextNode = current -> next;
        free(current);
        current = nextNode;
    }

}

void practice3(){
    printf("\n=== PRACTICE 3: Insert at beginning ===\n");

    // starting with empty list
    struct Node* head = NULL;

    // inserting first node (value 30)
    struct Node* newNode1 = (struct Node*)malloc(sizeof(struct Node));

    newNode1 -> data = 30;
    newNode1 -> next = head; // points to current head (NULL)
    head = newNode1; // updating head to new node

    printf("After inserting 30: %d -> NULL\n", head -> data);

    // inserting another node at beginning (value 20)
    struct Node* newNode2 = (struct Node*)malloc(sizeof(struct Node));
    newNode2 -> data = 20;
    newNode2 -> next = head; // Points to current head (30)
    head -> newNode2; // Update head to new node

    printf("After insertin")

}


int main(){
    practice1();
    practice2();

    printf("\n=== two practice completed! ===\n");
    return 0;
}
