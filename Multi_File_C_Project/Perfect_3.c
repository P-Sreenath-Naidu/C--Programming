#include<stdio.h>
int Check_Perfect(int *p)
{
            int i,sum=0;
	    for(i=1; i<*p; i++)
	    {
	            if(*p%i==0)
		    sum=sum+i;	    
	    }
	    if(sum==*p)
		    return 1;
		    else 
		    return 0;
}
void perfect_Range(int n1 ,int n2)
{    
	int i,sum=0,num;
	for(num=n1; num<=n2; num++)
	{
		sum=0;
		for(i=1; i<num; i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
			printf("%d ", num);
	}
}
int perfect_Count(int*p, int*q)
{
        int i,num,c4=0;
	for(num=*p; num<=*q; num++)
	{
		if(Check_Perfect(&num))
			c4++;
	}
	return c4;
}
