#include <stdio.h>

    //This code about is calculating factorial of a number.

    int main(){
    
        int x ;
        int y = 0;
        int fact = 1;
        //firstly, we want  a integer from user.
        printf("Enter integer number ");
        scanf("%d",&x);

            //if the integer is different from zero , it will enter in loop
            //İf integer is zero , it wont enter in loop and print zero.

                if( x != 0){
            
            for(int i = x ; i >= 1 ; i--){
                fact = fact*i;
        }
            printf("%d",fact);
            }else{
            printf("%d",y);
        }





}