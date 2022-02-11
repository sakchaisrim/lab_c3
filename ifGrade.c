#include <stdio.h>
void main(){
    system("cls");
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    // A=80-100, B=70-79, C=60-69, D= 50-59, F=0-49
    if (score <= 100) {
        if ( (score >= 80) && (score <= 100) )
            printf("Grade is A");
        else if ( (score >=70) && (score <= 79) )
            printf("Grade is B");
        else if ( (score >=60) && (score <= 69) )
            printf("Grade is C");
        else if ( (score >=50) && (score <= 59) )
            printf("Grade is D");
        else
            printf("Grade is F");
    }
    else
        printf("Score below or equal 100");

}