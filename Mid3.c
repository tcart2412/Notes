# include <stdio.h>
# include <stdlib.h>

char col[][5] = {"�®�", "����", "���", "����"}; // char col[][2n + 1], n is the length of string
char le[][2] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};
int main(void)
{
	srand(5);
	int n,x1, x2, y1, y2, cnt = 0;
	char ch;
	FILE * fptr1;
	fptr1 = fopen("result.txt", "w");
	fclose(fptr1);
	while(1)
	{
		printf("1. ��M 2. ��ݵ��G 3. ���}"); 
		scanf("%d", &n);
		if(n == 1)
		{
			fptr1 = fopen("result.txt", "a"); 
			cnt ++;
			printf("���a: %s%s\n", col[x1 = rand() % 4], le[x2 = rand() % 13]);
			printf("���a: %s%s\n", col[y1 = rand() % 4], le[y2 = rand() % 13]);
			if(x2 < y2)
			{
				printf("*********���a��*********\n");
				fprintf(fptr1, "%d : player win\n", cnt);
			}
			else if(x2 == y2)
			{
				if(x1 < y1)
				{
					printf("*********���a��*********\n");
					fprintf(fptr1, "%d : player win\n", cnt);
				}
				else
				{
					printf("*********���a��*********\n");
					fprintf(fptr1, "%d : player win\n", cnt);
				}
			}
			else
			{
				printf("*********���a��*********\n");
				fprintf(fptr1, "%d : master win\n", cnt);
			}
			fclose(fptr1);
			printf("%c", '\n');
		}
		else if(n == 2)
		{
			fptr1 = fopen("result.txt", "r");
			if(fptr1 != NULL)
			{
				while((ch = getc(fptr1)) != EOF)
					printf("%c", ch);
				fclose(fptr1);
				printf("%c", '\n');
			}		
		}
		else
			break;	
	}
	return 0;	
}
