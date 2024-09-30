#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

/*
char s[] = "Hello, world";
    char *ptr = s + 1 ;

    printf("s : %d", *ptr);
*/

int a = 18;
int *ptra = &a;

char s = 's';
char *ptr = &s;
char **ptr2 = &ptr;


printf("valeur de a : %d \n", a);
printf("Adresse de a : %p \n", &a);

printf("adress s : %p \n", &s);
printf("value s : %d \n", s);
//printf("adress ptr : %d", &ptr);
//printf("value ptr : %d", ptr);
//printf("address ptr2 : %c", &ptr2);
// ptr2 a comme valeur l'adresse de ptr
// *ptr2 est-ce possible ? Si oui il doit avoir comme valeur la référence de s
printf("value *ptr2 : %p\n", *ptr2);
// comparaison :
printf("ref de s : %p\n", &s);


    return 0;
} 
