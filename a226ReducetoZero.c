#include <stdio.h>
int main()
{
    int arr[20], l, i, j, x = 0, y = 0, frq = 0;
    scanf("%d", &l);
    for (i = 0; i < l; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (j = 0; j < l - 1; j++)
    {
        for (i = 0; i < l - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
            }
        }
    }
    for (i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = l; i >= 0; i--)
    {
        if (arr[i] + y <= x)
        {
            if (y == x)
                break;
            y += arr[i];
            frq++;
            printf("y = %d  ",y);
        }
    }
    if (y == y)
    {
        printf("\n\n%d", frq);
    }
    else
    {
        printf("-1");
    }
}

// 226. Reduce to Zero
// Statement: create an array of size n and accept n integers in it. now accept one more integer x denoting a random value.

// Your Task is to reduce the x to zero by subtracting array elements from this number. remember you should subtract minimum elements to

// make x zero.

// for example: suppose array elements are 1 3 2 1 4 2 5 4 and  x=6 so if you subtract 6 by 5 and 1 or 4 and 2 in both cases you subtracted 2

// elements from x and if you subtract x by 3 2 and 1 you subtracted 3 elements to reduce x to zero.

// the constraint isyou should subtract minimum elements to make x zero.

// so output contains minimum elements as 2.

// if it is not possible to reduce x to zero print -1 in output.

// input: First line contains an integer n denoting size of array.

// second line contains n space separated integers denoting elements of array.

// third line contains an integer x denoting a random number.

// output: contains an integer denoting minimum numbers of element required to reduce x to zero.

// constraints: 5<=n<=20

// 1<=x<=100

// Input Example:

// 8

// 1 3 2 1 4 2 5 4

// 6

// Example Output

// 2