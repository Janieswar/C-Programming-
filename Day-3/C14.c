#include<stdio.h>
int product(int a,int b,int c) {
    return a*b*c;
}
int main() {
    int result = product(10,20,30);
    printf("product=%d",result);
    return 0;
}