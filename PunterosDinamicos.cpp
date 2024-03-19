//Punteros Dinámicos
#include <iostream>
using namespace std;

//Punteros con asignacion de memoria dinamica;
//new= reservar un espacio en memoria
//delete [] = liberar la memoria
//rescolector de basura

main(){
	/*
	int edad,*p_edad;
	p_edad = &edad;
	cout<<"Ingrese edad: ";
	cin>>*p_edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}
	*/
	
	/*
	int total=0;
	int notas[total];
	char res;
	
	do{
		cout<<"Ingrese nota"<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	} while(res=='s'|| res=='S');
	
	
	cout<<"------------------Mostrar notas-----------------"<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota("<<i<<"): "<<notas[i]<<endl;
	}
	*/
	
	/*
	int total=0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"Ingrese nota"<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	} while(res=='s'|| res=='S');
	
	
	cout<<"------------------Mostrar notas-----------------"<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota("<<i<<"): "<<*p_notas<<endl;//muestra los valores del puntero
		p_notas++; //para que pase a la memoria siguiente.
	}
	*/
	
	/*
	int total = 0, *p_notas;
	p_notas = new int [total];
	char res;
	
	do{
		cout<<"Ingrese nota"<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	} while(res=='s'|| res=='S');
	
	
	cout<<"------------------Mostrar notas-----------------"<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota("<<i<<"): "<<*p_notas<<endl;//muestra los valores del puntero
		p_notas++; //para que pase a la memoria siguiente.
	}
	
	delete[]p_notas;
	*/
	
	int fil = 0, col = 0, **pm_notas;
	cout<<"Ingrese la cantidad de estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de Notas por estudiantes: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"_______________Estudiante__________________"<<i<<endl;
		for(int ii=0;ii<col;ii++){
		    cout<<"Nota: "<<ii<<" : ";
		    cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_________________________________________"<<endl;
	}
	
	cout<<"-----------------Mostrar notas------------------"<<endl;
	for (int i=0;i<fil;i++){
		
		for(int ii=0;ii<col;ii++){
		    cout<<*(*(pm_notas+i)+ii)<<endl;
		}
	cout<<"________________________________________________"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;

	system ("pause");
}
