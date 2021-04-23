#include <iostream>
#include <stdio.h>
//using namespace std;
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

	

#include <math.h> 
	/*int main(void)
	{
		int x, y = 0, z, save, imsi, i = 0, j = 0;
		printf_s("수를 입력하세요 : ");
		scanf_s("%d", &x);
		imsi = x;
		while (1)
		{
			if (0 == x / ((int)pow(10, i) * 10))
			{
				break;
			}
			i++;
		}
		while (1)
		{
			save = imsi / (int)pow(10, i);
			imsi = imsi - save * (int)pow(10, i);
			y += save * (int)pow(10, j);
			j++;
			i--;
			if (0 > i)
			{
				break;
			}
		}
		z = 2 * y;
		printf_s("정수 x : %d\n", x);
		printf_s("뒤집은 수 y : %d\n", y);
		printf_s("그 수의 2배수 : %d\n", z);
		return 0;
	}*/

/*int maxNum(int n1, int n2, int n3) {
	if (n1 > n2)
		return n1 > n3 ? n1 : n3;
	else
		return n2 > n3 ? n2 : n3;
}
int minNum(int n1, int n2, int n3)
{
	if (n1 < n2)
		return n1 < n3 ? n1 : n3;
	else
		return n2 < n3 ? n2 : n3;
}
int main()
{
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("가장 큰 수 : %d\n", maxNum(n1, n2, n3));
	printf("가장 작은 수 : %d\n", minNum(n1, n2, n3));
	return 0;
}*/

/*int n;

void fibonacci();

void input() {
	scanf("%d", &n);
}
int main() {
	input();
	fibonacci();
	return 0;
}
void fibonacci()
{
	// 1 1 2 3 5 8...
	int f1 = 1, f2 = 1, f3, i;
	if (n == 1)//첫 번째는 1리턴
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);
	for (i = 0; i < n -2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}*/
/*int t;

void input()
{
	scanf_s("%d", &t);
}
void fibo()
{
	int f1 = 1, f2 = 1, f3, i;
	if (t == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);
	for (i = 0; i < t - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;

	}
}
int main()
{
	input();
	fibo();

	return 0;
}*/

/*int recur(int n)
{
	if (n < 0)
		return 1;
	printf("함수안의 함수 호출 :%d\n", n);
	recur(n - 1);

}
int main()
{
	recur(5);
	return 0;

}*/

/*int fact(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
		return n * fact(n - 1);

}
int main() {
	printf("%d\n", fact(5));
	return 0;
}*/
/*int main() {
	int a, b, c, d, e;
	int arr[5];
	int sum1 = 0, sum2 = 0;
	a = 1, b = 2, c = 3, d = 4, e = 5;
	sum1 = a + b + c + d + e;
	arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;
	for (int i = 0; i < 5; i++)
	{
		sum2 += arr[i];


	}
	printf("sum1 = %d, sum2 = %d",sum1,sum2);

	return 0;
}*/

/*int main()
{
	cout << "Hello world" << endl;
	return 0;
}*/

/*int main() {

	char matrix[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
				matrix[i][j] = 'x';
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%2c",matrix[i][j]);
		}
	}
	printf("\n");


	return 0;
}*/

/*int main() {

	int a, b;
	for (a = 1; a <= 7; a++)
	{
		for (b = 1; b <= 7; b++)
		{
			if (a == b || a + b == 8)
				printf("*");
			else
				putchar(32);
		}
		printf("\n");
	}

	return 0;
}*/

/*int main()
{
	int a, b;
	for (b = 1; b <= 9; b++)

	{
		for (a = 2; a <= 4; a++)
		{
			printf("%d * %d = %2d  ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;

	int a, b,c;
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= a; c++)
		{
			printf("(%d, %d)", b, c);
		}
		printf("\n");
	}


	}*/

	//4월 19일

/*int func(int n) {
	static int a = 0;
	a++;
	printf("n=%d a=%d\n", n,a);
}

int main()
{
	int n = 5;
	func(n);
	func(n);
	return 0;
}*/

/*int main() {
	char str[] = "Hello world\n";
	printf("str=%s\n", str);
	printf("str의 크기:%d\n", sizeof(str));
	printf("%d\n", sizeof("Hello"));
	char str1[10];
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	str1[4] = 'e';
	printf("str1=%s\n", str1);
	printf("str1=%d\n", sizeof(str1));
	printf("널문자의 값은\n", str1[3]);
	return 0;
}*/

/*int main()
{
	char str[20];
	int i = 0;
	scanf("%s", str);
	//st앞에 &를 안쓰는이유
	//배열의 이름이 주소이기때문
	printf("문자단위 출력\n");
	while (str[i] != '\0')
	{
		printf("%c", str[i++]);
	}
	printf("%c\n", str);
	return 0;
}*/

/*int main()
{
	char str[20] = "I love you";
	str[5] = '\0';
	printf("%s\n", str);



	return 0;

}*/

/*int main() {
	char str[50];
	int i = 0;
	scanf("%s", str);

	while (str[i]!='\0')
	{
		i++;
	}
	for (; i >= 0; i--) {
		printf("%c", str[i]);
	}

	return 0;
}*/

/*int main()
{
	float a[6];
	int b;
	for (b = 1; b < 7; b++)
	{
		printf("%d번째 : ", b);
		scanf_s("%f", &a[b-1]);

	}
	printf("%.1f", (a[0] + a[1] + a[2] + a[3] + a[4] + a[5]) / 6);

	return 0;
}*/

/*int main()
{
	int a[10], b,odd=0,even=0;
	for (b = 1; b <= 10; b++)
	{
		scanf_s("%d", &a[b]);
		if (a[b] % 2 == 0)
		{
			even = +a[b];
		}
		else
		{
			odd = +a[b];
		}
	}
	printf("odd : %d \neven : %d",odd,even);
	return 0;
}*/

/*int main()
{
	int i = -1, n[100], sum1 = 0, sum2=0;
	printf("입력정수 : ");
	do {
		i++;
		scanf_s("%d", &n[i]);
		if (n[i] > sum1)
			if (n[i] < 999)
				sum1 = n[i];
		if (n[i] < sum2)
			sum2 = n[i];
	} while (i < 100 && n[i] != 999);
	printf("max : %d\nmin : %d", sum1, sum2);
	return 0;
}*/

/*int main()
{
	int i, j, a, all;
	scanf_s("%d %d", &a, &all);
	for (i = 1; i < all; i++) {
		for (j = 1; j < all; j++) {
			if (4 * i + 2 * j == a)
				printf("토끼 : %d , 닭 : %d", i,j);
		}
	}
	return 0;
}*/

/*int main() 
{
	char a, b;
	scanf_s("%c", &b);
	while
	{
		if (b == 10)
		{
			break;

		}
		scanf_s("%c", &a);
		if (a == 10)
		{
			printf("Hello");
		}
		if (a != 10)
			break;
	}
	
	
	return 0;

}*/
/*int main()
{
int kor, eng, math, hap=0;
int sum;
scanf_s("%d %d %d", &kor, &eng, &math);
hap = kor + eng + math;
sum = hap / 3;
if (sum >= 80)
{
	printf("합격! 점수 : %d", sum);
}
else
printf("불합격! 점수 : %d", 80 - sum);
return 0;
}*/

