#include <stdio.h>

int main_ls() {
	//(1)
	/*int a, b , c;
	scanf_s("%d %d", &a, &b);
	++a;
	c = a + b;
	printf("a = %d , b = %d , c = %d",a,b,c);
	return 0;*/

	//(2)
	/*int a, b, c;
	float avg;
	scanf_s("%d %d %d",&a, &b, &c);
	avg = (a + b + c) / 3.0;
	printf("avg = %.1f", avg);
	return 0;*/

	//(3)
	/*double a, b, c;
	double avg, sum;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	sum = a + b + c;
	avg = (a + b + c) / 3;
	printf("sum = %.lf avg = %.lf", sum, avg);
	return 0;*/

	//(4)
	int a, b, c;
	scanf_s("%d %d %d",&a,&b,&c);
	printf("%d %d %d %d", a > b, b >= c, a <= b, b < c);
	return 0;

















































	//18ÀÏ
	/*int a, b, c, d, e;
	scanf_s("%d %d %d %d %d")
	printf(); 
	return 0;*/

}
