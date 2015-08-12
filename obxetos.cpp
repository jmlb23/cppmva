/*int x{1}; //inicializacion
int y{x}; //copia do valor de x en y
//por defecto c++ e unha linguaxe por copia
y=x; //diferente da copia xa que incializa o valor con x e este cambia o valor que tivera por x
//os obxetos permiten crear novos tipos que teñen un comportamento que representan os metodos e un estado que representan os atributos
//as clases son a abstraccion xeneral do obxeto o conxunto
//o obxeto e a concrecion coas caracteristicas propias do mesmo
// exemplo
// unha persoa ten altura nome e anda e fala esta é a clase é unha plantilla xenerica
//o obxeto seria xose que mide 1.80 e anda cunha velocidade de 5k/h e fala pouco

//exemplo de mva

*/

class Rectangle
{
public:
	//a clase define unha plantilla todo rectangulo ten altura e ancho
	//e un obxeto tera uns en concret
	//a clase define unha plantilla todo rectangulo ten altura e ancho
	//e un obxeto tera uns en concretoo
	//os obxetos en c++ teñen contructor por defecto que xenera o compilador
	//se non se inicializan os atributos nas clases non pasa como en java que se incializan
	//por defecto aqui non o fan o mesmo que no ambito das funcions
	//non é como en java que nas clases ten un valor por defecto e nas funcions non
	int _ancho;
	int _alto;
};//por razons de legacy ten que rematar cun punto e coma depois da chave a definicion da clase

//en c++ as variables locales non son incializadas por defecto igual que en  java 
void d(){
	int a;//se non a inicializamos non ten valor non se incializa por defecto
	//non é recomendado porque a hora de usalo vai ter basura por defecto o que haxa nesa direccion de memoria incializar sempre
	Rectangle r1{1,2};//debe inicilizar os atributos inda que non haxa constructor este tipo de inicializacion
	//podese levar a acabo https://www.informit.com/guides/content.aspx?g=cplusplus&seqNum=484
	//An aggregate is defined in the C++ standard as an array, or a class with no user-provided constructors, no private or protected data members, no base classes, and no virtual function este tipo de inicializacion
	//podese levar a acabo https://www.informit.com/guides/content.aspx?g=cplusplus&seqNum=484
	//An aggregate is defined in the C++ standard as an array, or a class with no user-provided constructors, no private or protected data members, no base classes, and no virtual functions
	//cos obxetos é igual se non se inicializa ten basura
	//Rectangle r1(1,2);//non funciona sen constructor definido
}
//un obxeto instanciado é moi interesante porque permite agrupar e encapsular baixo unha mesma estructura variables funcions etc
