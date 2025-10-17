#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};


struct node* create(int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}


void insertNodeAtEnd(struct node **head, int data) {
    struct node* temp = create(data);

    if (*head == NULL) {  
        *head = temp;
        return;
    }

    struct node* ptr = *head;
    while (ptr->next != NULL) {  
        ptr = ptr->next;
    }

    ptr->next = temp;  
}

void printList(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    int n, value;

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        insertNodeAtEnd(&head, value);
    }

    printf("\nLinked List Elements:\n");
    printList(head);

    printf("\nInserting 99 at the end...\n");
    insertNodeAtEnd(&head, 99);
    printList(head);

    return 0;
}
