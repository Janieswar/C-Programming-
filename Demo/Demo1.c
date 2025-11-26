#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("text.txt","r");
    if (fptr != NULL){
        printf("File open successfull");
    }
    else {
        printf("File open unsuccessfull");
    }
    return 0;
}