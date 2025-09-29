#include <stdio.h>

struct Date {
    int day, month, year;
};

int main() {
    struct Date d1 = {25, 9, 2025};
    struct Date d2 = {30, 9, 2025};

    if (d1.year < d2.year || 
       (d1.year == d2.year && d1.month < d2.month) ||
       (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)) {
        printf("First date is earlier\n");
    } else if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        printf("Both dates are same\n");
    } else {
        printf("Second date is earlier\n");
    }

    return 0;
}
