//nacen co proposito de evitar colisions
//o namespace de libreia standar é std
//aparte de incluir a libreria temos que facer uso do spazo de nomes xa que
//encapsula o contido da libreria
//temos o fullqualified std :: compoñente
//o std é o spazo de nomes co que accedemos mediante o operador de resolucion
//de ambito :: ao compoñente
//podemos facer uso de [using namespace x] é unha declaracion que indica que
//vamos a usar o spazo de nomes e non necesitamos usar o fullqualified
//ou podemos usar so para o

#include <iostream>
//using namespace std;//con esta declaracion indicamos que é o espazo de nomes que usamos
//asi indicamos que usamos os compoñentes dese espazo de nomes esta é a mais recomendable

//no caso de ter duas funcions iguais de distinto espazo de nomes non quedara mais
//que usar o fully qualified name
//(especulacion teño que comprobalo)
//using funciona da maneira que
//colle o que indicamos e pono no espazo de nomes global
//se é o namespace enteiro pois pono igual importantisimo!!!!!!!!!!!!!!!
//moi interesante
//se usamos todo o namespace estamos poñendo todo no global
//por iso é mais recomendable esta forma 
using std::cout;
using std::endl;
int main()
{	
	//os ambitos das funcions admiten declaracions using dentro do mesmo
	//que non seran visibles desde fora deste
	using namespace std;
	cout<< "hola mundo" << endl;		
}
