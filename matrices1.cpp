#include <iostream>
using namespace std;
int Datos[3][3];

int main(){
	int Datos[3][3];
	int n;
	int i,j,J,Suma=0;
	cout<<"Ingrese el tamaño de la matriz: "; cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"Ingrese el dato "<<i<<","<<j<<" : ";
			cin>>Datos[i][j];
		}
	}
	J=2;
	for(i=1;i<=n;i++){
		for(j=J;j<=n;j++){
			Suma=Suma+Datos[i][j];
		}
		J=J+1;
	}
	cout<<"La suma de los datos superiores de la diagonal principal son: "<<Suma<<endl;
	return 0;
}
