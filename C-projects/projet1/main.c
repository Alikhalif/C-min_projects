#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N;

    while(true){
        printf(">> WELCOM TO ME APPLICATION <<\n");
        printf("\n1-ajouter \n2-afficher \n3-supprimer \n4-Quitter \n");
        scanf("%d",&N);

        switch(N){
           case 1: printf("donner le nomber des note : ");
                   scanf("%d",&nbrN);
                   add(nbrN);
                   break;
           case 2: select();
                   break;
           case 3: printf("delete");
                   break;
           case 4: printf("Exit");
                   break;
           default : printf("Errur");
                     break;
        }
        if(N==4){
            break;
        }

    }
    return 0;
}



int add(int nbrN){
    int arr[100], T[2];
    int i,nbrN;

    for(i=0; i<nbrN; i++){
        printf("enter nomber %d : ",i+1);
        scanf("%d \n",&arr[i]);
    }

    return arr;
}

int select(int *arr[]){
    int nbrN,i;



    for(i=0; i<10; i++){
        printf("%d",arr[i]);
    }


}

