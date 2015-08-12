//interesante saber que this esta dispoñible en todo o contexto posto polo compilador
//é pasado a cada metodo
//en python por exemplo pasamos nos o primeiro parametro qe sempre é a referencia a propia clase
#include <string>
class Rectangulo
{
public:
	int _ancho;
	int _alto;
	//se non cambia o estado do obxeto o metodo debe ser const
	int area() const
	{
		return this->_alto * this->_ancho;
	}
	//por defecto un metodo que acceda nun obxeto const vai dar erro da igual que sea getter ou setter
	//o compilador no momento que detecte que vai a ser usado un metodo nun obxeto constante para cambiar o seu estado
	//vai a dar erro, hai que indicarllo explicitamente poñendo const despois dos parenteses que di mais o menos
	//este metodo non vai a modificar o estado do obxeto
	//o this pasa como constante 
	int getAlto() const
	{
		return this->_alto;
	}

	
};
//porque na definicion dun prototipo necesitamos o nome completo exemplo Rectangulo::area() porque entramos no ambito da clase

void f(){
	//con const indicamos que o estado do obxeo non cambia
	//por eso os metodos que acceden o seu estado teñen que ter na sinatura o const como promesa
	//de que non van a modificar o estado
	//a menos que sea mutable o parametro
	Rectangulo const x{};
	x.getAlto();
}
