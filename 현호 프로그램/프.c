#include <stdio.h>
//지그재그 숫자출력하기
/*int main()
{
    //[0,0][0,1][0,2]
    //[1,0][1,1][1,2]
    //[2,0][2,1][2,2]
    int a[51][51] = { 0 }, n, row = 0, col = 0, sum = 1;
    scanf("%d", &n);
    for (int index = 1; index <= n * n; index++)
    {
        if (row==n) {
            col++;
            sum = -1;
            row += sum;
        }
        else if (row==-1) {
            col++;
            row -= sum;
            sum=1;
        }
        
        a[row][col] = index;
        row +=sum;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
        printf("%d ", a[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}*/


//1234->4321 못함
/*int main() {
    int i, j, n, m, a[10] = {0,};
    printf("몇 개의 숫자를 입력하시겠습니까?");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        printf("숫자를 입력해주세요.");
        scanf("%d", &m);
        a[i] = m;
        
    }
    for (j=0;j<n;j++)
    {
        if (a[j]);
    }

}*/

//포인터 배열
/*int main() {

    int num[3] = { 10,20,30 };
    int* pnum = &num;
    //printf("%d", *++pnum);
    //printf("%d", ++*pnum);
    printf("%d",++*pnum);
    return 0;
}*/



/*#include <stdio.h>
#include <math.h>
typedef struct point {
    int x;
    int y;

}point;

int main() {
    point p1; //점1
    point p2; //점2
   p1 .x = 30;  p1 .y = 20;
    p2 .x= 60;  p1 .y = 50;
    int a = p2.x - p1.x;   //선 a의 길이
    int b = p2.y - p1.y;   //선 b의 길이
    double sol = sprt(pow(a,2) + pow(b, 2));
    printf("%f\n", sol);
    return 0;
}*/

