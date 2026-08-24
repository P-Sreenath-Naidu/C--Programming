#include<stdio.h>
int Check_Strong(int *p)
{
	int i;
        int t=*p,r,k;
	int sum = 0;
	while(t > 0)
	{
		r = t % 10;

		k = 1;
		for(i = 1; i <= r; i++)
			k = k * i;

		sum = sum + k;
	t = t / 10;
	}
	if(sum == *p)
		return 1;
	else
		return 0;
}
void strong_Range(int n1, int n2)
{
    int i,sum=0,t,r,k,num;
    for(num = n1; num <= n2; num++)
    {
        t = num;
        sum = 0;
        while(t > 0)
        {
            r = t % 10;
            k = 1;
            for(i = 1; i <= r; i++)
                k = k * i;
            sum = sum + k;
            t = t / 10;
        }
        if(sum == num)
            printf("%d ", num);
    }
}			
int strong_Count(int *p, int *q)
{
    int num, c5 = 0;
    for(num = *p; num <= *q; num++)
    {
        if(Check_Strong(&num))
            c5++;
    }
    return c5;
}
