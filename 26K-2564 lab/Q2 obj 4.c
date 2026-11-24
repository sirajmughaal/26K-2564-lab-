#include <stdio.h>

struct Product {
    int id;
    char name[30];
    char category[30];
    float price;
    int stock;
};

void displayProductDetails(struct Product p) {
    float finalPrice = p.price - p.price * 0.05;
    printf("id: %d\n", p.id);
    printf("name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Price: %.2f\n", p.price);
    printf("stock: %d\n", p.stock);
    printf("price after 5%% discount: %.2f\n", finalPrice);
}
int main() {
    struct Product p1 = {101, "Laptop", "Electronics", 85000.0, 12};
    struct Product p2 = {102, "Headphones", "Accessories", 3500.0, 40};
    displayProductDetails(p1);
    printf("\n");
    displayProductDetails(p2);
    return 0;
}
