#include<stdio.h>
int a(void);
int b(void);
int a(void)
{
	printf("for he's a jolly good fellow!\n");
	return 0;
}
int b(void)
{
	printf("Which nobody can deny");
	return 0;
}
int main(void)
{
    a();
    a();
    a();
	b();
	getchar();
	return 0;
}
