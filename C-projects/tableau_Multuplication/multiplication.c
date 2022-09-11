#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,x;

    // printf("donner un nomber : ");
    // scanf("%d",&x);

    // for(i=1; i<=9; i++){
    //     for(j=1; j<=10; j++){
    //         printf("%d x %d = %d\n",i,j,i*j);
    //     }
    //     printf("\n ============== \n");
    // }


    printf("donner nombre de ligne : ");
    scanf("%d",&x);

    for(i=1; i<=x; i++){
        for(j=1; j<=x-i; j++){
            printf("  ");
        }
        for(j=1; j<=i*2-1; j++){
            printf("%d ",i);
        }
        printf("\n");
    }



    return 0;
}