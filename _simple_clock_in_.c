#include <stdio.h>
#include <windows.h>

/*
 * main: This is me trying out conditional statements on "C"
 * A simple clock you can get started anytime
 *
 */

int main()
{
    int hours, minutes, seconds;

    /*Had to learn this 1000 miliseconds call : this slows down the loop at seconds call so it's more like a clock count down*/
    int D = 1000;

    printf(">>>>>WELCOME<<<<<");
    printf("\nEnter your local time: \nHOUR:00 MINUTES:00 SECONDS:00\n");
    scanf("%d %d %d", &hours, &minutes, &seconds); /*Gets input*/

    if (hours > 12)
    {
        printf("ERROR!\n");
        exit(0);
    }
    if (minutes > 60)
    {
        printf("ERROR!\n");
        exit(0);
    }
    if (seconds > 60)
    {
        printf("ERROR!\n");
        exit(0);
    }
    while (1)
    {
        seconds++;
        if (seconds > 59)
        {
            minutes++;
            seconds = 0;
        }
        if (minutes > 59)
        {
            hours++;
            minutes = 0;
        }
        if (hours > 24)
        {
            hours = 1;
            minutes = 0;
            seconds = 0;
        }

        printf("HR:MN:SC");
        printf("\n%02d:%02d:%02d", hours, minutes, seconds);

        /*Slow down the loop to seconds!!*/
        Sleep(D);
        /*Clears^Resets the screen*/
        system("cls");
    }

    getchar();

    return 0;
}