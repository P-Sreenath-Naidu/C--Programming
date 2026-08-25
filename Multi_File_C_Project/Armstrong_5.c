#include<stdio.h>
int Check_Armstrong(int *p)
{
    int t, r, sum = 0, i, k = 1, c = 0;

    t = *p;
    while(t > 0)
    {
        c++;
        t = t / 10;
    }
    t = *p;
    while(t > 0)
    {
        r = t % 10;
        
	k = 1;
        for(i = 1; i <= c; i++)
            k = k * r;
        sum = sum + k;

    t = t / 10;
    }
    if(sum == *p)
        return 1;
    else
        return 0;
}
void armstrong_Range(int n1, int n2)
{
    int num;

    for(num=n1; num<=n2; num++)
    {
        if(Check_Armstrong(&num))
            printf("%d ", num);
    }
}
int armstrong_Count(int *p, int *q)
{
    int num, c6=0;

    for(num=*p; num<=*q; num++)
    {
        if(Check_Armstrong(&num))
            c6++;
    }
    return c6;
}
