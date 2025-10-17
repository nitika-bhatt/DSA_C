#include <stdio.h>
#include <stdlib.h>   

struct node {
    int data;
    struct node *next;
};

struct node *create(int data) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void insertnode(struct node **head, int data) {
    struct node *temp = create(data);

    if (*head == NULL) {
        *head = temp;
        return;
    }

    struct node *ptr = *head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

struct node* reverseIterative(struct node* head) {
    struct node* prev = NULL;
    struct node* curr = head;
    struct node* next = NULL;

    while (curr != NULL) {
        next = curr->next;  
        curr->next = prev;  
        prev = curr;        
        curr = next;       
    }
    return prev; 
}

void print(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;

    insertnode(&head, 1);
    insertnode(&head, 2);
    insertnode(&head, 3);
    insertnode(&head, 4);
    insertnode(&head, 5);
    insertnode(&head, 6);
    

    printf("Original Linked List:\n");
    print(head);

    head = reverseIterative(head);

    printf("\nReversed Linked List:\n");
    print(head);

    return 0;
}
