
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

char choice[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board()
{
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  v/s  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", choice[1], choice[2], choice[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", choice[4], choice[5], choice[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", choice[7], choice[8], choice[9]);

    printf("     |     |     \n\n");
}

int checkwin()
{
    if (choice[1] == choice[2] && choice[2] == choice[3])
        return 1;

    else if (choice[4] == choice[5] && choice[5] == choice[6])
        return 1;

    else if (choice[7] == choice[8] && choice[8] == choice[9])
        return 1;

    else if (choice[1] == choice[4] && choice[4] == choice[7])
        return 1;

    else if (choice[2] == choice[5] && choice[5] == choice[8])
        return 1;

    else if (choice[3] == choice[6] && choice[6] == choice[9])
        return 1;

    else if (choice[1] == choice[5] && choice[5] == choice[9])
        return 1;

    else if (choice[3] == choice[5] && choice[5] == choice[7])
        return 1;

    else if (choice[1] != '1' && choice[2] != '2' && choice[3] != '3' &&
             choice[4] != '4' && choice[5] != '5' && choice[6] != '6' && choice[7] != '7' && choice[8] != '8' && choice[9] != '9')

        return 0;
    else
        return -1;
}

void Tiktaktoe()
{
    int player = 1, i, turn, again, j, k;
    char mark;
    do
    {

        system("cls");
        player = (player % 2) ? 1 : 2;
        board();
        printf("Player %d, enter a number:  ", player);
    p1:

        scanf("%d", &turn);
        mark = (player == 1) ? 'X' : 'O';

        if (turn == 1 && choice[1] == '1')
            choice[1] = mark;

        else if (turn == 2 && choice[2] == '2')
            choice[2] = mark;

        else if (turn == 3 && choice[3] == '3')
            choice[3] = mark;

        else if (turn == 4 && choice[4] == '4')
            choice[4] = mark;

        else if (turn == 5 && choice[5] == '5')
            choice[5] = mark;

        else if (turn == 6 && choice[6] == '6')
            choice[6] = mark;

        else if (turn == 7 && choice[7] == '7')
            choice[7] = mark;

        else if (turn == 8 && choice[8] == '8')
            choice[8] = mark;

        else if (turn == 9 && choice[9] == '9')
            choice[9] = mark;

        else
        {
            printf("Position is already taken. Please enter valid number:");
            goto p1;
        }
        i = checkwin();

        player++;
    } while (i == -1);
    system("cls");
    board();

    if (i == 1)
    {

        printf("==>\aWinner winner chicken dinner.\nPlayer %d wins.\n\n", --player);
    }
    else
    {

        printf("==>\aGame draw\n\n");
    }
    getch();
}

void Sticks()
{
    int a, b, c, d, e, f, g, h, i, j, k;
    printf("Welcome to the game of 'Impossible Matchsticks'\n\n\nThe rules are:\n   1.You choose 1/2/3/4 matches out of 21.\n   2.Then i choose some matches.\n   3.The one to pick up the last match looses.\n\nPress enter to start the game.");
    getch();

start:
    system("cls");
    printf("\n\nOK, Lets start the game.\n\nWe have 21 matchsticks.\n\n| | | | | | | | | | | | | | | | | | | | |\n");
    printf("\nChoose 1,2,3 or 4\n");
stepa:
    scanf("%d", &a);
    system("cls");
    if ((a <= 4) && (a >= 1))

    {
        printf("Hmm, well played !\n");
        printf("\nNow we have %d matches.\n\n", 21 - a);
        for (b = 1; b <= 21 - a; b++)
            printf("| ");
    }
    else
    {
        printf("\nYou can't pick more than 4 sticks ! \nChoose a number from 1 to 4\n");
        goto stepa;
    }
    printf("\n\nMy turn\nI choose %d matches.\n\nNow we are left with 16 matches.\n\n| | | | | | | | | | | | | | | |\n\nYOUR TURN\n", 5 - a);
stepb:
    scanf("%d", &c);
    system("cls");
    if ((c <= 4) && (c >= 1))
    {
        printf("That was a good move !\n");
        printf("\n\nNow we have %d matches.\n", 16 - c);
        for (d = 1; d <= 16 - c; d++)
            printf("| ");
    }
    else
    {
        printf("\nYou can't pick more than 4 sticks ! \nChoose a number from 1 to 4\n");
        goto stepb;
    }
    printf("\n\nNow I Choose %d matches.\n\nWe are left with 11 matches.\n\n| | | | | | | | | | |\n\nYOUR TURN\n", 5 - c);
stepc:
    scanf("%d", &e);
    system("cls");
    if ((e <= 4) && (e >= 1))
    {
        printf("Hmm...\n");
        printf("\n\nNow we have %d matches.\n", 11 - e);
        for (f = 1; f <= 11 - e; f++)
            printf("| ");
    }
    else
    {
        printf("\nYou can't pick more than 4 sticks ! \nChoose a number from 1 to 4\n");
        goto stepc;
    }
    printf("\n\nNow I Choose %d matches.\n\nWe are left with 6 matches.\n\n| | | | | |\n\nYOUR TURN\n", 5 - e);
stepd:
    scanf("%d", &g);
    system("cls");
    if ((g <= 4) && (g >= 1))
    {
        printf("\n\nNow we have %d matches.\n", 6 - g);
        for (h = 1; h <= 6 - g; h++)
            printf("| ");
    }
    else
    {
        printf("\nYou can't pick more than 4 sticks ! \nChoose a number from 1 to 4\n");
        goto stepd;
    }
    printf("\n\nNow I Choose %d matches.\n\nWe are left with 1 matches.\n\n | ", 5 - g);

    printf("\n\nHaha, now you have to pick the last matchstick.\nI WIN.\nBetter luck next time.");
    printf("\n\nWanna play again?\nIf   YES = 1\n     NO = 0\n");
    scanf("%d", &j);
    if (j == 1)
    {
        goto start;
    }
    else if (j == 0)
    {
        system("cls");
        printf("\n\nTHANKS FOR PLAYING>\nSEE YOU AGAIN!\n");
        printf("RATE THE GAME OUT OF 10\n");
        scanf("%d", k);
    }

    getch();
}


int main()
{
    int choice;
    printf("\t\t\tHELLO Players \n\t\t\tWelcome to SamTech.\n\n\tCHOOSE YOUR GAME\n\n\n ||Press 1 for TIKTAKTOE|| \t ||Press 2 for IMPOSSIBLE MATCHSTICKS||\n\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        system("cls");
        Tiktaktoe();
    }
    else if(choice==2)
    {
        system("cls");
        Sticks();
    }
    else
    {
        system("cls");
        printf("More games coming soon !");
        getch();
    }
}
