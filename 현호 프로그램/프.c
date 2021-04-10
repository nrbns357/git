#include <stdio.h>
//int add(int a, int b);
//int sub(int a, int b);
//int mul(int a, int b);
//double div(int a, int b);
//int main()

	/*int a=3,b=1;
	while (b<=9)
	{
		printf("%d*%d=%d\n", a, b, a * b);
		b++;
	}*/

	/*int a=3,b=1;
	do 
	{
		printf("%d*%d=%d\n", a, b, a * b);
		b++;
	}while (b <= 9);*/
	
	/*int a=1,sum=0;
	while (a!=0)
	{
		
	scanf_s("%d", &a);
	sum += a;
	}
	printf("총합%d\n", sum);*/

	/*int a,b;
	scanf_s("%d", &a);
	for (b = 1; b < 10; b++)
	{
		printf("%d*%d=%d\n", a, b, a*b);
	}*/

	/*int a , b ;
	for (b = 2; b < 10; b++)
	{
		printf("============");
		for (a = 1; a < 10; a++)
			printf("%d*%d=%d\n", b, a, a * b);
	}*/

	/*int a,b,c;
	int n;
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		c = a;
	a = b;

	b = c;
	}
	for (n = 1; a <= b; a++)
		n *= a;
	printf("%d\n", n);*/

	/*int a,b;
	scanf_s("%d", &a);
	for (b = 1; a > 0; a--) {
		b =b* a;

	}
	printf("%d", b);*/

	/*int a,b;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf("*");
		}
		printf("\n");
	}*/


	/*int a, b;
	for (a = 1; a <= 5; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*int a, b,c,d,e,f;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf(" ");
		}
		for (int c=1; c<b*2-1;c++)
		{
			printf("*");
		}

		printf("\n");
	}
	for (d = 1; d < 5; d++)
	{
		for (e = 0; e < 4-d; e++)
		{
			printf(" ");
		}
		for (int f = 1; f < d * 2 + 1; f++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	/*int n1,n2;
	char n3;
	printf("숫자를 입력하세여.");
	scanf_s("%d %d", &n1, &n2);
	printf("+,-중 하나만 골라주세요");
	scanf_s("%c",&n3);
	if()*/

/*int n1, n2, n3;
n1 = printf("I love you\n");
printf("n1=%d\n", n1);
n2 = printf("난 널 사랑해\n");
printf("n2=%d\n", n2);
n3 = printf("123 456\n");
printf("n3=%d\n", n3);*/


/*int a, b;
scanf_s("%d %d",&a,&b);

printf("%d\n", add(a, b));
printf("%d\n", sub(a, b));
printf("%d\n", mul(a, b));
printf("%d\n", div(a, b));

	return 0;
}
int add(int a, int b) {
	return a + b;
}
int sub(int a,int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
double div(int a, int b) {
	if (b == 0)
		exit(0);
	return (double)a / b;
}*/


/*int max2(int a, int b);

int main()
{
printf("3과 4중에서 큰 수는 %d이다.\n", max2(3, 4));
	printf("7과 2중에서 큰 수는 %d이다.\n", max2(7, 2));

	return 0;
}
int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}*/
	
/*void input(int& a, int& b) {
	scanf("%d %d ", &a, &b);
}
void output(int a, b) {
	int c, d;
	c = a;
	d = b;
	if (a < 0)c *= -1;
	if (b < 0)d *= -1;
	printf("%d", c > d ? a : b);


}
int main()
{
	int a, b;
	output(a, b);

	return 0;
}*/
/*int maxABC(int num1, int num2);
int abc(int num)

int main_d()
{
	int num1, num2;
	printf("두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰정수:%d\n", num1, num2, maxABC(num1, num2));
	return 0;
}

int maxABC(int num1, int num2) {
	if (abc(num1) > abc(num2))
		return num1;
	else
		return num2;

}
int abc(int num) {
	if (num < 0)
		return num * (-1);
	else
		return num;
}*/