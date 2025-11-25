#include<stdio.h>
int main() {
    int n,i=2;
    printf("Enter a number:");
    scanf("%d",&n);

    while (i<n)
    {
        if (n%i==0)
        {
            printf("Not A Prime Number");
            return 0;
        }
        i++;
    }
    printf("Prime Number");
    return 0;
    
}