void isRight(int ax, int ay, int bx, int by, int cx, int cy) {
    if(((bx-ax)*(cx-ax) == (by-ay)*(cy-ay)) || ((cx-bx)*(cx-ax) == (cy-by)*(cy-ay)) || ((ax-bx)*(cx-bx) == (ay-by)*(cy-by)))
        printf("Triangle is right.\n");
    else
        printf("Triangle is not right.\n");
}