# include <stdio.h>
# include <string.h>

int main(void)
{
	char str[100];
	gets(str);
	int len = strlen(str);
	for(int i = 122; i >= 97; i--)
	{
		int confirm = 0;
		int count = 0;
		for(int j = 0; j < len; j++)
		{
			if(i == str[j])
			{
				confirm = 1;
				count ++;
			}
		}
		if(confirm != 0)
			printf("%c : %d,", i, count);
	}
}
