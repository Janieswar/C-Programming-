// Length Of The String
#include<stdio.h>
#include<string.h>
int main() {
    char str1[20] = "Hello";
    char str2[20] = "Jhonny";
    printf("Length of str1 = %lu\n", strlen(str1));
    strcpy(str2,str1);
    printf("After copying:%s\n",str1);
    return 0;
 }