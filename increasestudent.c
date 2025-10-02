#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    int n;
    printf("Enter initial number of students: ");
    scanf("%d", &n);

    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("Enter roll and name for student %d: ", i+1);
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    int newN;
    printf("Enter new total number of students: ");
    scanf("%d", &newN);

    s = (struct Student *)realloc(s, newN * sizeof(struct Student));

    for (int i = n; i < newN; i++) {
        printf("Enter roll and name for new student %d: ", i+1);
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    printf("\nAll Students:\n");
    for (int i = 0; i < newN; i++) {
        printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
    }

    free(s);
    return 0;
}
