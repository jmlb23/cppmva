#include <iostream>
int w = 20;
int main()
{
	int a {2};
	int b {3};
	//os parenteses nas condicions non son opcionais
	//non como os bloques de codigo que as chaves si que son opcionais
	if(a==2) std::cout<< "é igual"<< std::endl;
	else std::cout<<"é disitinto"<<std::endl;
	//o while é como un for pero so ca condicion
	//ollo poque nas condicions dos bucles do while while for non evaluamos a condicion de saida se non a condicion de permanencia
	while(a<10)
	{
		std::cout<<a<<std::endl;
		a++;
	}
	for(;a<20;a++)
	{
		//coidado co ambito xa que ambito delimitano as chaves dun bloque de codigo
		//e o que definamos dentro non estara dispoñible no ambito global
		int v {1};
		std::cout<<v<<std::endl;
		std::cout<<a<<std::endl;
		//continue break e return
		//non poden devolver valores c++ non soporta bucles con etiquetas
		//break 1; non funciona
	}
	
	//std::cout<<v<<std::endl; esto non funciona xa que non esta definida no ambito actual e non podemos acceder a ambitos inferiores
	//pero si que podemos acceder a amitos superiores dende ambitos inferiores
	//en c++ non usamos global como en php para aceder o ambito superior usamos o :: para acceder a un ambito superior
	
	{
		//o ambito global é o de fora da funcion ou clase sexa cal sexa
		//se definimos neste bloque de codigo unha variable
		//e non vamos o ambito inmediatamente superior se non que vamos o global co ::
		//podemos accedelo con punteiros
		//non podemos xa que o ambito é a funcion e creamos un novo co bloque de codigo
		//e non se pode xa que so podemos acceder o global non o inmediatamente superior
		//seria un caso de shadowin ou hidding
		
		int w = 5;
		std::cout<<w<<std::endl;
		std::cout<<::w<<std::endl;
	}
}
