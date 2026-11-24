#include <stdio.h>



int digitSum(int n) {
    if (n == 0)
        return 0;
    return n % 10 + digitSum(n / 10);
}
int calculateChecksum(int transactionID) {
    if (transactionID < 10)
        return transactionID;
    return calculateChecksum(digitSum(transactionID));
}
int main() {
    int id;
    printf("enter transaction ID: ");
    scanf("%d", &id);
    printf("Checksum = %d\n", calculateChecksum(id));
    return 0;
}
