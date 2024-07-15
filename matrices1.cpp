#include <iostream>
using namespace std;

int main(){
	int i,j;
	float Datos[3][3];
	float n,S=0,J=1;
	cout<<"Ingrese el tamano de la matriz: "; cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"Ingrese el dato "<<i<<","<<j<<" : ";
			cin>>Datos[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=J;j<=n;j++){
			if(i!=j){
				S=S+Datos[i][j];
			}
		}
		J=J+1;
	}
	cout<<"La sumatoria de los datos superiores a la diagonal principal es: "<<S<<endl;
	return 0;
}