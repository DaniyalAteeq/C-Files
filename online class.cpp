/*
arithmetic operations using functions
func with args.
*/
#include<stdio.h>
void sum(int,int);
void sub(int,int);
void mult(int,int);
void div(int,int);
void modulus(int,int);
int main()
{
	int a,b,choice;
	do
	{
	     printf("Arithmetic operations\n");
	     printf("1.Addition \n2.substraction \n3.Multiplication \n4.division \
		 \n5.modulus \n0.exit\n");
		 printf("Enter your choice :");
		 scanf("%d",&choice);
		 
		 switch(choice)
		 {
		 	case 1:
		 		   printf("Enter 2 number's '");
		 		   scanf("%d%d",&a,&b);
		 		   sum(a,b);
		 		   break;
		 	case 2:
		 		   printf("Enter 2 number's '");
		 		   scanf("%d%d",&a,&b);
		 		   sub(a,b);
		 		   break;
		 	case 3:
		 		   printf("Enter 2 number's '");
		 		   scanf("%d%d",&a,&b);
		 		   mult(a,b);
		 		   break;
		 	case 4:
		 		   printf("Enter 2 number's '");
		 		   scanf("%d%d",&a,&b);
		 		   div(a,b);
		 		   break;
		 	case 5:
		 		   printf("Enter 2 number's '");
		 		   scanf("%d%d",&a,&b);
		 		   modulus(a,b);
		 		   break;
		 	default:
		 		printf("Invalid choice\n");
		 		break;
		 }//switch
		 
	}
	while(choice!=0);//infinite loop
	
	return 1;
}
void sum(int a,int b)
{
	int c;
	c=a+b;
	printf("sum =%d\n",c);
}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("diff =%d\n",c);
}
void mult(int a,int b)
{
	int c;
	c=a*b;
	printf("prod =%d\n",c);
}
void div(int a,int b)
{
	int c;
	c=a/b;
	printf("quotient =%d\n",c);
}
void modulus(int a,int b)
{
	int c;
	c=a%b;
	printf("remainder =%d\n",c);
}
