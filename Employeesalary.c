#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    char department[20];
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];
    for (int i = 0; i < n; i++) {
        printf("Enter id, name, salary, department: ");
        scanf("%d %s %f %s", &e[i].id, e[i].name, &e[i].salary, e[i].department);
    }

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
