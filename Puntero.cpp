//Punteros
#include <iostream>
using namespace std;

main(){
	//Un puntero: apunta a una direccion de memoria.
	int edad=25, *p_edad;
	p_edad = & edad;// direccion de memoria
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<&p_edad<<endl;//Muestra la direccion de memoria
	cout<<"Puntero Edad: "<<*p_edad<<endl;//Muestra el valor en la posicion
	
	cout<<"------------------Cambiar Valores------------------"<<endl;
	
	*p_edad=40;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<&p_edad<<endl;//Muestra la direccion de memoria
	cout<<"Puntero Edad: "<<*p_edad<<endl;//Muestra el valor en la posicion
	
	cout<<"----------------Otra Variable a p_edad valores--------------------"<<endl;
	int edad2=100;
	p_edad = &edad2; 
	edad=400;
		
	cout<<"Variable Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<&p_edad<<endl;//Muestra la direccion de memoria
	cout<<"Puntero Edad: "<<*p_edad<<endl;//Muestra el valor en la posicion
	cout<<"Variable Edad2: "<<edad2<<endl;
	
	
	system ("pause");
	
}
