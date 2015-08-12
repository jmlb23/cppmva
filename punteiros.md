#os punteiros en cpp#

temos que ter en conta que os punterios non son sinonimo de referencias se non que son os que conteñen as mesmas,
se as referencias son distintas formas de chamar a unha variable
ie:
	int a {2};
	int& b {a};
os punteiros non son mais que alias a mesma referencia int* v = &a se usamos v danos o mesmo que &a os punteiros conteñen
a direccion de memoria do comezo do espazo onde esta contida a variable e espandese o que ocupe a mesma

	&a a referencia que se garda no punteiro ten o comezo do espazo de memoria
	||
	\/
	aaaaaaaaaaaaaaaaaaaaaaa
	a                     a
	a        a=58         a
	aaaaaaaaaaaaaaaaaaaaaaa

##deferenciando

para ver o contido da direccion de memoria dun punteiro usamos o operador de deferencia *
*v
os punteiros en contraste coa asignacion por referencia non ten porque ser inicilizada

unha variable dise que é de un punteiro de tipo x por convencion
para asignar un punteiro a unha direccion podemos facelo todo nunha ringleira 
como vimos antes ou sen o operador de deferencia "v = &a" colle esta referecia 
e garda no punteir, para indicar que non apunta a ningun lado usamos nullptr
