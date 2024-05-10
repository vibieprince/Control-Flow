// C Program to check Armstrong number
#include<stdio.h>
int main(){
    int num,p=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp = num;
    while(num>0){
        int rem = num % 10;
        p = (p) + (rem*rem*rem);
        num = num/10;
    }
    if (temp==p){
        printf("Yes.It is armstrong no.");
    }
    else{
        printf("No.It is not an Armstrong no.");
    }
}