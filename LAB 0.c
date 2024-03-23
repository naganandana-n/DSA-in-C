#include <stdio.h>

int main(){

    FILE *fptr, *fptr2;
    /*
    QUESTION 1

    fptr = fopen("~/studentout1.dat", "w");
    fprintf(fptr, "Implementing data structures would be fun");
    fclose(fptr);
    */

    /*
    QUESTION 2

    fptr = fopen("~/studentout1.dat", "r");
    char output[200];
    fgets(output, 200, fptr);
    printf("%s", output);
    fclose(fptr);
    */

    /*
    QUESTION 3

    fptr = fopen("~/studentout1.dat", "a");
    fprintf(fptr, "\nMy name is Naga");
    fprintf(fptr, "\nThis is sneha");
    fprintf(fptr, "\nWe are studying only");
    fclose(fptr);
    */

   // QUESTION 4
   
    fptr = fopen("~/studentout1.dat", "r"); // ENTER CORRECT PATH
    char copy[1000];
    fptr2 = fopen("~/studentout2.dat", "a");
    while(fgets(copy, 1000, fptr)){
    printf("%s", copy);
    fprintf(fptr2, copy);
    }
    fclose(fptr2);

}