#include<stdio.h>
#include<conio.h>
int pow(int c,int d)
{	
	if(d==0)
	return 1;
	else 

	return (c*pow(c,d-1));
}
int main()
{
	int res,a,b;
	scanf("%d %d",&a,&b);
	res=pow(a,b);
	printf("%d",res);
	getch();
	return 0;
}

