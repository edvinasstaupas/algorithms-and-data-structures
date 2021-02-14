#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

struct queue_node {
    int data;
    struct queue_node *next;
};

void enQueue (struct queue_node **qStart, struct queue_node **qEnd, int value);
void deQueue (struct queue_node **qStart);
void peek (struct queue_node *qStart);
void isEmpty (struct queue_node *qStart);
void printQueue (struct queue_node *node);

#endif