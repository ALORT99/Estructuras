#include<iostream> 
using namespace std; 
struct Persona {
	char Nombre[20];
	int Edad;
	float Estatura;
};
int main (){
	struct Persona p1,p2;
	cout<<"Nombre: ";
	cin.getline(p1.Nombre,20,'\n');
	cout<<"Edad: "<<endl;
	cin>>p1.Edad; 
	cout<<"Estatura: "<<endl; 
	cin>>p1.Estatura;
	
	cout<<endl<<"Nombre guardado: "<<p1.Nombre<<endl; 
	cout<<endl<<"Edad guardada: "<<p1.Edad<<endl; 
	cout<<endl<<"Estatura guardada"<<p1.Estatura<<endl; 
	return 0; 
	
}

#Estructuras
