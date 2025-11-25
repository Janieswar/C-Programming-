// Arguments With Return Values
#include<stdio.h>
int add(int a, int b) {
    return a+b;
}
int main() {
    int result = add(0,20);
    printf("Sum=%d",result);
    return 0;
}