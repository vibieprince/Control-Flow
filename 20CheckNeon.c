// C Program to check whether the input number is Neon or not
#include<stdio.h>
// Neon Number : Sum of the digits of the square of the number is equal to the number.
int main(){
    int num,square,n,digit,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    square = num*num;
    n = square;
    while(n != 0){
        // Here, digit extraction is taking place
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    if(sum==num){
        printf("%d is a Neon Number.",num);
    }
    else
        printf("%d is not a Neon Number.",num);
}