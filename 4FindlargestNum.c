// C Program to find largest number among the three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c)
      printf("%d is the greatest",a);
    else if(b>a && b>c)
        printf("%d is the greatest",b);
    else
        printf("%d is the greatest",c);
}