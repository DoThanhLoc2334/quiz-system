#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *question;
    const char *options;
    char correct_answer;
} QuizQuestion;

static void clear_screen(void)
{
    system("cls");
}

static void wait_for_enter(void)
{
    printf("\nPress Enter to continue...");
    while (getchar() != '\n') {
    }
}

static int ask_question(const QuizQuestion *q, int current_score)
{
    char answer;

    clear_screen();
    printf("%s\n", q->question);
    printf("%s\n", q->options);
    printf("Enter your answer: ");

    if (scanf(" %c", &answer) != 1) {
        return current_score;
    }

    while (getchar() != '\n') {
    }

    if (answer == q->correct_answer || answer == (q->correct_answer - 32)) {
        current_score += 10;
        printf("Good job. Your score is %d\n", current_score);
    } else {
        printf("Sorry, wrong answer. Your score is %d\n", current_score);
    }

    wait_for_enter();
    return current_score;
}

int main(void)
{
    char name[100];
    int score = 0;
    int total_questions;
    int max_score;
    int percentage;
    int i;

    const QuizQuestion questions[] = {
        {"What is called as 'THE HOLY LAND'?", "a. Jerusalem\nb. Mathura\nc. Mecca", 'a'},
        {"What is called as 'THE ROOF OF THE WORLD'?", "a. Nepal\nb. Rome\nc. Tibet", 'c'},
        {"What is called as 'THE LAND OF RISING SUN'?", "a. Chicago\nb. Japan\nc. Tibet", 'b'},
        {"What is called as 'THE GIFT OF NILE'?", "a. Chicago\nb. Egypt\nc. Africa", 'b'},
        {"What is called as 'THE LAND OF MIDNIGHT SUN'?", "a. Norway\nb. Japan\nc. Australia", 'a'},
        {"What is called as 'THE LAND OF THUNDERBOLT'?", "a. Bhutan\nb. Canada\nc. Arab", 'a'},
        {"What is called as 'THE WINDY CITY'?", "a. Jerusalem\nb. Japan\nc. Chicago", 'c'},
        {"What is called as 'THE LAND OF WHITE ELEPHANTS'?", "a. Bangladesh\nb. Thailand\nc. India", 'b'},
        {"What is called as 'THE CITY OF SEVEN HILLS'?", "a. Rome\nb. Nilgiri Hills\nc. Tibet", 'a'},
        {"What is called as 'THE LAND OF FIRE AND ICE'?", "a. Iceland\nb. Greenland\nc. Finland", 'a'},
        {"What is called as 'THE PEARL OF THE ORIENT'?", "a. Vietnam\nb. Philippines\nc. Thailand", 'b'},
        {"What is called as 'THE DARK CONTINENT'?", "a. Asia\nb. Australia\nc. Africa", 'c'}
    };

    total_questions = (int)(sizeof(questions) / sizeof(questions[0]));
    max_score = total_questions * 10;

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    clear_screen();
    printf("Welcome %s\n", name);
    wait_for_enter();

    for (i = 0; i < total_questions; i++) {
        score = ask_question(&questions[i], score);
    }

    clear_screen();
    percentage = (score * 100) / max_score;

    printf("Quiz finished.\n");
    printf("Final score: %d/%d\n", score, max_score);

    if (percentage == 100) {
        printf("Perfect score. Excellent work!\n");
    } else if (percentage >= 80) {
        printf("You are extremely intelligent.\n");
    } else if (percentage >= 60) {
        printf("You are intelligent.\n");
    } else if (percentage >= 40) {
        printf("You are average. Better luck next time.\n");
    } else {
        printf("Keep practicing. You can improve a lot.\n");
    }

    return 0;
}
