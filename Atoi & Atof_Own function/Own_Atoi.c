#include<stdio.h>
int my_Atoi(char*);
int main ()
{
     char s[200];
     printf("enter a string\n");
     scanf("%[^\n]", s);

     printf("%d\n",my_Atoi(s));
}
int my_Atoi(char* s)
{
	int sign=1,a=0;
	
	while(*s==' ')
	s++;

	if(*s == '"')
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
		a=a*10+*s-48;
		s++;
	}
	return a*sign;
}

