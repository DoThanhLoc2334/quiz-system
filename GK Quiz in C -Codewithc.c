#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "result.h"
//CODEWITHC.COM

int main()
{
    int x = 0;
    char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13;

    printf("Enter Your Name: ");
    scanf("%99[^\n]", ch1);
    getchar();

    system("cls");
    printf("Welcome %s\n", ch1);
    printf("What is called as ' THE HOLY LAND'?\n");
    printf("a.Jerusalem\nb.Mathura\nc.Mecca");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch2);
    if(ch2=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE ROOF OF THE WORLD'?\n");
    printf("a.Nepal\nb.Rome\nc.Tibet");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch3);
    if(ch3=='c')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF RISING SUN'?\n");
    printf("a.Chicago\nb.Japan\nc.Tibet");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch4);
    if(ch4=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE GIFT OF NILE'?\n");
    printf("a.Chicago\nb.Egypt\nc.Africa");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch5);
    if(ch5=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF MIDNIGHT SUN'?\n");
    printf("a.Norway\nb.Japan\nc.Australia");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch6);
    if(ch6=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF THUNDERBOLT'?\n");
    printf("a.Bhutan\nb.Canada\nc.Arab");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch7);
    if(ch7=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE WINDY CITY'?\n");
    printf("a.Jerusalem\nb.Japan\nc.Chicago");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch8);
    if(ch8=='c')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF WHITE ELEPHANTS'?\n");
    printf("a.Bangladesh\nb.Thailand\nc.India");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch9);
    if(ch9=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d\n", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE CITY OF SEVEN HILLS'?\n");
    printf("a.Rome\nb.Nilgiri Hills\nc.Tibet");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch10);
    if(ch10=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF FIRE AND ICE'?\n");
    printf("a.Iceland\nb.Greenland\nc.Finland");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch12);
    if(ch12=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE PEARL OF THE ORIENT'?\n");
    printf("a.Vietnam\nb.Philippines\nc.Thailand");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch13);
    if(ch13=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE DARK CONTIENENT'?\n");
    printf("a.Asia\nb.Australia\nc.Africa");
    printf("\nEnter your answer: ");
    scanf(" %c", &ch11);
    if(ch11=='c')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    showResult(x);

    return 0;
}
