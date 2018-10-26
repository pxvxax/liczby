#include <stdio.h>

int main() {
    int a;
    int licznik_petli = 0;


    for (a = 100; a >= 1; --a){
        if (!(a % 2))



printf("Liczby parzyste od 1 do 100 to jest: %d\n", a);

        licznik_petli++;

    }

    printf("\n");
    printf("liczba pętli wyniosła: %d\n", licznik_petli);


    return 0;
}