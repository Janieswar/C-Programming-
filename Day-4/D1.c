// Square OF A Number
#include<stdio.h>
int square_number(int n){
    return n*n;
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Square = %d\n", square_number(num));
    return 0;
}