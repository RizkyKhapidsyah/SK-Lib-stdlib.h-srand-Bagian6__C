#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    srand(time(NULL)); //gunakan waktu saat ini sebagai seed untuk generator acak
    int random_variable = rand();
    printf("Random value on [0,%d]: %d\n", RAND_MAX, random_variable);

    _getch();
    return 0;
}