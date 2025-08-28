#include <stdio.h>

int main()
{
    
float peso, altura, imc;

printf ("digite seu peso") ;
scanf ("%f", &peso) ;

printf ("digite sua altura") ;
scanf ("%f", &altura) ;

imc = peso / (altura * altura) ;
printf ("seu IMC é: %f", imc) ;

if (imc <18.5)
printf ("abaixo do peso") ;
else if (imc <24.9)
printf ("peso normal") ;
else if (imc <29.9)
printf ("sobre peso") ;
else if (imc <34.9)
printf ("obesidade grau I") ;
else if (imc < 39.9)
printf ("obesidade grau II") ;
else if (imc >= 40)
printf ("obesidade grau III") ;

    return 0;
}