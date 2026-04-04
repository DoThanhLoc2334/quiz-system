#include<stdio.h>

#include "result.h"

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
