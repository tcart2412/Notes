# include <stdio.h>
# include <string.h>
# include <stdlib.h>
//rand % (max - min + 1) + min

int main(void)
{
	int x;
	char ch; 
	while(1)
	{
		int x;
		char input; char ch; char xa[4]; 
		printf("1.�������ҽX 2.���r�� 3.����\n�п��:");
		scanf(" %c", &input);
		if(input == '1')
		{
			for(int i = 0; i < 4; i++)
			{
				x = rand() % ((122 - 97) + 1) + 97;
				ch = x;
				xa[i] = ch;
				printf("%c", ch);
			}
			printf("%c", '\n');
		}
		else if(input == '2')
		{
			char str[100];
			printf("�п�J���ҽX:"); 
			scanf("%s", str);
			int len = strlen(str);
			int A = 0, B = 0, C = 0;
			for(int i = 0; i < len; i++) 
			{
				if(str[i] == xa[i])
					A ++;
				else
				{
					for(int j = 0; j < len; j++)
					{
						if(str[i] == xa[j])
							B ++;
					}
				}
			}
			int h;
			for(int k = 0; k < len; k++)
			{
				if(str[k] != xa[k])
					h ++;
			}
			if(h == len)
				C ++;

			printf("��ﵲ�G A:%d, B:%d, �䤣��:%d\n", A, B, C);
		}
		else
			break;
	}
}
	
