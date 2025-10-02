#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob; 
};

int main() {
    struct Student s1 = {101, "Ravi", {15, 8, 2002}};

    printf("Student: %s (Roll %d)\nDOB: %d-%d-%d\n", 
           s1.name, s1.roll, s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
