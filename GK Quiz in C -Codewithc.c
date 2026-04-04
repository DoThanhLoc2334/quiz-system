#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//CODEWITHC.COM
void showResult(int score) {
    printf("\n===== FINAL RESULT =====\n");

    if(score == 100) {
        printf("Perfect score! You may have played before.\n");
    }
    else if(score >= 90) {
        printf("Excellent! Your score is %d\n", score);
    }
    else if(score >= 80) {
        printf("Good job! Your score is %d\n", score);
    }
    else if(score >= 50) {
        printf("Average performance. Your score is %d\n", score);
    }
    else {
        printf("Poor result. Try again! Your score is %d\n", score);
    }
}
int main()
{
    int x = 0;
    char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13;
    printf("Enter Your Name: ");
    scanf("%[^\n]", ch1);
    getchar();
    system("cls");
    printf("Welcome %s\n", ch1);
    printf("What is called as ' THE HOLY LAND'?\n");
    printf("a.Jerusalem\nb.Mathura\nc.Mecca");
    printf("\nEnter your answer: ");
    scanf("%c", &ch2);
    getchar();
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
    scanf("%c", &ch3);
    getchar();
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
    scanf("%c", &ch4);
    getchar();
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
    scanf("%c", &ch5);
    getchar();
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
    scanf("%c", &ch6);
    getchar();
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
    scanf("%c", &ch7);
    getchar();
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
    printf("What is called as ' THE WINDY CITY?\n");
    printf("a.Jerusalem\nb.Japan\nc.Chicago");
    printf("\nEnter your answer: ");
    scanf("%c", &ch8);
    getchar();
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
    scanf("%c", &ch9);
    getchar();
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
    scanf("%c", &ch10);
    getchar();
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
scanf("%c", &ch12);
getchar();
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
scanf("%c", &ch13);
getchar();
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
    scanf("%c", &ch11);
    getchar();
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
