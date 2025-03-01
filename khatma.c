
#include <stdio.h>

#define TOTAL_PAGES 604.000
#define DAYS_IN_MONTH 30

int main() {
    float day, currentPage, pagesPerDay;

    
    printf(" 🌙 KHATMA 🌙 \n\n\n\n 🔴 For 'n' khatmas Change the constant 604 int begin to \n n x 604 \n\n\n wech mn nhar rana ? ");
    scanf("%f", &day);

     
    if (day < 1 || day > DAYS_IN_MONTH) {
        printf("\n\n\n\n SALI 3LA NABIK \n\n\n\n");
        return 1; 
    }

 
    printf("\n\n\n wech men saf7a rak la7e9 ?\n\n\n  ");
    scanf("%f", &currentPage);

     
    if (currentPage < 1 || currentPage > TOTAL_PAGES) {
        printf("\n\n\n\n SALI 3LA NABIK \n");
        return 1;
    }

     
    float remainingDays = DAYS_IN_MONTH - day + 1;

 
    float remainingPages = TOTAL_PAGES - currentPage;

 
    if (remainingDays > 0) {
        pagesPerDay = remainingPages / remainingDays;
        printf("\n\n\n\ Lazmek ta9ra minimum %f f nhar \n", pagesPerDay);
    } else {
        printf("sa7a aidek\n");
    }

    return 0;
}
    
