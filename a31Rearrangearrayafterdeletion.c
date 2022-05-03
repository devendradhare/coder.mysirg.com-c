#include<stdio.h>
int main()
{
    int arr[10],len,d,dlt,i,j,k;
    scanf("%d",&len);
    for(i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&dlt);
    for(i = 1; i <= dlt; i++)
    {
        scanf("%d",&d);
        for(j = 0; j < len; j++)
        {
            if (arr[j]==d)
            {
                for(k = j; k < len-1; k++)
                {
                    arr[k] = arr[k] + arr[k+1];
                    arr[k + 1] = arr[k] - arr[k+1];
                    arr[k] = arr[k] - arr[k+1];
                }
                arr[k] = 0;
            }
        }
    }
    for(i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
}

// 31. Rearrange array after deletion.
// Statement:Write a program such that it accepts N unique integers denoting array A  and also accept the number of elements M you want to delete from this array A.

// after this, program should accept the M integers that you want to delete.

// Perform the delete operation over array as mentioned below

// shift the elements from right to left such that deleted element get override by its immediate right element. Suppose if the element that will be deleted is A[e] (where e

// represents index and 0<=e<N) then override A[e] by A[e+1] and A[e+1] by A[e+2] and so on till end of the array and at end of array (last cell of array) insert 0 that

// represents one element has deleted.

// if you want to delete the A[N-1] element (last element) don't perform any shift operation just simply override value A[N-1] with 0.

// finally, after M deletion print the rearranged array that also contains M number of zero 0 at last.

// Note :don’t input such number to get deleted which is not available in array A but  elements to be deleted can be entered in any random order.

// Input:first line contains an integer N denoting number of elements in array A.

// second line contains N integers separated by space denoting elements of array A.

// Third line contains the integer M denoting number of elements you want to delete from array A.

// Fourth line contains M unique integers A[i] A[j] A[k]……A[m] separated by space denoting elements that you want to delete from array A.



// Output:output contains N integers separated by space represents rearranged array A

// Constraints:5<=N<=10

// 1<=M<=N

// 0<=e<N

// take size of array as 10

// Example:

// 6

// 1 2 3 4 5 6

// 3

// 4 2 5

// 1 3 6 0 0 0


