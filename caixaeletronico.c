#include <stdio.h>

int main () {
    int valor ;
    int cedulas [] = {100, 50, 20, 10,5, 2} ;
    int i ;
    int quantidade;
    
     printf ("digite o valor do saque") ;
     scanf ("%d", &valor) ;
     
     if (valor < 2 || valor % 2 != 0)
    printf ("valor invalido");
    return 1 ;
    printf ("notas a serem entregues: ") ;
    for (i = 0; i < 6; i++) {
    quantidade = valor / cedulas[i] ;
    if(quantidade > 0) {
    printf ("%d nota(s) de R$ %d\n", quantidade, cedulas[i]) ;
    valor = valor - (quantidade * cedulas[i]) ;
    }
}
    return 0 ;
}