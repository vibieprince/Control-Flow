// C Program to check whether the given number is positive , negative or zero.
#include<stdio.h>
int main(){
    float num;
    printf("Enter the number : ");
    scanf("%f",&num);
    if(num<0)
       printf("%f is negative number",num);
    else if(num>0)
       printf("%f is positive number",num);
    else
        printf("Number you entered is zero.");
}