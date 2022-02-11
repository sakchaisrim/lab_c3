#include <stdio.h>

void main(){
    system("cls");
    int c;

    printf("Enter C(1,2,3): ");
    scanf("%d", &c);

    switch (c) {
       case 1: puts("One"); break;
       case 2: puts("Two"); break;
       case 3: puts("Three"); break;
       default: puts("Out of range");
    }
}