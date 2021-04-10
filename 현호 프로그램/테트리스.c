#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

#define left 75
#define right 77
#define down 80
#define full_down 115
#define change 97

typedef struct block_xy
{
    int x;
    int y;
}block_xy;

//데이터를 처리해줄 배경 메모리 선 언  
int background[13][21] = { 0 };
int time_count = 1000, score = 0, stack = 125;

//2가지의 모습을 갖는 블록들
block_xy block[19][4] = { {{-1,0},{0,0},{1,0},{2,0}}, {{0,-1}, {0,0},{0,1},{0,2}},
                  {{-1,-1},{-1,0},{0,0},{0,1}}, {{-1,0},{0,0},{0,-1},{1,-1}},
                  {{0,1},{0,0},{1,0},{1,-1}}, {{-1,-1},{0,-1},{0,0},{1,0}},

    //4가지의 모습을 갖는 블록들
    {{0,-1},{0,0},{0,1},{1,1}}, {{-1,1},{-1,0},{0,0},{1,0}}, {{-1,-1},{0,-1},{0,0},{0,1}}, {{-1,0},{0,0},{1,0},{1,-1}},
    {{-1,1},{0,1},{0,0},{0,-1}}, {{-1,-1},{-1,0},{0,0},{1,0}}, {{0,1},{0,0},{0,-1},{1,-1}}, {{-1,0},{0,0},{1,0},{1,1}},
    {{-1,0},{0,-1},{0,0},{1,0}}, {{0,-1},{0,0},{0,1},{1,0}}, {{-1,0},{0,0},{0,1},{1,0}}, {{-1,0},{0,-1},{0,0},{0,1}},

    //1가지의 모습을 갖는 블록  
    {{0,-1},{0,0},{1,-1},{1,0}} };

void gotoxy(int x, int y);
void mouse();
void print_background();
void block_start(block_xy start_xy, int* block_type);

int block_chack(block_xy start_xy, int* block_type);

void block_print(block_xy start_xy, int* block_type);
void block_delete(block_xy start_xy, int* block_type);

block_xy block_move(block_xy start_xy, int* block_type);

void block_stop(block_xy start_xy, int* block_type);
void line_chack_and_remove( );

