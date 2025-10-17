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

void print(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

int search(struct node *head, int element) {
    int location = 0;
    struct node *ptr = head;

    while (ptr != NULL) {
        if (ptr->data == element) {
            return location;  
        }
        ptr = ptr->next;
        location++;
    }

    return -1;  
}

int main() {
    struct node *head = NULL;

    insertnode(&head, 1);
    insertnode(&head, 2);
    insertnode(&head, 3);
    insertnode(&head, 4);
    insertnode(&head, 5);
    insertnode(&head, 6);

    printf("Original Linked List:");
    print(head);

    int element = 4;
    int pos = search(head, element); 
    if (pos != -1)
        printf("Element %d found at position %d.\n", element, pos);
    else
        printf("Element %d not found in the list.\n", element);

    return 0;
}
