#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    char department[20];
};

int main() {
    int n = 3;
    struct Employee e[3] = {
        {1, "Raj", 50000, "IT"},
        {2, "Simran", 45000, "HR"},
        {3, "Aman", 60000, "IT"}
    };

    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].department, "IT") == 0) {
            e[i].salary *= 1.1;
        }
    }

    printf("Updated Employee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f %s\n", e[i].id, e[i].name, e[i].salary, e[i].department);
    }

    return 0;
}
