ASSIGNMENT-1

QUESTION-1)

INPUT
#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int sum=0, temp, remainder, digits=0;
    temp=num;
    while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }
    temp=num;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    
    
    if (sum == num){
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


OUTPUT
/tmp/P44QOy69YA.o
Enter a number: 153
153 is an Armstrong number.


=== Code Execution Successful ===





QUESTION-2)

INPUT
#include <stdio.h>

int calculateHCF(int a, int b) {
    int min = (a < b) ? a : b;  
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;  
        }
    }
 
    return 1;  
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int hcf = calculateHCF(num1, num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}



Output
/tmp/3A3HC5p6SF.o
Enter two integers: 2 42
The HCF of 2 and 42 is: 2


=== Code Execution Successful ===





QUESTION-3)

INPUT
#include <stdio.h>
int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The result of %d - %d is: %d\n", num1, num2, subtract(num1, num2));
    return 0;
}



Output
/tmp/BPlUf084mW.o
Enter two integers: 55 4
The result of 55 - 4 is: 51


=== Code Execution Successful ===





QUESTION-4)

INPUT
#include <stdio.h>
//METHOD-1
void swapUsingTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//METHOD-2
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;  
    *b = *a - *b; 
    *a = *a - *b;  
}
//METHOD-3
void swapUsingXOR(int *a, int *b) {
    if (a != b) {  
        *a = *a ^ *b;  
        *b = *a ^ *b;  
        *a = *a ^ *b;  
    }
}
//METHOD-4
void swapUsingPointer(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nOriginal values: num1 = %d, num2 = %d\n", num1, num2);

    //METHOD-1
    swapUsingTemp(&num1, &num2);
    printf("\nAfter swapping using temp variable: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingTemp(&num1, &num2);

    //METHOD-2
    swapUsingArithmetic(&num1, &num2);
    printf("\nAfter swapping using arithmetic: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingArithmetic(&num1, &num2);

    //METHOD-3
    swapUsingXOR(&num1, &num2);
    printf("\nAfter swapping using XOR: num1 = %d, num2 = %d\n", num1, num2);

   swapUsingXOR(&num1, &num2);

   //METHOD-4
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    swapUsingPointer(&ptr1, &ptr2);
    printf("\nAfter swapping using Pointer manipulation: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}



OUTPUT
/tmp/fmlA7dbc7A.o
Enter two integers: 4 5

Original values: num1 = 4, num2 = 5

After swapping using temp variable: num1 = 5, num2 = 4

After swapping using arithmetic: num1 = 5, num2 = 4

After swapping using XOR: num1 = 5, num2 = 4

After swapping using Pointer manipulation: num1 = 4, num2 = 5


=== Code Execution Successful ===





QUESTION-5)

INPUT
#include <stdio.h>
int is_perfect_number(int num) {
    int sum_of_divisors = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }
    if (sum_of_divisors == num) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_perfect_number(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is not a Perfect Number.\n", number);
    }
    return 0;
}




Output
/tmp/q54vhjGE9I.o
Enter a number: 6
6 is a Perfect Number.


=== Code Execution Successful ===


/tmp/geC1CuNFZL.o
Enter a number: 23
23 is not a Perfect Number.


=== Code Execution Successful ===





QUESTION-6)

INPUT
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the x and y coordinates: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) 
    {
        printf("The coordinate point (%d, %d) lies in the First quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("The coordinate point (%d, %d) lies in the Second quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("The coordinate point (%d, %d) lies in the Fourth quadrant.\n", x, y);
    }
    else if (x == 0 && y != 0) 
    {
        printf("The coordinate point (%d, %d) lies on the Y-axis.\n", x, y);
    }
    else if (y == 0 && x != 0) 
    {
        printf("The coordinate point (%d, %d) lies on the X-axis.\n", x, y);
    }
    else {
        printf("The coordinate point (%d, %d) lies at the Origin.\n", x, y);
    }

    return 0;
}




OUTPUT
/tmp/gAIwVxWffY.o
Enter the x and y coordinates: 8 9
The coordinate point (8, 9) lies in the First quadrant.


=== Code Execution Successful ===




QUESTION-7)

INPUT
#include <stdio.h>
#include <math.h>
int binary_to_decimal(int binary) {
    int decimal = 0, remainder, i = 0;
    while (binary != 0) {
        remainder = binary % 10;
        decimal+=remainder * pow(2, i);
        i++;
        binary /= 10;
    }
    return decimal;
}
void decimal_to_binary(int decimal) {
    int binary[32];  
    int index = 0;
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main() {
    int choice, number;
    printf("Choose the operation:\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("Decimal: %d\n", binary_to_decimal(number));
    }
    else if (choice == 2)
    {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        decimal_to_binary(number);
    }
    else
    {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}




Output
/tmp/zQ3HzYRTpf.o
Choose the operation:
1. Convert Binary to Decimal
2. Convert Decimal to Binary
Enter your choice (1 or 2): 2
Enter a decimal number: 13
Binary: 1101


=== Code Execution Successful ===


/tmp/2AXr4fEOW1.o
Choose the operation:
1. Convert Binary to Decimal
2. Convert Decimal to Binary
Enter your choice (1 or 2): 1
Enter a binary number: 1101
Decimal: 13


=== Code Execution Successful ===




QUESTION-8)

Input
#include <stdio.h>
int main() {
    int i, j, n = 5; 
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
           
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}



OUTPUT
/tmp/zWKJdFXv87.o
1
01
101
0101
10101


=== Code Execution Successful ===






QUESTION-9)

INPUT
#include <stdio.h>
int main() {
    int i, j, n = 5;  
    for (i = 1; i <= n; i++) 
    {
      for (j = 1; j <= i; j++)
      {
            if (j % 2 == 0) 
            {
                printf("1");
            } else {
                printf("0");
            }
        }

        
        for (j = 1; j <= 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }

       
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}



OUTPUT
/tmp/PG26xoa9u4.o
0       0
01     01
010   010
0101 0101
0101001010


=== Code Execution Successful ===






QUESTION-10)

INPUT
#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
long long binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
       for (int space = 0; space < n - i - 1; space++)
       {
            printf(" ");
       }
         for (int j = 0; j <= i; j++) 
         {
            printf("%lld ", binomialCoefficient(i, j));
         }
        printf("\n");
    }
    return 0;
}




OUTPUT
/tmp/Xh9gLldYwy.o
Enter the number of rows for Pascal's Triangle: 5
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 


=== Code Execution Successful ===

