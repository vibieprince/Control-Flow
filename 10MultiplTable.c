// C Program to Generate multiplication table
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number whose multiplication table you want : ");
    scanf("%d",&num);
    for(int i=1 ; i<=10 ;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
}