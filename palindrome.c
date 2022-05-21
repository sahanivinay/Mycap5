#include<stdio.h>
// Recursive Function
int palin(int );
int n;//Global declaration variable
int main()
{
    int palindrome;
    printf("\nEnter a number to check for Palindrome: ");
    scanf("%d", &n);
    palindrome = palin(n);
    if(palindrome == 1)
        printf("\n\n%d is Palindrome\n\n", n);
    else
        printf("\n\n%d is not Palindrome\n\n", n);
    return 0;
}

int palin(int num)
{
    static int sum = 0;
    if(num != 0)
    {
        sum = sum *10 + num%10;
        palin(num/10);   // recursive call same as while(n!=0) using loop
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}
