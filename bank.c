#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 123;
	int n, num = 0;
	int status;
	do
	{
		printf("�п�J�K�X:");
		scanf("%d", &n);
		if(n != a)
			num ++;
		else
		{
			status = 1;
			break;
		}
	}while(num < 3);
	
	if(status == 1)
	{
		while(1)
		{
			int z;
			printf("��J�һݪA��: 1.�s�� 2.���}�t��:");
			scanf("%d", &z); 
			if(z == 1)
			{
				int price;
				printf("�п�J�n�s�ڪ����B(1~9999):");
				scanf("%d", &price);
				printf("�`�@�s�J%d�i1000��,%d�i500��,%d�i100��,%d��50��,%d��10��,%d��5��,%d��1��\n",
				price/1000, (price%1000)/500, (price%500)/100, 
				(price%100)/50, (price%50)/10, (price%10)/5, (price%5)%10);
			}
			else
			{
				printf("�P�¨ϥΪA��, �w��U���A�ץ��{\n");
				break;
			}
		}
	}
	else
		printf("�K�X��J�W�L�T��, �j��n�X\n"); 
	system("pause");
}