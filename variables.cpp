#include <iostream>

int main()
{
	/**
	*http://en.cppreference.com/w/cpp/language/initialization
	*http://en.cppreference.com/w/cpp/language/list_initialization
	*/
	int i{ 2 }; //inicializacion uniforme como a inicializacion da lista dun array
	/**
	*http://en.cppreference.com/w/cpp/language/direct_initialization
	*/
	int v(3); //inicilizacion por contructor 
	
	int h = 4;//inicializacion por asignacion tipo c
	unsigned int a = -4; //non da erro pero si nos da un warning o compilador
	//os unsigned teñen sentido en que podemos almacenar nun integer 4billons de valores de -2b a +2b con signo e se non o necesitamos podemos
	//almacenar ate 4b de valores
	//non ignorar os warnings evalualos e buscar unha solucion
	//wchar_t aparece porque o char esta implementado de modo que cada caracter ocupa un byte  e alguns caracteres usan mais dun byte para a sua representacion
	double b{ 3/2 }; //vemos claramente por exemplo nunha linguaxe sen tipos como python que primeiro opera e logo castea colle un int entre un int e logo fai a operacion que da un int que logo converte a double
	std::cout<< b << std::endl;
}
