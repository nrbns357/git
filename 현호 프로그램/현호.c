#include <stdio.h>
int main_gnt() 

{
    int b;
    char a[30] = "�����ٶ󸶹ٻ������īŸ����";
    printf("������� �ѱ��� ��� ���ּ���.");
    while (1)
    {
        
    scanf_s("%s",&b);
    printf("%s", a[b]);
    if (a == 0)
        break;
    }
	return 0;
}

