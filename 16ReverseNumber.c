// C Program to reverse a number
#include<stdio.h>
int main(){
    int num,reversenum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int n = num;
    while(num>0){
        reversenum = reversenum*10 + num%10;
        num = num/10;
    }
    printf("Entered number : %d\n",n);
    printf("Reversed number : %d",reversenum);
}