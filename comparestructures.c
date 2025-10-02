#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
};

int compare(struct Student s1, struct Student s2) {
    if (s1.roll == s2.roll && strcmp(s1.name, s2.name) == 0)
        return 1;
    return 0;
}

int main() {
    struct Student s1 = {1, "Ravi"};
    struct Student s2 = {3, "Ravi"};

    if (compare(s1, s2))
        printf("Structures are equal\n");
    else
        printf("Structures are not equal\n");

    return 0;
}
