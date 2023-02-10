#include <stdio.h>
#define MAX 10
#include <string.h>
int a=0;
void fen(int x, int v[20], int sz)
{
	int s = 0;
	int e = sz-1;
	int m = 0;
	
	for (; s <= m && m <= e;)
	{
		m = (s + e) / 2;
		if (x == v[m])
		{
			printf("x对应v[%d],是第%d位\n", m, m + 1);
			break;
		}
		else if(x>=v[s] && x < v[m])
		{
			e = m;
		}
		else if(x<=v[e]&&x > v[m])
		{
			s = m;
		}
		else
		{
			printf("错误\n");
			break;
		}
	}
}
	int main(void)
{
	
	int v[20] = { 0 };
	for (a = 0; a < 20; a++)
	{
		v[a] = a;
	}
	while (1)
	{
		int x = 0;


		printf("请输入想查找的值：\n");
		scanf("%d", &x);
		int sz = sizeof(v) / sizeof(v[0]);
		fen(x, v, sz);

	}
}