int main_dl()
{
    mouse();   //마우스 모양 바꿔주기  
    int n = 0;
    int chack;
    block_xy start_xy;
    int block_type;

    print_background();

    while (1)
    {
        if (n == 1)
        {
            return 0;
        }
        start_xy.x = 6;
        start_xy.y = 0;

        srand(time(NULL));
        block_type = rand() % 19;

        block_start(start_xy, &block_type);

        while (1)
        {
            start_xy = block_move(start_xy, &block_type);
            start_xy.y++;
            chack = block_chack(start_xy, &block_type);

            if (chack == 1)
            {
                start_xy.y--;
                block_stop(start_xy, &block_type);
                line_chack_and_remove();
                break;
            }
            else
            {
                start_xy.y--;
                block_delete(start_xy, &block_type);
                start_xy.y++;
                block_print(start_xy, &block_type);
            }
        }

    }
    return 0;
}
//도스창에서 커서를 이동시켜주는  함수 
void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void mouse() {
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

//기본 게임화면을 출력해주고 메모리에 값을 넣어주는 함수 
void print_background()
{
    int i, j;
    for (i = 0; i < 13; i++)
    {
        gotoxy(i * 2 + 1, 21);
        printf("□");
        background[i][20] = 1;
    }
    for (i = 0; i < 13; i += 12)
    {
        for (j = 0; j < 21; j++)
        {
            gotoxy(i * 2 + 1, j + 1);
            printf("□");
            background[i][j] = 1;
        }
    }
    gotoxy(28, 4);
    printf("|------------------------|");
    gotoxy(28, 5);
    printf("|←: 블록 왼쪽으로 이동  |");
    gotoxy(28, 6);
    printf("|------------------------|");
    gotoxy(28, 7);
    printf("|→: 블록 오른쪽으로 이동|");
    gotoxy(28, 8);
    printf("|------------------------|");
    gotoxy(28, 9);
    printf("|↓: 블록 아래쪽으로 이동|");
    gotoxy(28, 10);
    printf("|------------------------|");
    gotoxy(28, 11);
    printf("|a : 블록 모양 변경      |");
    gotoxy(28, 12);
    printf("|------------------------|");
    gotoxy(28, 13);
    printf("|s : 블록 떨어뜨리기     |");
    gotoxy(28, 14);
    printf("|------------------------|");
    gotoxy(28, 18);
    printf(" 현제 점수 : %d", score);
}

//새로운 블록이 생성되는 함 수  
void block_start(block_xy start_xy, int* block_type)
{
    int chack = block_chack(start_xy, block_type);
    int n = 0;
    if (chack == 1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n=============게임 오버=============\n\n");
        printf("==========현재 score : %d==========", score);
    }
    else
    {
        block_print(start_xy, block_type);
    }
}

//해당 블록이 표현 될 수 있는지 확인해주는 함수 
int block_chack(block_xy start_xy, int* block_type)
{
    int i;
    block_xy chack;
    for (i = 0; i < 4; i++)
    {
        chack.x = block[*block_type][i].x + start_xy.x;
        chack.y = block[*block_type][i].y + start_xy.y;

        if (chack.y >= 0)
        {
            if (background[chack.x][chack.y] == 1)
            {
                return 1;
            }
        }
    }
    return 0;
}

//해당 블록을 출력해주는 함 수  
void block_print(block_xy start_xy, int* block_type) {

    int i;
    block_xy chack;

    for (i = 0; i < 4; i++)
    {
        chack.x = block[*block_type][i].x + start_xy.x;
        chack.y = block[*block_type][i].y + start_xy.y;

        if (chack.y >= 0)
        {
            gotoxy(chack.x * 2 + 1, chack.y + 1);
            printf("■");
        }
    }
}

//출력된 블록을 제거해주기 위한 함수   블록 이동시 사용됨  
void block_delete(block_xy start_xy, int* block_type)
{
    int i;
    block_xy chack;
    for (i = 0; i < 4; i++)
    {
        chack.x = block[*block_type][i].x + start_xy.x;
        chack.y = block[*block_type][i].y + start_xy.y;
        gotoxy(chack.x * 2 + 1, chack.y + 1);
        printf("  ");
    }
}

//블록이 멈췄을때 메모리에 볼록모양으로 값을 넣어주는 함수 
void block_stop(block_xy start_xy, int* block_type)
{
    int i;
    block_xy chack;
    for (i = 0; i < 4; i++)
    {
        chack.x = block[*block_type][i].x + start_xy.x;
        chack.y = block[*block_type][i].y + start_xy.y;
        background[chack.x][chack.y] = 1;
    }
}



//방향키가 입력되었을때 블록이 이동가능여부를 확인해주고 이동시켜주는 함수
block_xy block_move(block_xy start_xy, int* block_type)
{
    clock_t t1, t2, full_count = 0;

    int direction, chack, chack2;
    t1 = clock();

    while (1)
    {
        if (_kbhit())
        {
            direction = _getch();

            if (direction == 224)
            {
                direction = _getch();
            }

            switch (direction)
            {
            case left:
                start_xy.x--;
                chack = block_chack(start_xy, block_type);

                if (chack == 1)
                {
                    start_xy.x++;
                }
                else
                {
                    start_xy.x++;
                    block_delete(start_xy, block_type);

                    start_xy.x--;
                    block_print(start_xy, block_type);
                }
                break;

            case right:
                start_xy.x++;
                chack = block_chack(start_xy, block_type);

                if (chack == 1)
                {
                    start_xy.x--;
                }
                else
                {
                    start_xy.x--;
                    block_delete(start_xy, block_type);

                    start_xy.x++;
                    block_print(start_xy, block_type);
                }
                break;

            case down:
                start_xy.y++;
                chack = block_chack(start_xy, block_type);

                if (chack == 1)
                {
                    start_xy.y--;
                }
                else
                {
                    start_xy.y--;
                    block_delete(start_xy, block_type);
                    start_xy.y++;
                    block_print(start_xy, block_type);
                }
                break;

            case full_down:
                while (1)
                {
                    start_xy.y++;
                    chack = block_chack(start_xy, block_type);

                    if (chack == 1)
                    {
                        start_xy.y--;
                        full_count = 00;
                        break;
                    }
                    else
                    {
                        start_xy.y--;
                        block_delete(start_xy, block_type);

                        start_xy.y++;
                        block_print(start_xy, block_type);
                    }
                }
                break;

            case  change:
                if (*block_type >= 0 && *block_type <= 5)
                {
                    if (*block_type % 2 == 1)
                    {
                        *block_type -= 1;
                        chack2 = block_chack(start_xy, block_type);

                        if (chack2 == 1)
                        {
                            *block_type += 1;
                        }
                        else
                        {
                            *block_type += 1;
                            block_delete(start_xy, block_type);

                            *block_type -= 1;
                            block_print(start_xy, block_type);
                        }
                    }
                    else
                    {
                        *block_type += 1;
                        chack2 = block_chack(start_xy, block_type);

                        if (chack2 == 1)
                        {
                            *block_type -= 1;
                        }
                        else {
                            *block_type -= 1;
                            block_delete(start_xy, block_type);
                            *block_type += 1;
                            block_print(start_xy, block_type);
                        }
                    }
                }
                else if (*block_type >= 6 && *block_type <= 17)
                {
                    if ((*block_type - 6) % 4 == 3)
                    {
                        *block_type -= 3;
                        chack2 = block_chack(start_xy, block_type);

                        if (chack2 == 1)
                        {
                            *block_type += 3;
                        }
                        else
                        {
                            *block_type += 3;
                            block_delete(start_xy, block_type);
                            *block_type -= 3;
                            block_print(start_xy, block_type);
                        }
                    }
                    else
                    {
                        *block_type += 1;
                        chack2 = block_chack(start_xy, block_type);

                        if (chack2 == 1)
                        {
                            *block_type -= 1;
                        }
                        else
                        {
                            *block_type -= 1;
                            block_delete(start_xy, block_type);
                            *block_type += 1;
                            block_print(start_xy, block_type);
                        }
                    }
                }
                break;
            }
        }
        t2 = clock();
        t2 += full_count;
        if (t2 - t1 > time_count)break;
    }
    return start_xy;
}

//블록이 멈추고 라인을 검사하고 라인을 제거해주는 함수
void line_chack_and_remove() {

    int i, j, t, chack;
    for (i = 19; i > 0; i--)
    {
        for (j = 1; j < 12; j++)
        {
            chack = background[j][i];

            if (chack == 0)break;
        }

        if (chack == 1)
        {
            for (j = 1; j < 12; j++)
            {
                for (t = i; t > 1; t--)
                {
                    background[j][t] = background[j][t - 1];
                    gotoxy(j * 2 + 1, t + 1);

                    if (background[j][t] == 1)
                    {
                        printf("■");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
            i++;
            score += 100;

            gotoxy(28, 18);
            printf(" 현재 점수 : %d", score);
        }
    }
}