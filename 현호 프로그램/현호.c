#include <stdio.h>
int main_gnt() 

{
    
    char a[30] = "가나다라마바사아자차카타파하";
    printf("쓰고싶은 한글을 골라서 써주세요.");
    while (1)
    {
        
    scanf_s("%s",&a);
    printf("%s", *a);
    if (a == 0)
        break;
    }
	return 0;
}

