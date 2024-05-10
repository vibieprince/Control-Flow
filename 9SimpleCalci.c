// C Program to make a simple calculator
#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    double a,b;
    while(1){
        printf("Enter the opeartions [+,-,*,/]"
        "click 'X' to exit : ");
        scanf("%c",&ch);

        if(ch=='X' || ch == 'x')
           exit(0);

        printf("Enter the two numbers : ");
        scanf("%lf %lf",&a,&b);

        switch(ch){
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n",a,b,a+b);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n",a,b,a-b);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n",a,b,a*b);
                break;
            case '/':
                printf("%.1lf / %.1lf = %.1lf\n",a,b,a/b);
                break;
            default:
                printf("Error! Please write a valid operation.");
        }
        printf("\n");
    }
}