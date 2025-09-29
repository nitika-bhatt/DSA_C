#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n = 3;
    float limit = 300;
    struct Book b[3] = {
        {"C_Programming", "Dennis", 250},
        {"DSA", "Kathy", 400},
        {"AI", "Stuart", 350}
    };

    printf("Books with price above %.2f:\n", limit);
    for (int i = 0; i < n; i++) {
        if (b[i].price > limit) {
            printf("%s by %s, Price: %.2f\n", b[i].title, b[i].author, b[i].price);
        }
    }
    return 0;
}
