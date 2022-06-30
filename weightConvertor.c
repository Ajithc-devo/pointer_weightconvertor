#include <stdio.h>
void convert( float *,float *,float *,float *);
int main() {
   float kg,gram,ton,pound;
   printf("Enter a weight ");
   scanf("%f",&kg);
   convert(&kg,&gram,&ton,&pound);
   printf("Convert of %.2f into Gram = %.2f \n",kg,gram);
   printf("Convert of %.2f into Ton = %f \n",kg,ton);
   printf("Convert of %.2f into Pounds = %.2f \n",kg,pound);
   
    return 0;
}

void convert( float *gk,float *gr,float *to ,float *po){
    *gr = *gk * 1000;
    *to = *gk /1000;
    *po = *gk * 2.20462;
}
