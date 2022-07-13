#include <stdio.h>
int find(char str[], int);
int find(char str[], int i)
{
    if (str[i] >= 'A' && str[i] <= 'Z')
        return i+1;
    else if (str[i] == 0)
        return -1;
    else
        return find(str, i + 1);
}
int main()
{
    int p;
    char str[30];
    gets(str);
    p = find(str, 0);
    printf("%d", p);
}

// Statement:A string can be the combination or set of N mix case characters C(i) which either contain space or not. In this program accept a string S of N characters,

// where S can contain upper-case, lower-case alphabets and space that means S can be either multi word or single word string.

// your task is to find first Upper Case letter U in String S. in order to find U travers the string S from starting index i=0 to i=x where x is the index of U.

// once you find the first Upper case Character U stop traversing S.

// For this write a recursive program such that it accepts a String S and find first upper-case letter “U” in set of characters C(i) of S. if it finds the U in set of

// characters C(i) print the position P of U (position P always starts from 1 while index i starts from 0 that means  P=i+1)

// if it doesn't find any such character U in String S print position P value as -1 (P=-1) in output that represents U is not found in String S.

// Note:count the space in position.

// Input:first line contains a string S of N characters .

// Output:contains an integer P which either have positive value or -1  denoting position of U in S.

// Constraints:10<=N<=30

// take character array of size 30 to store string S.

// Example:

// hello how Are You

// 11// remove blank spaces and write proper code there.