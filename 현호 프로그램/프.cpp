#include <stdio.h>
#define _CRT_SECURE_NO_WARINGS
/*int main()
{
	//포인터란?
	//메모리 주소값을 저장하는 변수
	int n1 = 100, n2 = 200;
	int* p;
	p = &n1;
	printf("%p\n", p);//0075FBD8
	printf("%d\n", *p);//100
	printf("%d\n", n1);//100
	(*p) = 300;
	printf("%d\n", *p);//300
	printf("%d\n", n1);//300




	int n1 = 100;
	int* p;
	p = &n1;
	printf("주소 : %p,%p,\n", p, &n1);//주소 : 0118F9D8,0118F9D8,
	printf("내용, 값 :%d, %d\n",*p ,n1);//내용,값 : 100, 100
	for (int i = 0; i < 5; i++)
	{
		printf("%4d\n", (*p)++);
	}
	printf("%d\n", n1);

	int a[5] = { 0,1,2,3,4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", & a[0], a);
	printf("a의 주소=%d a[0]주소=%d\n", &a, &a[0]);
	int* p = a;
	printf("a주소=%d\n", p);
	printf("a주소=%d\n", a);
	printf("a주소=%d\n", &a[0]);
	printf("a[1]의주소=%d\n", &a[1]);
	printf("a[1]의주소=%d\n", a+1);//a=1000한다면 a+1=1004

	int a[5] = { 1,2,3,4,5 };
	int* p;
	int b = 10;
	a = &b;//식이 수정할수있는 lvalue여야합니다.
	p = &b;

	return 0;
}*/

/*int main()
{
	int a[5];
	int b=0, c=0;
	for (int b = 0; b < 5; b++)
	{
	printf("%d번 학생의 프c 성적 : %d",b+1);
	scanf_s("%d", &a[b]);
	}
	for (int b = 0; b < 5; b++)
		if (c < a[b])
			c = a[b];

		printf("최고점수:%d\n",c);


	return 0;


	int a[5];
	int c = 0;
	for (int b = 0; b < 5; b++)
	{
		printf("%d", b + 1);
		scanf_s("%d", &a[b]);
	}
	for (int b = 0; b < 5; b++)
		if (c < a[b])
			c = a[b];

	printf("최대값 : %d\n", c);
	return 0;

	int n,a;
	int d[20],sum=0;
	scanf_s("%d", &n);
	for (a=0; a<n; a++)
	{
		printf("성적 입력 : ");
		scanf_s("%d", &d[a]);
		sum = sum+d[a];
	}

	printf("%.2f", (float)sum / n);
}*/

/*int main() {

	//int a[5] = { 0,1,2,3,4 };
	//printf("%d %d\n", a[0], a[1]);
	//printf("%p %p\n", &a[0], &a[1]);
	
	int arr[5] = { 1,2,3,4,5 };
	int* pArr = arr;
	printf("%d\n", *pArr);
	printf("%d\n", *(++pArr));
	printf("%d\n", *(++pArr));
	printf("%d\n", *(pArr+1));
	printf("%d\n", *(pArr+2));

	int a = 1, b = 2, c = 3;
	char Arr[3][10] = {"Kim","Hong","Lee"};//2차원배열
	//char* pArr[3] = {"Kim","Hong","Lee"};//포인터배열
	char* pArr[3] = { Arr[0],Arr[1] ,Arr[2] };
	printf("%s \n", pArr[0]);
	printf("%s \n", pArr[1]);
	printf("%s \n", pArr[2]);

	//arr[i]==*(arr+i)
	printf("%s \n", *pArr);//Kim
	printf("%s \n", *pArr + 1);//Kim
	printf("%s \n", *pArr + 2);//Kim

	printf("%s \n", *pArr);
	printf("%s \n", *(pArr+1));
	printf("%s \n", *(pArr+2));
	return 0;

}*/

//5월 4일
/*int main()
{
	int a[20] = { 35,26,48,77,56,98,75,78,99,0,43,56,67,84,99,100,45,37,49,78 };
	int i, histo[11] = { 0, };
	for (i = 0; i < 20; i++)
		histo[a[i] / 10]++;
	for (i = 0; i <= 10; i++)
		printf("%3d : %3d\n", i * 10, histo[i]);
	return 0;
}*/

/*int main()
{
	int a[20] = { 35,26,48,77,56,98,75,78,99,0,43,56,67,84,99,100,45,37,49,78 };
	int i, histo[11] = { 0, };
	for (i = 0; i < 20; i++)
	{
		histo[a[i] / 10]++;
	}
	for (i = 0; i <= 10; i++) {
	
		printf("%4d : ", i * 10, histo[i]);
		for (int j = 0; j < histo[i]; j++)
		{
			printf("★");
		}
	
	}
	return 0;
}*/
/*int main()
{
	int a[20] = { 35,26,48,77,56,98,75,78,99,0,43,56,67,84,99,100,45,37,49,78 };
	int rank[20] = { 0, };
	int i, j;
	for (i = 0; i < 20; i++)
	{
		rank[i] = 1;
		for (j = 0; j < 20; j++)
		{
			if (a[i] < a[j])
				rank[i]++;
		}

	}
	printf("학생 등수\n");
	for (i = 0; i < 20; i++)
	{
		printf("학번:%3d, 등수:%3d\n", i + 1,rank[i]);
	}
}*/

/*int main() {
	int a[20] = { 35,26,48,77,56,98,75,78,99,0,43,56,67,84,99,100,45,37,49,78 };
	int rank[102] = { 0, };
	int i, j;
	for (i = 0; i < 20; i++)
	{
		rank[a[i]]++;
		rank[101] = 1;
		for (i = 100; i >= 0; i--)
			rank[i] = rank[i] + rank[i + 1];
		printf("학번 점수 등수\n");
		for (i = 0; i < 20; i++)
			printf("%3d %5d %3d\n",i+1,a[i],rank[a[i]]+1);
		
	return 0;
}*/

/*int main()
{
	int num, i;
	int count[11] = { 0 };
	while (true)
	{
		scanf_s("%d", &num);
		if ( num <1|| num > 10)
		{
			break;
		}
		count[num]++;
	}
	for (i = 0; i <= 10; i++) {
		if (count[i] > 0) {
			printf("%d : %d개", i, count[i]);
		}
	}
	return 0;


}*/

//#include <stdio.h>
//
//int main()
//{
//   int n[10] = { 0 }, num, i;
//   for (i = 0; ; i++)
//   {
//      scanf("%d", &num);
//      if (num <= 0 || num >10)
//      {
//         break;
//      }
//      n[num]++;
//   }
//   for (i = 1; i < 10; i++)
//   {
//      if (n[i] == 0)
//      {
//         continue;
//      }
//      printf("%d : %d\n", i, n[i]);
//   }
//   return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    int score[4][4] = { {0} };
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d번 점수", i + 1);
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &score[i][j]);
//            score[i][3] += score[i][j];
//            score[3][j] += score[i][j];
//            score[3][3] += score[i][j];
//        }
//    }
//    printf("   컴일 프C 수학  총점\n");
//    for (i = 0; i < 4; i++)
//    {
//        if (i < 3)
//        {
//            printf("%d번", i + 1);
//        }
//        else
//        {
//            printf("합계");
//        }
//        for (j = 0; j < 4; j++)
//        {
//            printf("%4d", score[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
