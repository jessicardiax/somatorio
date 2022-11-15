//Escreva um programa que exibe o somatório dos valores pares existentes na faixa
//de 1 (inclusive) até 500 (inclusive).
#include <stdio.h>
 int main(){
     int i,soma=0;
 for (i=1; i<=500; i++){
     if (i % 2==1){
         soma +=1;
     }
 }
 printf("a soma dos pares de 1 á 500 é: %d\n\n",soma);
 
 return 0;
 }
