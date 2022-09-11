#include <stdio.h>
#include <stdlib.h>

int main(){
    int h=0,m=0,s=0;
    // int i;

    printf("donner l'heure sous form  (HH:MM:SS)  ");
    scanf("%d %d %d ",&h, &m, &s);

    for(h; h<24; h++){
        for(m; m<60; m++){
            for(s; s<60; s++){
                printf("%d %d %d ", h,m,s);
                for(double i=0; i<5999; i++){
                    i++;
                    i--;
                }
            }s=0;
        }m=0;
    }//h=0;
}
