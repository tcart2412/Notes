# include <stdio.h>

int main(void)
{
	int a, b, temp, m , n;
	while(scanf("%d %d", &a, &b))
	{
		m = a;
		n = b;
		while(a % b != 0)
		{
			temp =  a % b;
			a = b;
			b = temp;
		}
		printf("GCD : %d\n", b);
		printf("LCM : %d\n", m * n / b); //�̤p�����Ƭ���Ƭۭ����H GCD 
	}
}
		
