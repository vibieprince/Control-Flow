// C Program to Display Armstrong Numbers between 1 to 100
#include<stdio.h>
#include<math.h>
int main(){
    int i,sum,num,count=0;
    printf("All Armstong number between 1 and 1000 are : \n");
    for(i=1;i<=1000;i++){
        num=i;
        while(num !=0){
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num%10,count) + pow((num%100 - num%10)/10,count) + pow((num%1000-num%100)/100,count);
        if(sum==i){
            printf("%d ",i);
        }
        count = 0;
    }
}