#include<iostream>
#include<windows.h>
using namespace std;
//variables
float catedras = 0;
int faltas = 0;
int total = 0;
float asistencia = 0;
int nuevo = 0;
int opcion = 0;
int main()
{
	SetConsoleTitle("Organibot_idea");
	
	do{
		cout<<"IDEA DE ORGANIBOT"<<endl;
	cout<<"Por favor ingrese el numero total de catedras de su ramo: "<<endl;
	cin>>catedras;
	cout<<"Ingrese el porcentaje minimo de asistencias(0.0 - 100.0): "<<endl;
	cin>>asistencia;
	system("cls");
	//proceso
	total = ((asistencia)/100)*catedras;
	faltas = catedras-(((asistencia)/100)*catedras);
	cout<<"Usted debe asistir a "<<total<<" clases"<<endl;
	cout<<"Usted puede faltar a "<<faltas<<" clases"<<endl;
	system("pause");
	system("cls");
	
	//Determinar casos
	do{
		cout<<"Ingrese a cuantas catedras a faltado: "<<endl;
	    cin>>nuevo;
	}while(nuevo<0||nuevo>catedras);
	if(nuevo>faltas)
	{
		cout<<"Usted ha reprobado el ramo"<<endl;
		system("pause");
	}
	else if(nuevo==0)
	{
		cout<<"Pero que correcto usted senor, siga asi por favor."<<endl;
		system("pause");
	}
	else if(nuevo==(faltas-1))
	{
		cout<<"NO FALTES MAS. TE QUEDA SOLO UNA CLASE. "<<endl;
		system("pause");
	}
	else if(nuevo<(faltas/2))
	{
		cout<<"Tenga cuidado que esta cercano al 50% de faltas posibles"<<endl;
		system("pause");
	}
	else if(nuevo>(faltas/2))
	{
		cout<<"Preocupese por que lleva mas del 50% de faltas posibles"<<endl;
		system("pause");
	}
	cout<<"Desea realizar otra consulta? (1) Si (2) No "<<endl;
	cin>>opcion;
	system("cls");
	}while(opcion==1);
	
	cout<<"...Programa finalizado..."<<endl;
	system("pause");
	
	
	return 0;
	
}
