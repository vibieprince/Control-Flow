// C Program to display prime numbers between intervals
#include<stdio.h>
int main(){
    int start = 1,end=100,flag;
    for(int i=start;i<=end ; i++){
        if(i==1 || i==0)
           continue;
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                flag = 0;
            }
        }
        if(flag){
            printf("%d ",i);
        }
    }
}