#include <stdio.h>
void main(){
    system("cls");
    char s1[80], s2[80];

    printf("Enter Char: ");
    scanf("%[0-9] %[a-zA-Z]", s1, s2);

    printf("%s %s", s1, s2);  
}