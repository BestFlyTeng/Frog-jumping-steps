#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int jump(int n) {
	int a = 1;
	int b = 2;
	int c = 1;
	if (n<=2)
	{
		return n;
	}
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int inp = 0;
	printf("请输入有几个台阶:>");
	scanf("%d", &inp);
	printf("有%d种跳法\n",jump(inp));
	system("pause");
	return 0;
}