#include <iostream>//inclue a string pero mellor se queremos usar string
		   //chamar a o header specifico de string
		   //funciona xa so con incluir iostream pero porque fai un include esta
		  //e nun futuro o mellor non esta implementado asi
#include <stirng>//podemos non incluila e pdoe funcionar porque os headers non son alleos entre eles e tamen fan usos entre si e fan includes pero pode o mellor
//cambiar a implementacion e non existir ese include en iostream e fallar o noso
//programa mellor incluir o header directamente
//que depender de includes oscuros e indirectos que non controlamos
int main()
{
	std::string v {"hola"};
	v += " mundo"; //cpp soporta a sobrecarga de operadores e este esta sobrecargado para facer a funcion de concatenar
	//coidado ca precedencia de operadores porque se non o operador de redireccion sen parenteses interpretao coma un shift
	//como vemos o operador de comparacion en cpp esta sobrecargado nas strings
	//de tal forma que compara cadeas caracter por caracter non referencias
	std::cout<< (v=="hola mundo") <<std::endl;
	return 0;
}
