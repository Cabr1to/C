#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define TECLA_CIMA 72
#define TECLA_BAIXO 80
#define TECLA_DIREITA 77
#define TECLA_ESQUERDA 75
#define TECLA_RASTRO 60
#define TECLA_BORRACHA 61
#define COR 62
#define TECLA_SAIR 63
#define MAX_LIN 79
#define MAX_COL 239

void gotoxy(int col, int lin)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){col - 1, lin - 1});
}

int main()
{
    int col = 120, lin = 40, key = 0;
    int desenho_on = 1, borracha_on = 0, cor_on = 0;

    while (1)
    {
        gotoxy(col, lin);

        if (borracha_on)
        {
            putch(0);
        }
        else if (desenho_on)
        {
            putch(3);
        }

        key = getch();
        switch (key)
        {
        case TECLA_CIMA:
            if (lin > 1)
                lin--;
            break;
        case TECLA_BAIXO:
            if (lin < MAX_LIN)
                lin++;
            break;
        case TECLA_DIREITA:
            if (col < MAX_COL)
                col++;
            break;
        case TECLA_ESQUERDA:
            if (col > 1)
                col--;
            break;
        case TECLA_RASTRO:
            desenho_on = !desenho_on;
            break;

        case TECLA_BORRACHA:
            borracha_on = !borracha_on;
            break;

        case COR:

            if (!cor_on)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            }
            cor_on = !cor_on;
            break;

        case TECLA_SAIR:
            exit(0);
            break;
        }
    }

    return 0;
}