#include "port.h"
#include <conio.h>
principal(){
        caractere a;
     escrever("digite um sinal de operacao\n");
     ler("%c", &a);
     se(a == '+') escrever("adi��o\n");
     senao se (a == '-') escrever("subtracao\n");
     senao se (a == '*') escrever ("multiplicacao\n");
     senao se (a == '/') escrever ("divisao\n");
     senao escrever("sinal desconhecido\n");  
     sistema("pause");       
            }

