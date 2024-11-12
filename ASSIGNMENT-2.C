ASSIGNMENT-2


QUESTION-1:

INPUT
//Write a program to increase every student mark by 5 and then print the updated array.
#include <stdio.h>
#include <math.h>
int main() {
    int marks[10],i;
    for(i=0;i<10;i++)
    {
        printf("\n Enter the marks for student %d :",i);
        scanf("%d",&marks[i]);
        marks[i]=marks[i]+5;
        printf(" MARKS :%d",marks[i]);
    }
    
    return 0;
}
   

OUTPUT
Enter the marks for student 0 :2
 MARKS :7
 Enter the marks for student 1 :8
 MARKS :13
 Enter the marks for student 2 :9
 MARKS :14
 Enter the marks for student 3 :6
 MARKS :11
 Enter the marks for student 4 :8
 MARKS :13
 Enter the marks for student 5 :5
 MARKS :10
 Enter the marks for student 6 :7
 MARKS :12
 Enter the marks for student 7 :4
 MARKS :9
 Enter the marks for student 8 :3
 MARKS :8
 Enter the marks for student 9 :7
 MARKS :12

=== Code Execution Successful ===








QUESTION-2:

INPUT
//Write a program to print the grade of students as per their marks.(>=75--A grade, 74 to 60--B grade, 59 to 40--C grade below 40--D grade).
#include <stdio.h>
#include <math.h>
int main() {
    
    int marks[10],i;
    for(i=0;i<10;i++)
    {
        printf("\n Enter the marks for student %d :",i);
        scanf("%d",&marks[i]);
        int total=100;
        if(marks[i]>=75)
        {
            printf("Grade A");
        }
        else if(marks[i]>=60)
        {
            printf("Grade B");
        }
        else if(marks[i]>=40)
        {
            printf("Grade C");
        }
        else
        {
            printf("Grade D");
        }
    }
    
    
    
    }
    
    return 0;
}




OUTPUT
Enter the marks for student 0 :56
Grade C
 Enter the marks for student 1 :78
Grade A
 Enter the marks for student 2 :45
Grade C
 Enter the marks for student 3 :87
Grade A
 Enter the marks for student 4 :99
Grade A
 Enter the marks for student 5 :45
Grade C
 Enter the marks for student 6 :99
Grade A
 Enter the marks for student 7 :99
Grade A
 Enter the marks for student 8 :60
Grade B
 Enter the marks for student 9 :34
Grade D

=== Code Execution Successful ===







QUESTION-3:

INPUT
//Write a program to find who scored first "99" in an array marks.

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    int flag=0;
   
    int marks[10]={44,88,90,76,99,75,56,67,99,70};
    for(i=0;i<10;i++)
    {
        
      
        if(marks[i]==99)
        {flag=1;
        printf("\nindex=%d   \nmarks[i]=%d",i,marks[i]);
        break;}
    }
    if(flag==0)
    printf("NOBODY GOT 99");
    
    
    return 0;
}



OUTPUT
index=4   
marks[i]=99

=== Code Execution Successful ===






QUESTION-4:

INPUT

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    int marks[10]={44,88,90,76,99,99,56,67,99,70};
    for(i=0;i<10;i++)
    {
        if(marks[i]==99)
        {
        printf("\nindex=%d   \nmarks[i]=%d",i,marks[i]);
       
        }
    }
    return 0;
}


OUTPUT
index=4   
marks[i]=99
index=5   
marks[i]=99
index=8   
marks[i]=99

=== Code Execution Successful ===






QUESTION-5:

INPUT
//Write a program to find the sum of all scores in Marks array.

#include <stdio.h>
#include <math.h>
int main() {
    int max=5,sum=0;
    int marks[max],i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the marks for student %d :",i);
        scanf("%d",&marks[i]);
        
    }
        for(i=0;i<5;i++)
       {
        sum=sum+marks[i];
       }
    
    printf(" SUM :%d",sum);
    return 0;
}


OUTPUT
Enter the marks for student 0 :76

 Enter the marks for student 1 :58

 Enter the marks for student 2 :97

 Enter the marks for student 3 :43

 Enter the marks for student 4 :87
 SUM :361

