#include <stdio.h>
int main()
{
    int len, arr[10], i,j, p, pi, pe;
    scanf("%d", &len);
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d%d", &pi, &pe);
        for (j = 0; j < len; j++)
        {
            if (arr[j] == pi)
            {
                arr[j] = pe;
            }
        }
    }
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

// 32. Update array elements
// Statement:in this problem your task is to accept N integers which represents an array A and update some or all the elements A[i] to A[N-1] with some random integers.

// Perform the update operation as follows

// For this create a program such that it makes an array of N integers and also accepts the number of elements P that you want to update.

// Accept an integer A[e] (in random order that means doesn't preserve the array order ) where e represents index and an integer M to update A[e] with M. repeat this process P times.

// Finally print the updated array A.

// Note:if A[e] value doesn't belong to any element of array A leave that case and don't update the array element for that case.

// Input:First line contains an integer N denoting number of elements in array.

// second line contains N space separated integers denoting elements of array.

// third line contain an integer P denoting number of elements you want to update.

// Next P lines contain two integers A[e] and M separated by space denoting array element and a random integer respectively.

// Output:contains N integers separated by space denoting updated array.

// Constraints:5<=N<=10

// 1<=P<=N

// 0<=e<N

// take size of array as 10

// Example: if the input order of elements to be updated is changed it affects a lot to ultimate result please read both examples carefully.

// 10

// 1 2 3 4 5 6 7 8 9 10

// 3

// 1 2

// 2 3

// 3 4

// 4 4 4 4 5 6 7 8 9 10

// Example 2:

// 10

// 1 2 3 4 5 6 7 8 9 10

// 3

// 1 2

// 3 4

// 2 3

// 3 3 4 4 5 6 7 8 9 10