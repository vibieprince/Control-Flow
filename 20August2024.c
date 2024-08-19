#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h> // for toupper
int fibo(int m){
    if(m==1)
      return 0;
    if(m==2)
      return 1;
    else
      return fibo(m-1)+fibo(m-2);
}
void swap(int *x,int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
}
int maxNum(int *arr,int n){
    int i,max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max)
          max = arr[i];
    }
    return max;
}
int fact(int m){
   if(m==0)
     return 1;
   else
     return m*fact(m-1);
}
int main(){
    // 1 WAP a program in C to check whether the input number is even or odd using ternary operator
    // int a = 7;
    // (a%2==0) ? printf("Even"): printf("Odd");

    // 2 WAP to count the number of digits in the input number that is entered by the user
    // int num,c=0;
    // printf("Enter the number : ");
    // scanf("%d",&num);
    // while(num){
    //     c++;
    //     num /= 10;
    // }
    // printf("Number of digits : %d",c);

    // 3 WAP to input floating point number and find leftmost digit of integral part of number
    // float n;
    // int num,r;
    // printf("Enter the number : ");
    // scanf("%f",&n);
    // num = (int)n;
    // while(num){
    //     r = num%10;
    //     num /= 10;
    // }
    // printf("Leftmost digit : %d",r);

    // 4 WAP to find the reverse number of the number entered by the user
    // int num,r,rev=0;
    // printf("Enter the number : ");
    // scanf("%d",&num);
    // while(num){
    //     r = num%10;
    //     rev = rev*10+r;
    //     num /= 10;
    // }
    // printf("Revrsed number : %d",rev);

    // 5 WAP to perform the operations (addition,subtraction,multiplication,division and modulus) of a calculator with the help of switch statement. Values the two operands and operator are entered by the user.
    // char ch;
    // int a,b,c;
    // printf("Enter the two numbers : ");
    // scanf("%d%d",&a,&b);
    // printf("Enter operation to be performed {+,*,/,%%,-} : ");
    // fflush(stdin);
    // scanf("%c",&ch);
    // switch(ch){
    //     case '+':
    //     c = a + b;
    //     printf("%d + %d = %d",a,b,c);
    //     break;
    //     case '-':
    //     c = a - b;
    //     printf("%d - %d = %d",a,b,c);
    //     break;
    //     case '*':
    //     c = a * b;
    //     printf("%d * %d = %d",a,b,c);
    //     break;
    //     case '/':
    //     c = a / b;
    //     printf("%d / %d = %d",a,b,c);
    //     break;
    //     case '%':
    //     c = a % b;
    //     printf("%d %% %d = %d",a,b,c);
    //     break;
    //     default:
    //     printf("Enter a valid operator!!");
    //     break;
    // }

   // 6 WAP to find largest number among the three numbers
//    int a=9,b=13,c=14;
//    if(a>b){
//     if(a>c)
//       printf("%d is greatest number",a);
//     else
//       printf("%d is greatest number",c);
//    }
//    else{
//     if(b>c)
//       printf("%d is greatest number",b);
//     else
//       printf("%d is greatest number",c);
//    }

   // 7 WAP to print the following pattern
//    *
//    * *
//    * * *
//    * * * *
//    * * *
//    * *
//    * 
//    for(int i=1;i<5;i++){
//     for(int j=0;j<i;j++){
//         printf("* ");
//     }
//     printf("\n");
//    }
//    for(int i=3;i>0;i--){
//     for(int j=0;j<i;j++){
//         printf("* ");
//     }
//     printf("\n");
//    }

   // 8 WAP to print the fibonacci series upto the user's choice with the process in which the funcion calls itself.
//    int term,i;
//    printf("Enter the number of terms upto you want to print the fibonacci series : ");
//    scanf("%d",&term);
//    for(i=1;i<=term;i++){
//     printf("%d ",fibo(i));
//    }

   // 9 WAP to check whether the entered number is prime or not
//    int num,i,isPrime=1;
//    printf("Enter the number : ");
//    scanf("%d",&num);
// //    for(i=2;i*i<num;i++){ OR
//     for(i=2;i<num/2;i++){
//     if(num%i==0)
//       isPrime = 0;
//    }
//    if(isPrime)
//      printf("%d is a Prime number",num);
//    else
//      printf("%d is not a Prime number",num);

   // 10 WAP to print the multiplication of two dimensional matrices with m*n dimensions.
//    int m1,n1,m2,n2,mat1[10][10],mat2[10][10],result[10][10],i,j,k;
//    printf("Enter the size of matrix 1 in (m,n) : ");
//    scanf("%d%d",&m1,&n1);
//    for(i=0;i<m1;i++){
//     for(j=0;j<n1;j++){
//         printf("Enter element [%d][%d] : ",i,j);
//         scanf("%d",&mat1[i][j]);
//     }
//    }
//    printf("\n");
//    printf("Enter the size of matrix 2 in (m,n) : ");
//    scanf("%d%d",&m2,&n2);
//    for(i=0;i<m2;i++){
//     for(j=0;j<n2;j++){
//         printf("Enter element [%d][%d] : ",i,j);
//         scanf("%d",&mat2[i][j]);
//     }
//    }
//    if(n1!=m2)
//      printf("Matrix multiplication not possible");
//    else{
//      printf("Multiplied matrix\n");
//         for(i=0;i<m1;i++){
//            for(j=0;j<n2;j++){
//                result[i][j]=0;
//                for(k=0;k<n1;k++){
//                   result[i][j] += mat1[i][k]*mat2[k][j];
//                 }
//                 printf("%d ",result[i][j]);
//             }
//             printf("\n");
//         }
//     }

   // 11 WAP to print greatest number of an array using the array passing to function concept.
//    int arr[] = {49,50,30,22,5,42};
//    printf("Maximum element : %d",maxNum(arr,6));

   // 12 WAP to implement bubblesort
   // int i,j,temp,arr[] = {59,22,3,0,23,5};
   // for(i=1;i<5;i++){
   //    for(j=0;j<5-i;j++){
   //       if(arr[j]>arr[j+1]){
   //          temp = arr[j];
   //          arr[j] = arr[j+1];
   //          arr[j+1] = temp;
   //       }
   //    }
   // }
   // for(i=0;i<6;i++){
   //    printf("%d ",arr[i]);
   // }

   // 13 WAP to write multiple lines to a text file
   // FILE *ptr;
   // ptr = fopen("text.txt","w");
   // int num;
   // printf("Enter the number of lines to be written : ");
   // scanf("%d",&num);
   // char str[25] = "Test line";
   // for(int i=1;i<= num;i++){
   //    fprintf(ptr,"%s %d\n",str,i); // prints content  in the text file
   // }

   // 14 WAP to print sum of elements initialised at the dynamic memory allocated by the user.
   // int i,n,sum=0,*ptr;
   // printf("Enter the number of elements : ");
   // scanf("%d",&n);
   // ptr = (int*)malloc(n*sizeof(int));
   // if(ptr==NULL)
   //   printf("Insufficient space!!");
   // else{
   //    printf("Enter the elements : \n");
   //    for(i=0;i<n;i++){
   //       printf("Enter element %d : ",i);
   //       scanf("%d",ptr+i);
   //       sum += (*ptr+i);
   //    }
   //    printf("Sum : %d",sum);
   // }

   // 15 WAP to print sum of two numbers if both numbers are positive otherwise print difference of both numbers using ternary operator.
   // int a,b,c;
   // printf("Enter the two numbers : ");
   // scanf("%d%d",&a,&b);
   // (a>0)&&(b>0)?(c=a+b):(c=a-b);
   // printf("%d",c);

   // 16 WAP to print electricity bill as per the conditions below:
   // 1. For first 200 units No bill charges 
   // 2. For next 100 unit charges Rs. 3.00/unit 
   // 3. For next 100 units charges Rs. 4.00/unit 
   // 4. For unit above 400 units charges Rs. 6.00/unit 
   // 5. If bill exceeds Rs. 500 then a surcharge of 15% will be charged 
   // 6. Minimum bill must be of Rs. 100;
   //    Note : Electricity units must be taken at runtime.
   // float units,bill;
   // printf("Enter the units : ");
   // scanf("%f",&units);
   // if(units<=200)
   //   bill = 100;
   // else if(units<=300)
   //   bill = (units-200)*3+100;
   // else if(units<=400)
   //   bill = (units-300)*4+100+300;
   // else
   //   bill = (units-500)*6 + 100+300+400;
   // if(bill>500)
   //   bill = bill + (bill)*0.15;
   // printf("Total electricity bill = Rs.%.2f",bill);

   // 17 WAP to find factorial value of a number.
   // long int num,fact=1;
   // printf("Enter the number : ");
   // scanf("%ld",&num);
   // while(num){
   //    fact = fact*num;
   //    num--;
   // }
   // printf("Factorial = %ld",fact);

   // 18 WAP to find the reverse of a negative number.The number is inputted by the user.
   // int n,num,r,rev=0;
   // printf("Enter the number : ");
   // scanf("%d",&n);
   // if(n<0){
   //    num = (-1)*n;
   //    while(num){
   //       r = num%10;
   //       rev = rev*10+r;
   //       num /= 10;
   //    }
   //    rev = (-1)*rev;
   // }
   // else{
   //    while(n){
   //       r = n%10;
   //       rev = rev*10+r;
   //       n /= 10;
   //    }
   // }
   // printf("Reversed number : %d",rev);

   // 19 WAP to check whether an entered number is even or odd without using modulus operator using consitional statement.
   // int n;
   // printf("Enter the number : ");
   // scanf("%d",&n);
   // if((n&1)==0)
   //   printf("%d is Even number",n);
   // else 
   //   printf("%d is Odd number",n);
   
   // 20 WAP to calculate a^b without using power function.
   // int a,b,result=1;
   // printf("Enter the two numbers : ");
   // scanf("%d%d",&a,&b);
   // while(b){
   //    result = result*a;
   //    b--;
   // }
   // printf("Result = %d",result);

   // 21 WAP to find the factorial of a given number using recursive method.
   // int num;
   // printf("Enter the number : ");
   // scanf("%d",&num);
   // printf("Factorial = %d",fact(num));

   // 22 WAP to print grades as per the following criteria
   // int marks;
   // printf("Enter the marks : ");
   // scanf("%d",&marks);
   // if(marks>90 && marks<=100)
   //   printf("GRADE A+");
   // else if(marks>80 && marks<=90)
   //   printf("GRADE A");
   // else if(marks>70 && marks<=80)
   //   printf("GRADE B+");
   // else if(marks>60 && marks<=70)
   //   printf("GRADE B");
   // else if(marks>50 && marks<=60)
   //   printf("GRADE C");
   // else
   //   printf("GRADE F");
   
   // 23 WAP to print the following pattern
   // 1 2 3 4 5
   // 1 2 3 4
   // 1 2 3
   // 1 2
   // 1
   // int i,j;
   // for(i=5;i>0;i--){
   //    for(j=1;j<=i;j++){
   //      printf("%d ",j);
   //    }
   //    printf("\n");
   // }

   // 24 WAP to implement selection sort
   // int i,j,min,temp,arr[] = {58,20,48,202,4903,30};
   // int n = 6;
   // for(i=0;i<n-1;i++){
   //    min = i;
   //    for(j=i+1;j<n;j++){
   //       if(arr[j]<arr[min])
   //          min = j;
   //    }
   //    temp = arr[i];
   //    arr[i] = arr[min];
   //    arr[min] = temp;
   // }
   // for(i=0;i<n;i++){
   //    printf("%d ",arr[i]);
   // }

   // 25 WAP to write some text matter into a file "example.txt" and then read this text matter and display it on console using file handling methods.
   // FILE *p;
   // char str[100];
   // p = fopen("example.txt","w");
   // if(p==NULL)
   //   printf("Insufficient space");
   // fprintf(p,"Hello world");
   // fclose(p);
   // p = fopen("example.txt","r");
   // if(p==NULL)
   //   printf("Insufficient space");
   // printf("File contents\n");
   // while(fgets(str,sizeof(str),p)!=NULL){
   //    printf("%s",str);
   // }
   // fclose(p);

   // 26 WAP to check number is armstrong or not
   // int num,n,r,sum=0;
   // printf("Enter the number : ");
   // scanf("%d",&num);
   // n = num;
   // while(n){
   //    r = n%10;
   //    sum += (r*r*r);
   //    n /= 10;
   // }
   // if(num==sum)
   //   printf("Number is Armstrong.");
   // else
   //   printf("Not a Armstrong number.");

   // 27 WAP to check whether the number is Palidrome or not
   // int num,n,r,rev=0;
   // printf("Enter the number : ");
   // scanf("%d",&num);
   // n = num;
   // while(n){
   //    r = n%10;
   //    rev = rev*10+r;
   //    n /= 10;
   // }
   // if(num==rev)
   //   printf("Number is Palindrome");
   // else
   //   printf("Number is not a Palindrome");

   // 28 WAP to sum all digonal elements of a matrix;
   // int n,sumLeft=0,sumRight=0,i,j,arr[10][10];
   // printf("Enter the size of the matrix : ");
   // scanf("%d",&n);
   // for(i=0;i<n;i++){
   //    for(j=0;j<n;j++){
   //       printf("Enter the element [%d][%d] : ",i,j);
   //       scanf("%d",&arr[i][j]);
   //    }
   // }
   // for(i=0;i<n;i++){
   //    for(j=0;j<n;j++){
   //       if(i==j)
   //         sumLeft += arr[i][j];
   //       else if((i+j)==n-1)
   //         sumRight += arr[i][j];
   //    }
   // }
   // printf("Sum of Left Diagonal : %d\n",sumLeft);
   // printf("Sum of Right Diagonal : %d",sumRight);

   // 29 WAP to copy content of one file into another file
   // FILE *p,*q;
   // char fname1[50],fname2[50],ch;
   // printf("Enter the source file : ");
   // gets(fname1);
   // puts("Enter destination file : ");
   // gets(fname2);
   // p = fopen(fname1,"r");
   // q = fopen(fname2,"w");
   // if(p==NULL || q==NULL)
   //   perror("No such file exist");
   // else{
   //    while(1){
   //       ch = fgetc(p);
   //       if(ch==-1)
   //          break;
   //       fputc(ch,q);
   //    }
   //    fclose(p);
   //    fclose(q);
   //    p = fopen(fname2,"r");
   //    while(1){
   //       ch = fgetc(q);
   //       if(ch==-1)
   //       break;
   //       putchar(ch);
   //    }
   // }

   // 30 WAP to find maximum of three by using ternary operator
   // int a=0,b=3,c=2,max;
   // max = (a>b)?(a>c)? a:c :(b>c)?b:c;
   // printf("%d is the greatest",max);

   // 31 WAP to check string Palindrome
   // char str[10] = "NITIN";
   // int low=0,high,flag=1,i;
   // // while(str[i]){
   // //    str[i] = toupper(str[i]); /// Not working
   // //    i++;
   // // } 
   // high = strlen(str)-1;
   // while(low<high){
   //    if(str[low]!= str[high])
   //     flag = 0;
   //    low++;
   //    high--;
   // }
   // if(flag)
   //   printf("String is a Palindrome");
   // else
   //   printf("String is not a Palindrome");

   // 32 WAP to swap two values by using call by reference
   // int a = 6,b=2;
   // printf("Before Swapping : a = %d b = %d\n",a,b);
   // swap(&a,&b);
   // printf("After Swapping : a = %d b = %d",a,b);
}