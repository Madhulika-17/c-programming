#include <stdio.h>
#define MAX 5

int queue[MAX], front=0, rear=-1;

void enqueue(int val) {
    if(rear==MAX-1) printf("Queue Full\n");
    else queue[++rear] = val;
}

void dequeue() {
    if(front>rear) printf("Queue Empty\n");
    else printf("Dequeued: %d\n", queue[front++]);
}

void display() {
    if(front>rear) printf("Queue Empty\n");
    else {
        printf("Queue: ");
        for(int i=front; i<=rear; i++) printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    display();
    dequeue();
    display();
    return 0;
}
