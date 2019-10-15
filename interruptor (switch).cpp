#include "port.h"
principal(){
                   inteiro a;
     escrever("digite um número de 1 a 7 para saber mqual o dia correspondente da semana\n");
     ler("%d", &a);
     interruptor(a) {
         caso 1: escrever("domingo\n") ;
         pausa;
         caso 2: escrever("segunda\n");
         pausa;
         padrao: escrever("outro dia, que não é segunda nem terça\n");           
                    }
     sistema("pause");       
            }
