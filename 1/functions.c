#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

void enQueue (struct queue_node **qStart, struct queue_node **qEnd, int value) {
    struct queue_node *node = malloc (sizeof(struct queue_node) * 1);
    node->data = value;
    node->next = NULL;
    if(*qStart == NULL) {
        *qStart = node;
        *qEnd = node;
    }
    (*qEnd)->next = node;
    *qEnd = node;
    printf("%d was added.\n", node->data);
}

void deQueue (struct queue_node **qStart) {
    if(*qStart != NULL) {
        struct queue_node *temp = *qStart;
        printf("%d is being deleted.\n", temp->data);
        *qStart = (*qStart)->next;
        free(temp);
    } else {
        printf("The queue is empty.\n");
    }
}

void peek (struct queue_node *qStart) {
    printf("The first item in queue is %d\n", qStart->data);
}

void isEmpty (struct queue_node *qStart) {
    printf("The queue is ");
    if(qStart != NULL) {
        printf("not ");
    }
    printf("empty.\n");
}

void printQueue (struct queue_node *node) {
    printf("%d ", node->data);
    if(node->next != NULL) {
        node = node->next;
        printQueue(node);
    }
}