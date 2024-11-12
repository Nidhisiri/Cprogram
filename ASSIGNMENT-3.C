ASSIGNMENT-3


INPUT
#include <stdio.h>
#include <math.h>
      
      void Addition(){
      int a,b;
      printf("Enter first number: ");
      scanf("%d",&a);
      printf("Enter second number: ");
      scanf("%d",&b);
      printf("SUM %d",a+b);
      }
      
      void Subtraction(){
      int a,b;
      printf("Enter the first number: ");
      scanf("%d",&a);
      printf("Enter the second number: ");
      scanf("%d",&b);
      if(a>b) 
      printf("Subtraction %d",a-b);
      else
      printf("Subtraction %d",b-a);
      }
      
      void Multiplication(){
      int a,b;
      printf("Enter first number: ");
      scanf("%d",&a);
      printf("Enter second number: ");
      scanf("%d",&b);
      printf("Multiplication %d",a*b);
      }
      
      void Division(){
      int a,b;
      printf("Enter first number: ");
      scanf("%d",&a);
      printf("Enter second number: ");
      scanf("%d",&b);
      if(a>b)
      printf("Division %d",a/b);
      else
      printf("Division %d",b/a);
      }
      
      void Log(){
      double a;
      printf("Enter the value of a number to find the logarithm(base e): ");
      scanf("%lf",&a);
      if(a>0)
      printf("%lf",log(a));
      else
      printf("ERROR! Logarithm of non-positive numbers are not defined.\n");
      }
      
      void Squareroot(){
      double a;
      printf("Enter a number to find the square root: ");
      scanf("%lf",&a);
      if(a>=0)
      printf("%lf",sqrt(a));
      else
      printf("ERROR! Square root of a negative number is not defined.\n");
      }
      
      int main(){
      printf("WELCOME TO SIMPLE CALCULATOR \n It can perform\n1) Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Logarithm\n6)Square Root\n");
      printf("Enter your Choice: ");
      int choice;
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          Addition();
          break;
          
          case 2:
          Subtraction();
          break;
          
          case 3:
          Multiplication();
          break;
          
          case 4:
          Division();
          break;
          
          case 5:
          Log();
          break;
          
          case 6:
          Squareroot();
          break;
          
          default:
          printf("Entered the wrong choice");
          break;
      }
      return 0;
}
          
          
Output
/tmp/HQACv36C4F.o
WELCOME TO SIMPLE CALCULATOR 
 It can perform
1) Addition
2)Subtraction
3)Multiplication
4)Division
5)Logarithm
6)Square Root
Enter your Choice: 3
Enter first number: 8
Enter second number: 9
Multiplication 72

=== Code Execution Successful ===
