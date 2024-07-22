#include <iostream>
using namespace std;
int Datos[3][3];

int main(){
	int Datos[3][3];
	int n;
	int i,j;
	cout<<"Ingrese el tamaño de la matriz: "; cin>>n;
	for(i=1;i<=3*n;i++){
		for(j=1;j<=n;j++){
			if(i=1){
				Datos[i][j]=1;
			}
			else if(j=1){
				Datos[i][j]=1;
			}
			else if(j=n){
				Datos[i][j]=1;
			}
			else if(i=n){
				Datos[i][j]=1;
			}
			else{
				Datos[i][j]=0;
			}
		}
	}
	for(i=1;i<=3*n;i++){
		for(j=1;j<=n;j++){
			cout<<Datos[i][j];
		}
		cout<<endl;
	}
	return 0;
}
