// Reverse The Character
#include<stdio.h>
int main() {
    char s[50] = "Hello_Jhonny";
    int i,j;
    char temp;
    for (i=0,j=11;i<j;i++,j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s", s);
    return 0;
}