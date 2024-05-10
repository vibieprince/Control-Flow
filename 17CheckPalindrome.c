// C Program to check whether the number is a palindrome or not
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
    if(n==reversenum){
        printf("%d is a palindrome number",n);
    }
    else
        printf("%d is not a palindrome number",n);
}