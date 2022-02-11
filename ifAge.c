#include <stdio.h>

void main(){
    system("cls");
    int age;
    
    printf("How old r you? : ");
    scanf("%d", &age);

    if( (age >= 18) && (age <=22) )
        printf("Bachelor \n");
    else
        printf("High School \n");

    printf("Good Bye!! ");
}