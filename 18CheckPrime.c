// C Program to check the number is prime or not
#include<stdio.h>
int main(){
    int num,prime,flag=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i = 2; i*i <= num;i++){
        if(num%i == 0){
            flag = 0;
        }
    }
    if(flag){
        printf("%d is a prime number",num);
    }
    else
        printf("%d is not a prime number",num);
}