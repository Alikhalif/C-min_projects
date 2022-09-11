#include <stdio.h>
#include <stdlib.h>

int main(){
    struct professeur{
        int CIN;
        char nom[30];
        char specialist[30];
    };

    struct professeur professeurs[4];

    int i;

    for(i=0; i<3; i++){
        printf("\nentre votre cin : ");
        scanf("%d",&professeurs[i].CIN);
        printf("\nentre votre nom : ");
        scanf("%s",&professeurs[i].nom);
        printf("\nentre votre specialist : ");
        scanf("%s",&professeurs[i].specialist);
    }

    printf("\n--------------------------\n");
    printf("\nla list de professeur\n");

    for(i=0; i<3; i++){
        printf("\nle CIN : %d\nle NOM : %s \nle SPESIALIST : %s",professeurs[i].CIN,professeurs[i].nom,professeurs[i].specialist);
    }

    return 0;
}

