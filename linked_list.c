#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insert(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void display() {
    struct Node* temp=head;
    while(temp!=NULL) {
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
