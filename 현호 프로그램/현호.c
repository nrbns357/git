#include <stdio.h>
int main_gnt() 

{
    
    char a[30] = "�����ٶ󸶹ٻ������īŸ����";
    printf("������� �ѱ��� ��� ���ּ���.");
    while (1)
    {
        
    scanf_s("%s",&a);
    printf("%s", *a);
    if (a == 0)
        break;
    }
	return 0;
}

