// Simple Interest
#include<stdio.h>
float simple_interest(float p,float t,float r){
    return (p*t*r)/100;
}
int main() {
    float p, t, r;
    printf("Enter P, T, R:");
    scanf("%f %f %f", &p, &t, &r);
    printf("Simple Interest %.2f\n", simple_interest(p, t, r));
    return 0;
}