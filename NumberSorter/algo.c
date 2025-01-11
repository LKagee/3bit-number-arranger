#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
int num1(int numberinput);
int num2(int numberinput);
int num3(int numberinput);
int sequence(int veryfirstnumber, int verysecondnumber, int verythirdnumber);


int main(void) {
    int numberinput = get_int("Enter up to 3 digits: ");


    int veryfirstnumber = num1(numberinput);
    int verysecondnumber = num2(numberinput);
    int verythirdnumber = num3(numberinput);
    int sequencetotal = sequence(veryfirstnumber, verysecondnumber, verythirdnumber);

}


int num1(int numberinput) {
        int firstnumber = floor(numberinput / 100);
       // for testing: printf("%i", firstnumber);
        return firstnumber;
    }




int num2(int numberinput) {
    int secondnumber = floor((numberinput / 10) % 10);
   // for testing: printf("%i", secondnumber);
    return secondnumber;

}

int num3(int numberinput) {
    int thirdnumber = floor(numberinput % 10);
   // for testing: printf("%i", thirdnumber);

    return thirdnumber;
}

int sequence(int veryfirstnumber, int verysecondnumber, int verythirdnumber) {
    if(veryfirstnumber <= verysecondnumber && verythirdnumber) {
        printf("Corrected Sequence: %i", veryfirstnumber);
            if(verysecondnumber <= verythirdnumber) {
                printf("%i%i\n", verysecondnumber, verythirdnumber);
            }
                if(verythirdnumber <= verysecondnumber) {
                    printf("%i%i\n", verythirdnumber, verysecondnumber);
                }
                printf("*** Press any key to continue ***");
                getchar();
                return main();

    }

    if(verysecondnumber <= veryfirstnumber && verythirdnumber) {
        printf("Corrected Sequence: %i", verysecondnumber);
            if(veryfirstnumber <= verythirdnumber) {
        printf("%i%i\n", veryfirstnumber, verythirdnumber);
               }
               if(verythirdnumber <= veryfirstnumber) {
        printf("%i%i\n", verythirdnumber, veryfirstnumber);
                }
                printf("*** Press any key to continue ***");
                getchar();
                return main();

            }

    if(verythirdnumber <= verysecondnumber && veryfirstnumber) {
        printf("Corrected Sequence: %i", verythirdnumber);
            if(verysecondnumber <= veryfirstnumber) {
                printf("%i%i\n", verysecondnumber, veryfirstnumber);
            }
                if(veryfirstnumber <= verysecondnumber) {
                printf("%i%i\n", veryfirstnumber, verysecondnumber);
            }
            printf("*** Press any key to continue ***");
            getchar();
            return main();
            }
            return 0;
    }









