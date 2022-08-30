/* 
Name Of the Candidate: G.Jasmin
Roll No: 204G1A0542
Title of the Experiment: CPU Scheduling Using FCFS Algorithm
Date of Creation: 30-08-2022
Date of Execution: 30-08-2022
*/
// Source Code
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   
