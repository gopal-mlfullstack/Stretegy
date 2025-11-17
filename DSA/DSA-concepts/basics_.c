#include <stdio.h>
#include <stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node* next;
// } Node;

// Node *createNode(int value) {
//     Node *newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode;
// }

// void insertatbeg(Node **head, int value){
//     Node *newnode = createNode(value);
//     newnode->data = value;
//     if(*head == NULL) {
//         *head = newnode;
//         // return;
//     } 
//     else{
//         newnode->next = (*head);
//         *head = newnode;
//     }
// }

// void printList(Node *head){
//     Node *temp = head;
//     while(temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main(){
//     Node *head = NULL;
    
    
//     insertatbeg(&head,10);
//     insertatbeg(&head,20);
//     printList(head);

//     return 0;
// }




typedef struct car {
    int price;

} car;

int main() {
    struct car car1;
    car1.price = 2;
    car1.price = 7;

    printf("price: %d\n", car1.price);
    return 0;
}