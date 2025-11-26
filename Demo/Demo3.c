#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("newFile.txt","w");
    fputs("Rane Vachchava Vanai Nakorake Veche Unnaale\n", fptr);
    fputs("Neeto Techchava Yedo Maimarupe Unnattunnale\n", fptr);
    fputs("Nuvve Adurunna Tadutune Pilichane Ninne Averante\n", fptr);
    fputs("Kaalam Parugulne Bratimali Nilipane Nuvve Kalakantu\n", fptr);
    fputs("Urike Urike Manase Urike Dorike Dorike Varamai Dorike\n", fptr);
    fputs("Adake Adake Nuvvi Darike Nanne Cheritive Vetike", fptr);
    fclose(fptr);
    fclose(fptr);
    return 0;
}