#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float note1, note2,note3, note4,note5, moy, res;

   printf("enter your morks \n");
   scanf("%f %f %f %f %f",&note1, &note2,&note3, &note4,&note5);

   res = note1+note2+note3+ note4+note5 ;
   moy = res / 5;

   printf("your note finaly is : %.2f",moy);
   printf("ok");


    return 0;
}
