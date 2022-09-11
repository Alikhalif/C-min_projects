#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct{
        char *nom;
        int age;
    } stagiare;

    stagiare *omarPtr, omar;

    omarPtr = &omar;
    //(*omarPtr).nom = "ali",

    omarPtr->nom = "omar";
    omarPtr->age = 54;

    printf("nom %s | age %d ", omarPtr->nom, omarPtr->age);

    return 0;
}
