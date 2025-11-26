// Pointer To Function
// Used For Swapping, Modifying Values Inside Function
#include<stdio.h>
void change(int *x){
    *x=100+464613;
}
int main(){
    int a = 10;
    change(&a);
    printf("a=%d",a);
    return 0;
}