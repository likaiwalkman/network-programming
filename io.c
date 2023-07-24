#include <stdio.h>
void test(){
    FILE *fp;
    fp = fopen ("/home/parallels/Documents/a.txt", "r");
    printf(fp);
}