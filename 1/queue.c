#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main () {
    struct queue_node *qStart = NULL;
    struct queue_node *qEnd = NULL;
    int value;
    char buf[128] = {0};
    for(int i = 1; i < 5; ++i) {
        enQueue(&qStart, &qEnd, i);
    }
    printf("Please enter value that will be put in the queue: ");
    while(scanf("%d", &value) != 1) { //ivestis ir tikrinimas 
        scanf("%s", &buf);
        printf("[%s] is not valid, please enter an integer: ", buf);
    }
    enQueue(&qStart, &qEnd, value);
    peek(qStart);
    printQueue(qStart);
    printf("\n");
    isEmpty(qStart);
    for(int i = 1; i < 7; ++i) {
        deQueue(&qStart);
    }
    isEmpty(qStart);
    for(int i = 1; i < 3; ++i) {
        enQueue(&qStart, &qEnd, i);
    }
    for(int i = 15; i < 17; ++i) {
        enQueue(&qStart, &qEnd, i);
    }
    peek(qStart);
    printQueue(qStart);
    return 0;
}

