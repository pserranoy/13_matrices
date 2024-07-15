#include <iostream>
using namespace std;

int main(){
	int i,j;
	float Datos[3][3];
	float n,S=0;
	cout<<"Ingrese el tamano de la matriz: "; cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"Ingrese el dato "<<i<<","<<j<<" : ";
			cin>>Datos[i][j];
		}
    }
    i=3;
    while(i!=0){
    	for(j=1;j<=n;j++){
    		S=S+Datos[i][j];
		}
		i=i-1;
	}
	cout<<"La sumatoria de los datos de la diagonal secundaria es: "<<S<<endl;
	return 0;
}