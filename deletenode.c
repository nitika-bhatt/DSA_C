#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteBeginning(struct Node* head) {
    if (head == NULL) return NULL;
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node* deleteEnd(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return NULL;

    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
    return head;
}

struct Node* deleteAtPosition(struct Node* head, int pos) {
    if (pos == 1)
        return deleteBeginning(head);

    struct Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return head;

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}
