#include<stdio.h>
int Check_Palindrome(int *p)
{
    int t, r, rev=0;

    t=*p;

    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }

    if(rev==*p)
        return 1;
    else
        return 0;
}		
void palindrome_Range(int n1, int n2)
{
    int num;

    for(num=n1; num<=n2; num++)
    {
        if(Check_Palindrome(&num))
            printf("%d ", num);
    }
}			
int palindrome_Count(int *p, int *q)
{
    int num, c7=0;

    for(num=*p; num<=*q; num++)
    {
        if(Check_Palindrome(&num))
            c7++;
    }

    return c7;
}			
			
