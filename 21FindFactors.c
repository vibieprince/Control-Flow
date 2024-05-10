// C Program to find All Factors of a Natural number
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The factors for the numbers are : ");
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
}