#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int i;

    system("cls");
    goto mulai; 

mulai:
    for (i = 0; i < 5; i++) {
        // Pola 1
        gotoxy(5, i + 3);  printf("*");
        gotoxy(11, i + 3); printf("*");
        if (i < 3) { gotoxy(6 + i, i + 3);  printf("*"); }
        if (i < 2) { gotoxy(10 - i, i + 3); printf("*"); }

        // Pola 2
        gotoxy(14 + i, 3); printf("*");
        gotoxy(14 + i, 7); printf("*");
        if (i < 3) { gotoxy(16, i + 4); printf("*"); }

        // Pola 3
        gotoxy(21 + i, 3); printf("*");
        gotoxy(21 + i, 7); printf("*");
        if (i < 3) { gotoxy(24 - i, i + 4); printf("*"); }

        // Pola 4
        gotoxy(28, i + 3); printf("*");
        gotoxy(34, 7 - i); printf("*");
        if (i < 3) { gotoxy(29 + i, 7 - i); printf("*"); }
        if (i < 2) { gotoxy(32 + i, 6 + i); printf("*"); }

        // Pola 5
        gotoxy(42 - i, i + 3); printf("*");
        gotoxy(43 + i, i + 3); printf("*");
        gotoxy(40 + i, 6);     printf("*");

        // Pola 6
        gotoxy(50, i + 3); printf("*");
        gotoxy(50 + i, 3); printf("*");
        if (i < 4) { gotoxy(54 - i, 5);     printf("*"); }
        if (i < 2) { gotoxy(53 + i, 6 + i); printf("*"); }
    }

    gotoxy(45, 6); printf("*");
    gotoxy(55, 4); printf("*");
    goto selesai; 

selesai:
    gotoxy(19, 10);
    printf("Program Complete!\n\n");

    return 0;
}