=== Code Execution Successful ===







QUESTION-6:

INPUT
//Write a program to find average score of the Marks array.

#include <stdio.h>
#include <math.h>
int main() {
    int max=5,sum=0,avg=0;
    int marks[max],i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the marks for student %d :",i);
        scanf("%d",&marks[i]);
    }
        for(i=0;i<5;i++)
       {
       sum=sum+marks[i];
       avg=sum/5;
       }
    printf(" AVERAGE :%d",avg);
    return 0;
}




OUTPUT
Enter the marks for student 0 :54

 Enter the marks for student 1 :35

 Enter the marks for student 2 :78

 Enter the marks for student 3 :96

 Enter the marks for student 4 :56
 AVERAGE :63

=== Code Execution Successful ===






QUESTION-7:

INPUT
#include <stdio.h>
int main() {
    int n; 
    printf("Enter the number of scores: ");
    scanf("%d", &n);
    int scores[n]; 
    printf("Enter the scores:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &scores[i]);
    }
    printf("Results:\n");
    for (int i = 0; i < n; i++)
    {
        if (scores[i] % 2 == 0)
        {
            printf("Score %d is Even\n", scores[i]);
        } else {
            printf("Score %d is Odd\n", scores[i]);
        }
    }
    return 0;
}


OUTPUT
/tmp/Z6W50nlVj5.o
Enter the number of scores: 3
Enter the scores:
8
9
7
Results:
Score 8 is Even
Score 9 is Odd
Score 7 is Odd


=== Code Execution Successful ===






QUESTION-8:

INPUT
#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; 
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &marks[i]);
    }
    int max = marks[0];
    int min = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] > max) 
        {
            max = marks[i]; 
        }
        if (marks[i] < min)
        {
            min = marks[i];  
        }
    }
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    return 0;
}




OUTPUT
/tmp/USGI7knChz.o
Enter the number of students: 6
Enter the marks of 6 students:
87
56
89
49
90
26
Maximum score: 90
Minimum score: 26


=== Code Execution Successful ===






QUESTION-9:

INPUT
#include <stdio.h>
int findPeak(int arr[], int n) {
    if (n == 1 || arr[0] >= arr[1])
    {
        return 0; 
    }
    if (arr[n-1] >= arr[n-2])
    {
        return n-1; 
    }
    for (int i = 1; i < n-1; i++) 
    {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) 
        {
            return i; 
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Array size must be greater than 0.\n");
        return -1; 
    }
    int arr[n]; 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int peakIndex = findPeak(arr, n);
    if (peakIndex != -1)
    {
        printf("Peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    } else {
        printf("No peak element found.\n");
    }
    return 0;
}




Output
/tmp/B1Zq5PtJAn.o
Enter the number of elements: 5
Enter the elements of the array:
1
2
10
3
0
Peak element is 10 at index 2


=== Code Execution Successful ===






QUESTION-10:

INPUT
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) return false;  
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;  
    }
    return true;  
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Array size must be greater than 0.\n");
        return -1; 
    }

    int arr[n];  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int primeCount = 0;
    for (int i = 0; i < n; i++) 
    {
        if (isPrime(arr[i]))
        {
            primeCount++; 
        }
    }
    printf("The number of prime numbers in the array is: %d\n", primeCount);
    return 0;
}




OUTPUT
/tmp/82nkv1IJD5.o
Enter the number of elements: 6
Enter the elements of the array:
2
6
8
7
11
13
The number of prime numbers in the array is: 4


=== Code Execution Successful ===






QUESTION-11:

