// C Program to print fibonancci series upto n term
#include<stdio.h>
int main(){
    int prev1=0,prev2=1,count;
    printf("Enter the number of terms upto you want : ");
    scanf("%d",&count);
    for(int i=1;i<=count;i++){
        if(i>2){
            int num = prev1 + prev2;
            prev1 = prev2;
            prev2 = num;
            printf("%d ",num);
        }
        if(i==1){
            printf("%d ",prev1);
        }
        if(i==2){
            printf("%d ",prev2);
        }
    }
}