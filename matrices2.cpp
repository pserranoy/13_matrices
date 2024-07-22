#include <iostream>
using namespace std;
int Datos[3][3];

int main(){
	int Datos[3][3];
	int n;
	int i,j,Suma=0;
	cout<<"Ingrese el tamaño de la matriz: "; cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"Ingrese el dato "<<i<<","<<j<<" : ";
			cin>>Datos[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=n-i-1;j<=n;j++){
			Suma=Suma+Datos[i][j];
		}
	}
	cout<<"La suma de los datos de la diagonal secundaria son: "<<Suma<<endl;
	return 0;
}
