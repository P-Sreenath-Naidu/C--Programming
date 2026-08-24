#include<stdio.h>
int Check_Prime(int *p)
{
        int i,c=0;

	for(i=1; i<=*p; i++)
	{
		if(*p%i==0)
			c++;
	}
	if(c==2)
		return 1;
	else
	        return 0;
}
void prime_Range(int n1, int n2)
{
         int i,num,c1=0;
	 for(num=n1; num<=n2; num++)
	 {
		 c1=0;
		 for(i=1; i<=num; i++)
		 {
			 if(num%i==0)
				 c1++;
		 }
		 if(c1==2)
			 printf("%d ", num);
	 }
}
int prime_Count(int *p , int *q)
{
         int i,num,c3=0;
	 for(num=*p; num<*q; num++)
	 {
		 if(Check_Prime(&num))//at the prime check i used pointer then pointer need adress 
			              // thats why &num
			 c3++;
	 }
         return c3;	
}
