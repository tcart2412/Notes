#include <stdio.h>

int main(void) 
{
    int a,b,c,temp;//a���Q����,b������,temp�l�� 
    printf("Please input two numbers:");
    scanf("%d %d",&a,&b);
    while(a%b!=0)
	{
		temp=a%b;
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("GCD is %d",b);
}
