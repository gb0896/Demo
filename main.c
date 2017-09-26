#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "power.c"
#include "fact.c"

int main(){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("\nAddition = %d",addition(a,b));
        printf("\nSubstraction = %d",sub(a,b));
        printf("\nMultiplication = %d",mul(a,b));
        printf("\nExponent = %d",power(a,b));
        printf("\nFactorial = %d",fact(a));
}
