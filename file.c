#include <stdio.h>
#include <windows.h>
int main()
{
    COORD pos;
    pos.X = 50;
    pos.Y = 10;
    char a;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    printf ("enter a two character = ");
    scanf("%c",&a);
    printf("ASCII value of %c = %d\n",a,a);   
    return 0;
}

