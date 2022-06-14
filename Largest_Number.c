#include <stdio.h>
int main (){

    int number1, number2, number3;

    printf("Enter three number : ");
    scanf("%d %d %d", &number1,&number2,&number3);

    if(number1>number3){


        if(number1>number2){
            printf("The largest number1: %d ",number1);
        }

        else {
            printf("The largest number3: %d ",number3);
        }

    }

    else{


        if(number2>number3){
            printf("The largest number2: %d ",number2);

        }

        else{

              printf("The largest number3: %d ",number3);
        }
    }


    return 0;
}
