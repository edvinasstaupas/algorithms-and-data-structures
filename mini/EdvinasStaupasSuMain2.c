#include <stdio.h>

void isRight(int ax, int ay, int bx, int by, int cx, int cy) {
    if(((bx-ax)*(cx-ax) == (by-ay)*(cy-ay)) || ((cx-bx)*(cx-ax) == (cy-by)*(cy-ay)) || ((ax-bx)*(cx-bx) == (ay-by)*(cy-by)))
        printf("Triangle is right.\n");
    else
        printf("Triangle is not right.\n");
}

int main () {
    isRight(0, 0, 0, 2, 2, 0);
    isRight(0, 0, 0, 1, 2, 0);
    isRight(0, 0, 0, 1, 2, 1);
    isRight(0, 0, 0, 1, 2, 2);
    isRight(0, 5, 0, 15, 2, 30);
    isRight(0, 0, 1, 2, 5, 2);
    return 0;
}