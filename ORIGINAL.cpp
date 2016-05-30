#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;
	float n=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, nt=0;
	string no;
	string a;

	cout<< "Bienvenido al Sistema de Notas 1.0" <<endl;

	while(i<=4)
	{
	i++;	
    cout <<"Ingresar Nombre"<<endl;
    cin >> no;
    cout <<"Ingregar su Apellido"<<endl;
    cin >> a;

    cout <<" Ingresar Notas de Base a 20pts"<<endl;  
    cout <<" Ingresar Nota 1"<<endl;
    cin >> n1;
    n1 = n1*0.10;
    
     cout <<" Ingresar Nota 2"<<endl;
    cin >> n2;
    n2 = n2*0.20;
    
     cout <<" Ingresar Nota 3"<<endl;
    cin >> n3;
    n3 = n3*0.15;
    
     cout <<" Ingresar Nota 4"<<endl;
    cin >> n4;
    n4 = n4*0.15;

     cout <<" Ingresar Nota 5"<<endl;
    cin >> n5;
    n5 = n5*0.20;

    cout <<" Ingresar Nota 6"<<endl;
    cin >> n6;
    n6 = n6*0.20;
    
    nt = n1+n2+n3+n4+n5+n6; 
    cout << "El Promedio del Estudiante es : "<< nt <<endl;
    system ("pause");
    

	}
}
