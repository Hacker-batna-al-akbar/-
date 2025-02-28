#include <stdio.h>

#define TOTAL_PAGES 604
#define DAYS_IN_MONTH 30

int main() {
    int day, currentPage, pagesPerDay;


    printf(" 🌙 KHATMA 🌙 \n\n\n\n wech mn nhar rana ? ");
    scanf("%d", &day);


    if (day < 1 || day > DAYS_IN_MONTH) {
        printf("\n\n\n\n SALI 3LA NABIK \n\n\n\n");
        return 1;
    }


    printf("\n\n\n wech men saf7a rak la7e9 ?\n\n\n  ");
    scanf("%d", &currentPage);


    if (currentPage < 1 || currentPage > TOTAL_PAGES) {
        printf("\n\n\n\n SALI 3LA NABIK \n");
        return 1;
    }


    int remainingDays = DAYS_IN_MONTH - day + 1;


    int remainingPages = TOTAL_PAGES - currentPage;


    if (remainingDays > 0) {
        pagesPerDay = remainingPages / remainingDays;
        printf("\n\n\n\ Lazmek ta9ra minimum %d f nhar \n", pagesPerDay);
    } else {
        printf("sa7a aidek\n");
    }

    return 0;
}
