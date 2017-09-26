#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "power.c"
#include "fact.c"

int main(){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Addition = %d",addition(a,b));
        printf("Substraction = %d",sub(a,b));
        printf("Multiplication = %d",mul(a,b));
        printf("Exponent = %d",power(a,b));
        printf("Factorial = %d",fact(a));
}
