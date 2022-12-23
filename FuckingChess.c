#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int move = 0;

char table[8][8] =
{
    //    0    1    2    3    4    5    6    7
        {'R', 'H', 'B', 'K', 'Q', 'B', 'H', 'R'}, // 0 
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, // 1
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 2
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 3
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 4
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // 5
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, // 6
        {'R', 'H', 'B', 'K', 'Q', 'B', 'H', 'R'}, // 7
};

bool GAME = true;

void draw();
void figureMovement(int y0, int x0, int y, int x);

int main() {
    draw();

    printf("\n ------------------------------------------ \n");

    figureMovement(6, 4, 5, 4);
    figureMovement(5, 4, 3, 4);
    return 0;
}

void draw() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", table[i][j]);
        }
        printf("\n");
    }
}

void figureMovement(int y0, int x0, int y, int x) {
	char figureName = table[y0][x0];
    switch (figureName) {
		case 'P':
            if (y0 == 6) {
				if ((y0 - y) <= 2) {
					table[y0][x0] = table[y][x];
					table[y][x] = figureName;
                    system("cls");
					draw();
				} else {
					printf("You can't go by pawn more than 3 cells");
				}
            }
            else {
				if ((y0 - y) < 2) {
					table[y0][x0] = table[y][x];
					table[y][x] = figureName;
                    system("cls");
					draw();
				} else {
					printf("Do a normal move");
				}
            }
			break;
    }

}

void pawn() {

}
