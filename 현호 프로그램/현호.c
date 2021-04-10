#include <stdio.h>
int main_gnt() 

{
    int b;
    char a[30] = "가나다라마바사아자차카타파하";
    printf("쓰고싶은 한글을 골라서 써주세요.");
    while (1)
    {
        
    scanf_s("%s",&b);
    printf("%s", a[b]);
    if (a == 0)
        break;
    }
	return 0;
}

