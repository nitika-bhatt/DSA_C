#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void q4_student() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100) {
        printf("Invalid number of students.\n");
        return;
    }

    struct Student s[100]; // fixed max size

    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name); // read full name with spaces
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[idx].marks) 
        idx = i;
    }

    printf("Topper: %s %d %.2f\n", s[idx].name, s[idx].rollNumber, s[idx].marks);
}

int main(){
    q4_student();
}
