#include <iostream>


int valor(int& v);
int main()
{
	int a {1};
	//teñen que ser inicializadas se non da erro
	//int& ref;
	//podemos facer que a referencia sexa de so lectura con const e que so sirva para acceder a lectura do contido o que referecnia
	//pero non modificalo
	//porque as referecnias e punteiros teñen que ter o mesmo tipo que conteñen??? esta relacionado polo tamaño da memoria que ocupa
	//e pola aritmetica de punteiros ten que ser un int porque se facemos ++ a un punteiro colle outro bloque de memoria que indique o tipo
	//se o int ocupa 32 bits enton se sumamos un o punteiro ten que engadir outro tamaño do mesmo
	int const& refOR {a};//vai a esquerda do operador de referencia para indicar que a referencia é constante
	int& refa {a}; //o que creamos con esto é unha referencia un alias de a
	//como podemos comprobar modificamos directamente a variable pasada a funcion
	//o paramentro é un simple alias da variable a que directamente apunta o contido de a
	//non podemos asignar a unha referencia unha constante porque o compilador non ten garantias de que non se vai tentar modificar
	//para eso a referencia tamen ten que ser constante garantindolle asi a este que so é unha referencia de lectura
	int const w {1};
	int const& v {w};
	valor(a);

	std::cout<< a << std::endl;	

}

int valor(int& v)
{
	v *=2;
}
