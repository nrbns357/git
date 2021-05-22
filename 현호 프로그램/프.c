/*#define _CAT_SECURE_NO_WARNINGS
#include <stdio.h>
int stack[100];
int top = 0;
int push(int n) {
	stack[top++] = n;
	return 0;
}
int pop() {
	return stack[--top];
}
int main() {
	int n = 0;
	scanf("%d", &n);
	push(n);
	scanf("%d", &n);
	push(n);
	scanf("%d", &n);
	push(n);
	scanf("%d", &n);
	push(n);
	for (int i = 0; i < 4; i++)
	{
		printf("%4d", stack);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%4d", pop);
	}
}*/

/*int main()
{
	int arr[100][100] = { 0, };
	int a, b, i, j;
	int value = 1;
	int k = 0;
	scanf("%d %d", &a, &b);
	while (1) {
		for (i = 0; i < b; i++) {
			for (j = 0; j < a; j++) {
				if (i + j == k)
					arr[j][i] = value++;
			}
		}
		k++;
		if (value - 1 == a * b)
			break;
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int n;
int f(int k)
{
	int i;
	int sum = 0;
	for (i = 1; i <= k; i++)
	{
		sum += 1;
	}
	return sum;
}
int main()
{
	scanf("%d", &n);
	printf("%d\n",f(n));
	return 0;
}

int n, d[110];

int f()
{
	int max = 0;
	int a = 0;
	for (int i = 0; i < n; i++) {
		if (max < d[i]) {
			max = d[i];
			a = i + 1;
		}
	}
	return a;
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	printf("%d", f());

	return 0;
}

int main() {
	int i, j, a;
	char ar[100][100] = { 0 };
	printf("수 입력");
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		for (j = 0; j < a;j++) {
			if (i == a - 1 || j == 0 || i == j) {
				ar[i][j] = ' ';
			}
		}
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++) {
			printf("%c", ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*int main() {
	int i;
	char str[256];//1차원 배열
	printf("Enter a number: ");
	gets(str, 256);
	i = atoi(str);
	printf("입력된 정수값 :%d.\n",i,i*2);

	return 0;
}

int main() {
	int i;
	char arr[256];//1차원 배열
	printf("Enter a number: ");
	scanf("%d", &i);
	_itoa(i, arr, 10);
	printf("decimal: %s\n",arr);
	_itoa(i, arr, 16);
	printf("hexadecimal: %s\n",arr);
	_itoa(i, arr, 2);
	printf("binary: %s\n",arr);
	return 0;
}

int isPrime(int n){//소수(prime)여부 판별 함수
	for (int i = 2; i < n; i++)
		if (!(n % i))
			return 0;
	return 1;
}
int main() {
	for (int i = 2; i < 100000; i++)//2 3 5 7
		if (isPrime(i))
			printf("%4d ", i);
	return 0;
}*/

static int data[] = { 155, 179, 167, 156, 179, 145, 180, 175, 167, 165,
157, 186, 155, 184, 163, 154, 157, 159, 171, 168, 179, 173, 153, 171, 171,
175, 172, 174, 173, 179, 164, 167, 172, 176, 174, 181, 181, 161, 190, -99
};

static int histo[7];

int main()
{
	int i = 0, idx, standard = 150;
	while (data[i] != -99)
	{
		if (data[i] >= 150 && data[i] <= 184)
		{
			idx = (data[i] - 150) / 5;
			histo[idx]++;
		}
		i++;
	}
	for (i = 0; i < 7; i++)
	{
		printf("%3d - %3d = %d\n", standard, standard + 4, histo[i]);
		standard += 5;
	}
	return 0;
}/**/
