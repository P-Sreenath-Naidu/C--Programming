#include<stdio.h>
double my_Atoi(char*);
int main ()
{
	char s[200];
	printf("enter a string \n");
	scanf("%[^\n]", s);
	printf("%.5f\n", my_Atoi(s));
}
double my_Atoi(char*s)
{
	double a=0,A=10;
	double sign=1;
	while(*s==' ')
		s++;
	while(*s=='"')
		s++;
	if(*s=='-')
	{
		sign=-1;
		s++;
	}
	else if(*s=='+')
		s++;

	while(*s>='0' && *s<='9')
	{
		a=a*10+(*s-'0');
		s++;
	}
	//here float calculation
	if(*s=='.')
	{
		s++;
		while(*s>='0' && *s<='9')
		{
			a=a+(*s-'0')/A;
			A=A*10;
			s++;
		}
	}
	return a*sign;
}

