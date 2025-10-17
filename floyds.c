#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int detectLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;
}

struct Node* create(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main() {
    struct Node* head = create(1);
    head->next = create(2);
    head->next->next = create(3);
    head->next->next->next = head->next; 

    if (detectLoop(head))
        printf("Loop detected\n");
    else
        printf("No loop\n");

    return 0;
}
