#include<stdio.h>   
int main()
{
      int a=0, b, cont, numero, d;           
      printf(" Quantos numeros primos pretende exibir?\n\n 200?\n\n Digite a quantidade desejada= ");
      //Os números primos são aqueles que são divisíveis apenas por 1 e por eles mesmos. 
      scanf("%d",&numero);
      printf("Os primeiros numeros primos sao:\n");
      do {
        a++;         
		cont=0;
		for(b=1;b<a;b++)
             if(a%b==0)
             cont++;
         if(cont==1){
             printf("%d\n",a);      //Imprimindo os números primos
             d++;
                 }
      }while(d); //Repete o bloco enquanto d for diferente de zero 0.
}       
