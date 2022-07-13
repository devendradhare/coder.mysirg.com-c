int countDigit(int n) // remove the blank spaces and write valid return type and arguments there.
{
    int i = 0;
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return i; // remove the blank space and write valid code there.
}
main()
{
    int N, dl;
    scanf("%d", &N);
    dl = countDigit(N); // remove the blank spaces and write valid code there.
    switch (dl)
    {
    case 1:
        printf("U");
        break;
    case 2:
        printf("T");
        break;
    case 3:
        printf("H");
        break;
    case 4:
        printf("TH");
        break;
    case 5:
        printf("TT");
        break;
    }
}

// 46. Count Digits
// Statement:A number N can be formed by M number of digits D(i) where M>=1. The number of digits M present in N falls that number N in different categories that are

// given below.

// 0 to 9 (one digit number) Unit

// 10 to 99(two digit number)Ten

// 100 to 999(three digit number)Hundred

// 1000 to 9999(four digit number)Thousand

// 10000 to 99999(five digit number)Ten Thousand

// your task is to count the number of digits M available in number N and on the basis of M print the message MS as mentioned below that represents the category of number N.

// M=1 print U

// M=2 print T

// M=3 print H

// M=4 print TH

// M=5 print TT

// in order to solve this problem write a recursive program to accept an integer N, find the number of digits M in N and print the messages as mentioned above.

// Input:first line contain an integer N.

// Output:contains an message MS denoting category of number N

// Constraints:1<=N<=99999

// Example:

// 6547

// TH