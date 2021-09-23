#include<stdio.h>

int main (){
 
 int Juego;
 printf("Bienvenido a diversiti \n");
 printf("menu principal \n");
 printf("para jugar triki presione 1\npara jugar ahorcado presione 2\npara jugar sumas presione 3\n");
 scanf("%d", &Juego);

 if (Juego==1 )
 {
     printf("juegas triki");
 }
 if (Juego==2)
 {
     printf("juegas ahorcado");
     
 }
 if (Juego==3)
 {
     printf("juegas sumas");
 }


    return 0;
}