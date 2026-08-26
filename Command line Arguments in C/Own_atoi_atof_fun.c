#include<stdio.h>
#include<limits.h>
int my_atoi(char *p);
double my_atof(char *p);
int main (int argc , char **argv)
{
	int i=0;
	if(argc<2)
	{
		printf("Usage : ./a.out string \n");
		return 1;
	}
	while(argv[1][i])
	{ 
		if(argv[1][i]=='.')
		{
			printf("%.5f\n", my_atof(argv[1]));
			return 0;
		}
		i++;
	}
	printf("%d\n", my_atoi(argv[1]));
	return 0;
}
int my_atoi(char *s)
{
	int sign=1,a=0;
	
	while(*s==' ')
	{
		s++;
        }
	if(*s=='-')
	{
		sign=-1;
		s++;
	}
	else if(*s=='+')
	{
		s++;
	}
	while(*s>='0' && *s<='9')
	{
		if(sign==1 && a>2147483647LL)
			return 2147483647;
		if(sign==-1 && a>2147483648LL)
			return 2147483648LL;
		a=a*10+*s-48;
		s++;
	}
	return a*sign;
}
double my_atof(char *p)
{
	int i=0;
	int sign=1;
	double a=0;
	double A=10;
	
	while (*p==' ')
        p++;

	if(*p=='-')
	{
		sign=-1;
		p++;
        }
	else if (*p=='+')
		p++;

	while(*p)
	{
		if(*p=='.')
			break;

		if(!(*p>'0' && *p<'9'))
		{
			printf("Special Character Found !!!! \n");
			break;
		}
		a=a*10+(*p-48);
		p++;
	}
	if(*p=='.')
	{
		p++;
		while(*p)
		{
			a=a+(*p-'0')/A;
			A=A*10;
			p++;
		}
	}
	return a*sign;			           
}
