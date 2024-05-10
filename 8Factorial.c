#include<stdio.h>
int main(){
    int fact,factorial=1;
    printf("Enter the number whose factorial you want : ");
    scanf("%d",&fact);
    for(int i=fact; i>=1 ; i--){
        factorial *= i;
    }
    printf("%d",factorial);
}