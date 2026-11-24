#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item items[5];
    float total = 0;
    int searchId, found = 0;

    for (int i = 0; i < 5; i++) {
        printf("item %d\n", i + 1);
        printf("Enter id: ");
        scanf("%d", &items[i].id);
        printf("Enter name: ");
        scanf("%s", items[i].name);
        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter unit price: ");
        scanf("%f", &items[i].unitPrice);
        total = total + items[i].quantity * items[i].unitPrice;
    }

    printf("\ntotal inventory value: %.2f\n", total);

    printf("Enter item ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++) {
        if (items[i].id == searchId) {
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf(" not found\n");

    return 0;
}