INPUT
#include <stdio.h>
void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertFront(int arr[], int *n, int element) {
    for (int i = *n; i > 0; i--)
    {
        arr[i] = arr[i - 1];  
    }
    arr[0] = element;  
    (*n)++; 
}
void insertAtPosition(int arr[], int *n, int element, int pos) {
    if (pos > *n || pos < 0)
    {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *n; i > pos; i--)
    {
        arr[i] = arr[i - 1];  
    }
    arr[pos] = element;  
    (*n)++;  
}
void insertEnd(int arr[], int *n, int element) {
    arr[*n] = element;  
    (*n)++; 
}
int main() {
    int n, element, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Before Insert:\n");
    printArray(arr, n);

    printf("\nEnter the element to insert at the front: ");
    scanf("%d", &element);
    insertFront(arr, &n, element);
    printf("After inserting at the front:\n");
    printArray(arr, n);

    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    insertAtPosition(arr, &n, element, pos);
    printf("After inserting at position %d:\n", pos);
    printArray(arr, n);

    printf("\nEnter the element to insert at the end: ");
    scanf("%d", &element);
    insertEnd(arr, &n, element);
    printf("After inserting at the end:\n");
    printArray(arr, n);
    return 0;
}




OUTPUT
/tmp/cImMuFeJR1.o
Enter the number of elements in the array: 4
Enter the elements of the array:
1
2
3
4
Before Insert:
Array: 1 2 3 4 

Enter the element to insert at the front: 1
After inserting at the front:
Array: 1 1 2 3 4 

Enter the element to insert: 3
Enter the position to insert (0 to 5): 3
After inserting at position 3:
Array: 1 1 2 3 3 4 

Enter the element to insert at the end: 5
After inserting at the end:
Array: 1 1 2 3 3 4 5 


=== Code Execution Successful ===






QUESTION-12:

INPUT
#include <stdio.h>
void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deleteFront(int arr[], int *n) {
    for (int i = 0; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--; 
}
void deleteAtPosition(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n)
    {
        printf("Invalid position!\n");
        return;
    }
   
    for (int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;  
}
void deleteEnd(int arr[], int *n) {
    (*n)--;  
}

int main() {
    int n, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Array size must be greater than 0.\n");
        return -1;
    }

    int arr[n];  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    printf("Before Delete:\n");
    printArray(arr, n);

    deleteFront(arr, &n);
    printf("After deleting the front element:\n");
    printArray(arr, n);

    printf("\nEnter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    deleteAtPosition(arr, &n, pos);
    printf("After deleting the element at position %d:\n", pos);
    printArray(arr, n);

    deleteEnd(arr, &n);
    printf("After deleting the last element:\n");
    printArray(arr, n);
    return 0;
}




OUTPUT
/tmp/8yRCRTFGWy.o
Enter the number of elements in the array: 5
Enter the elements of the array:
1
2
3
4
5
Before Delete:
Array: 1 2 3 4 5 
After deleting the front element:
Array: 2 3 4 5 

Enter the position to delete (0 to 3): 3
After deleting the element at position 3:
Array: 2 3 4 
After deleting the last element:
Array: 2 3 


=== Code Execution Successful ===






QUESTION-13:

INPUT
#include <stdio.h>
void rotateArray(int arr[], int n) {
     int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Array size must be greater than 0.\n");
        return -1;
    }
    int arr[n];  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array:\n");
    printArray(arr, n);

    rotateArray(arr, n);

    printf("Array after rotating clockwise by one position:\n");
    printArray(arr, n);
    return 0;
}




OUTPUT
/tmp/n4d2LK92Bb.o
Enter the number of elements in the array: 7
Enter the elements of the array:
1
2
3
4
5
6
7
Original Array:
1 2 3 4 5 6 7 
Array after rotating clockwise by one position:
7 1 2 3 4 5 6 


=== Code Execution Successful ===






QUESTION-14:

INPUT
#include <stdio.h>
void printDuplicates(int arr[], int n) {
    int foundDuplicate = 0;  
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) 
        {
            continue;
        }
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);  
                foundDuplicate = 1;    
                break;
            }
        }
    }
    if (!foundDuplicate)
    {
        printf("-1\n");
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Array size must be greater than 0.\n");
        return -1;
    }
    int arr[n];  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicates in the array are: ");
    printDuplicates(arr, n);
    return 0;
}




OUTPUT
/tmp/wCphiA6KiO.o
Enter the number of elements in the array: 10
Enter the elements of the array:
1
2
2
3
4
5
5
6
7
7
Duplicates in the array are: 2 5 7 

=== Code Execution Successful ===

