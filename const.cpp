//define é mais perigosa porque so cambia o texto literal polo literal indicado
//sen comprobar tipos
#define HOLA 4

int main()
{
	//aqui a non ten moita importancia a orde pero si a ten con punteiros
	//sempre que se este seguro de que a variable non vai cambiar o valor que conten usar const
	//como en php para facer unha variable constante usamos const
	//e define para unha palabra que queiramos intercambiar por un valor
	const int v = 5;
	int const x = 6;
	int h = HOLA;
	x=7;
	v=4;

	return 0;
}
