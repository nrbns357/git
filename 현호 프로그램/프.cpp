#include <stdio.h>
/*#define _CRT_SECURE_NO_WARNINGS
#define SIDE 100
#define SWAP(x,y,t)
#include <stdio.h>
int arr[SIDE][SIDE]; //arr [100][100];

void printarr(int n) //������ �迭 ������ ����� �Լ�
{
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

}

void makearr(int n)
{
    int value = 1;
    int row = 0, col = -1;
    int inc = 1; //���� ���� ó��, 1, -1
    int i, j;
    while (n > 0) {
        for (i = 0; i < n; i++) {
            col += inc;
            arr[row][col] = value++; //value�� �迭�� ���� ��
        }
        n--;
        if (n == 0)
            break;
        for (j = 0; j < n; j++) {
            row += inc;
            arr[row][col] = value++;
        }
        inc *= -1;
    }
}
int main()
{
    int side = 0;
    printf("������ �迭�� ���� : ");
    scanf("%d", &side);
    makearr(side); //������ �迭 �����
    printarr(side);
    return 0;
}
/*void bubblesrot(int arr[], int len);
int main() {
    int arr[5] = { 4,6,1,3,9 };
    int i;
    bubblesrot(arr, 5);
    //���ĵ� �� ���
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
void bubblesrot(int arr[], int len) {
    int temp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArr(int value[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%3d", value[i]);
        printf("\n");

    }
}
void selectionSort(int* value, int n) {
    int i, j, min = 0, temp = 0;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (value[min] > value[j])
                min = j;
        }
       temp = value[i];
        value[i] = value[min];
        value[min] = temp;
        SWAP(value[i], value[min], temp);
    }
}
int main() {
    int value[] = { 4,7,9,11,3,7,6 };
    int n = sizeof(value) / sizeof(int);
    printArr(value, n);
    selectionSort(value, n);
    printArr(value, n);
    return 0;
}*/


#include <stdio.h>
void swap1(int, int); //call by value ��
void swap2(int*, int*); //call by reference ����
//�Լ� ȣ�� �Ŀ��� ������ ���� ������ ����Ǿ� �ִ°�?
int main()
{
    int a = 5, b = 8;
    printf("a=%d, b=%d\n", a, b);
    swap1(a, b);//���� ���� ȣ��
    printf("a=%d, b=%d\n", a, b);
    swap2(&a, &b);//������ ���� ȣ��
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
