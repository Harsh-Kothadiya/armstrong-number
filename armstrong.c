//armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,n1,ans=0,a;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	n1=no;
	while(no>0)
	{
		a=no%10;
		no=no/10;
		ans=ans+(a*a*a);
	}
	printf("\n--OUTPUT----------------------------\n");
	if(ans==n1)
		printf("\n\t NUMBER IS ARMSTRONG");
	else
		printf("\n\t NUMBER IS NOT ARMSTRONG");
	
	getch();
}
