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

void insertAtPosition(struct node **head, int data, int position) {
    struct node* temp = create(data);

    if (position <= 0) {
        printf("Invalid position!\n");
        free(temp);
        return;
    }

    if (position == 1) {
        temp->next = *head;
        *head = temp;
        return;
    }


    struct node* ptr = *head;
    int i = 1;
    while (ptr != NULL && i < position - 1) {
        ptr = ptr->next;
        i++;
    }

    // if (ptr == NULL) {
    //     printf("Position out of bounds! Inserting at the end.\n");
    //     free(temp);  
    //     return;
    // }

    temp->next = ptr->next;
    ptr->next = temp;
}

// Print the linked list
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
    int n, value, pos;

    printf("Enter the number of initial nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        insertAtPosition(&head, value, i);  // insert at end initially
    }

    printf("\nLinked List Elements:\n");
    printList(head);


    printf("\nEnter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert at: ");
    scanf("%d", &pos);

    insertAtPosition(&head, value, pos);

    printf("\nLinked List After Insertion:\n");
    printList(head);

    return 0;
}
