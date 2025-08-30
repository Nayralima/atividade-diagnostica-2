#include <stdio.h>

int main()
{
    
    float lado1 ;
    float lado2 ;
    float lado3 ;
    
    printf  ("digite o primeirovalor") ;
    scanf ("%f", &lado1) ;
    printf ("digite o segundo valor") ;
    scanf ("%f", &lado2) ;
    printf ("digite o terceiro valor") ;
    scanf ("%f", &lado3) ;
    
    if (lado1 + lado2 > lado3 &&
    lado1 + lado3 > lado2 &&
    lado2 + lado3 > lado1 &&
    lado1 > 0 && lado2 > 0 && lado3 > 0) {
    
    if (lado1 == lado2 && lado2 == lado3) 
    printf ("equilátero\n") ;
    else if (lado1 == lado2 || lado1 == lado3) 
    printf ("isóceles\n") ;
    else 
    printf ("escaleno\n") ;
    
    }
    else {
    printf ("os valores não formam um triangulo\n") ;
    }
    
    return 0;
}
