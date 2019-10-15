#include "port.h"
#include <conio.h>
principal(){
	
inteiro a = 12;
real b = 10.345;
caractere c = 's';

estrutura cachorro {
inteiro idade;
inteiro latir() {
	escrever ("o objeto cachorro disse: au au au \n");
};
};


estrutura cachorro toto;
toto.idade = 13;
toto.latir();
escrever("valor de a: %d\n", a);
escrever("valor de b: %f\n", b);
escrever("valor de c: %c\n", c);
sistema ("pause");
}
