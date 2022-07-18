#include <stdio.h>
void swap(int *a, int *b, int *c, int *d);
void swap(int *a, int *b, int *c, int *d)
{
    int temp;
    temp = *a;
    *a = *d;
    *d = *c;
    *c = *b;
    *b = temp;
}
int main()
{
    int A, B, C, D;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    swap(&A, &B, &C, &D);
    printf("%d %d %d %d",A,B,C,D);
}

// 42. Cyclic swap
// Statement:the cyclic swap for four numbers can be defined as follows.

// First number A should get the value of fourth number D, second number B should get the value of first number A, third number C should get value of second number B and

// fourth number D should get the value of third number C.

// To do above task create a function swap()  which accept all four integer A, B, C, D now be assure that numbers have got swapped in function. finally prints swapped values

// of  A, B, C, D inmain () function.

// Input:first line contains four integers A B C D separated by space.

// Output:output contains four integers A B C D separated by space denoting swapped values.

// Constraints:-10000<=A<=10000

// -10000<=B<=10000

// -10000<=C<=10000

// -10000<=D<=10000

// Example:

// 5 1 7 2

// 2 5 1 7
