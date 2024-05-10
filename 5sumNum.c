// C Program to calculate sum of natural numbers
#include<stdio.h>
int main(){
    int i=0,sum=0,num;
    printf("Enter the number upto which you want sum : ");
    scanf("%d",&num);
    // Using While loop
    while(i<=num){
        sum += i;
        i++;
    }
    printf("Sum = %d\n",sum); // output : 55

    // Using for loop
    sum = 0;
    for(int i=0; i<= num;i++){
        sum += i; 
    }
    printf("sum = %d",sum); // output : 55
    return 0;
}




