#include<stdio.h>
void mainMenu(void);
void subMenu(void);

int Check_Prime(int *);
int Check_Perfect(int *);
int Check_Strong(int *);
int Check_Armstrong(int *);
int Check_Palindrome(int *);

void prime_Range(int,int);
void perfect_Range(int,int);

void strong_Range(int,int);
void armstrong_Range(int,int);

void palindrome_Range(int,int);
int prime_Count(int*, int*);

int perfect_Count(int*, int*);
int strong_Count(int*, int*);

int armstrong_Count(int*, int*);
int palindrome_Count(int*, int*);

int main ()
{
	int Choice,subChoice;
	int num,start,end,c;

	while(1)
	{
		mainMenu();

		printf("enter the Choice : ");
		scanf("%d", &Choice);

		switch(Choice)
		{ 
			case 1 : //Prime 

				subMenu();

				scanf("%d",&subChoice);

				switch(subChoice)
				{
					case 1 : 

						printf("Enter the Number : ");
						scanf("%d",&num);

						if(Check_Prime(&num))

							printf("Prime Number ");
						else
							printf("Not Prime");
						break;

					case 2 :

						printf("Enter Start End :");
						scanf("%d %d", &start,&end);
						prime_Range(start,end);
						break;

					case 3 :

						printf("enter the num :");
						scanf("%d %d", &start,&end);

						c=prime_Count(&start,&end);

						printf("prime Count=%d", c);

						break;

					case 4 :
						break;

					default :
						printf("Invalid");
						break;
				}
				break ;

			case 2 : //perfect

				subMenu();

				scanf("%d",&subChoice);

				switch(subChoice)
				{
					case 1 : 

						printf("Enter the Number : ");
						scanf("%d",&num);

						if(Check_Perfect(&num))

							printf("Perfect Number ");
						else
							printf("Not a Perfect");
						break;

					case 2 :

						printf("Enter Start End :");
						scanf("%d %d", &start,&end);

						perfect_Range(start,end);

						break;

					case 3 :

						printf("enter the num :");
						scanf("%d %d", &start,&end);

						c=perfect_Count(&start,&end);

						printf("perfect Count=%d", c);

						break;

					case 4 :
						break;

					default :
						printf("Invalid");
						break;
				}
				break ;

			case 3: // Strong

				subMenu();

				scanf("%d",&subChoice);

				switch(subChoice)
				{
					case 1 : 

						printf("Enter the Number : ");
						scanf("%d",&num);

						if(Check_Strong(&num))

							printf("Strong Number ");
						else
							printf("Not Strong");
						break;

					case 2 :

						printf("Enter Start End :");
						scanf("%d %d", &start,&end);

						strong_Range(start,end);

						break;

					case 3 :

						printf("enter the num :");
						scanf("%d %d", &start,&end);

						c=strong_Count(&start,&end);

						printf("Strong Count=%d", c);

						break;

					case 4 :
						break;

					default :
						printf("Invalid");
						break;
				}
				break ;

			case 4://Armstrong

				subMenu();

				scanf("%d",&subChoice);

				switch(subChoice)
				{
					case 1 : 

						printf("Enter the Number : ");
						scanf("%d",&num);

						if(Check_Armstrong(&num))

							printf("Armstron Number ");
						else
							printf("Not Armstrong");
						break;

					case 2 :

						printf("Enter Start End :");
						scanf("%d %d", &start,&end);

						armstrong_Range(start,end);

						break;

					case 3 :

						printf("enter the num :");
						scanf("%d %d", &start,&end);

						c=armstrong_Count(&start,&end);

						printf("Armstrong Count=%d", c);

						break;

					case 4 :
						break;

					default :
						printf("Invalid");
						break;
				}
				break ;
			case 5 ://polidrome

				subMenu();

				scanf("%d",&subChoice);

				switch(subChoice)
				{
					case 1 : 

						printf("Enter the Number : ");
						scanf("%d",&num);

						if(Check_Palindrome(&num))

							printf("Polindrome Number ");
						else
							printf("Polindrome Strong");
						break;

					case 2 :

						printf("Enter Start End :");
						scanf("%d %d", &start,&end);

						palindrome_Range(start,end);

						break;

					case 3 :

						printf("enter the num :");
						scanf("%d %d", &start,&end);

						c=palindrome_Count(&start,&end);

						printf("Polindrome Count=%d", c);

						break;

					case 4 :
						break;

					default :
						printf("Invalid");
						break;
				}
				break ;

			case 6:
			         printf("Exit \n");
				 return 0;
			default :
			         printf("Invalid Choice \n");
				 break ;
		}
	}
}
	
void mainMenu(void)
{
	printf("\n");
	printf("========= NUmber Analyser ==========\n");
	printf("1.Prime Number\n");
	printf("2.Perfect Number\n");
	printf("3.Strong Number\n");
	printf("4.Armstrong Number\n");
	printf("5.Plaidrome Number\n");
	printf("6.Exit \n");
}

void subMenu(void)
{
	printf("1. Check Number\n");
	printf("2. Check Range\n");
	printf("3. Check Count\n");
	printf("4. Back \n");
}

