#include <iostream>
#include "utilidade.cpp"
//non ten sentido declarar unha funcion uhna e outra vez cada vez que a usamos
//vai contra o dont repeat yourself
//por iso é moito mellor alternativa declarala nun header para usala cando queiramos
//intuese que o interesante é ter un arquivo header para os prototipos
// os cpp's para as implementacions
// e o cpp co main que faga as cousas
//declaramos o nun lugar e se temos que cambiar algo non temos a necesidade de cambiar en miles de sitios solo na implementacion e no prototipo
int valor(int v);

int main()
{
	
	int a = 5;
	std::cout<<valor(a);
	return 0;
}
