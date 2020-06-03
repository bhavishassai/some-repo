#include<iostream>
// For c change to #include<stdio.h>

int main(){
    /* Here n is the number given by user.
    isPrime is an integer variable which tells us
     whether the number is prime or not.
    if isPrime  = 1 ; the number is prime otherwise not
    By default we have set it to 1 ie prime 
    */
    int n,isPrime = 1;

    printf("Enter a number :  ");
    scanf("%d",&n);

    /* 1 is not a prime number.
    Prime number is a natural number >1 and 
    only divisible by itself and one
    */
    if(n==1)
      printf(" 1 is not a prime number \n");

    /* We get to know number is prime by dividing  number(n)/ i 
    (i keeps on increasing from 2 to n/2. ) If remainder is equal 
    to 0 then the number is not prime else prime.
     */  

    for(int i=2;i<=n/2;i++){
        
        if(n%i==0)
          isPrime = 0;
    } 
    if(isPrime==1)
      printf("%d is a prime number \n",n);
    else
      printf("%d is not a prime number \n",n); 


    return 0;
}