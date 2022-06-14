#include<stdio.h>
int main (){

    //code of even odd using conditional statement

    int number;
    printf("Enter any number: ");
    scanf ("%d", &number);

    if(number%2==0){
        printf("The even number is: %d", number);
    }

    else{
        printf("The odd number is: %d", number);
    }



    return 0;
}
