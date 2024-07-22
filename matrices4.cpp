#include <iostream>
using namespace std;
int Datos[3][3];

int main(){
	float Datos[3][3];
	float Vtotal=0;
	int i,j;
	float SEM[10];
	for(i=1;i<=4;i++){
		for(j=1;j<=7;j++){
			cout<<"Ingrese la "<<i<<" venta semanal del dia "<<j<<" : "; cin>>Datos[i][j];
		}
	}
	for(i=1;i<=4;i++){
		SEM[i]=0;
		for(j=1;j<=7;j++){
			SEM[i]=SEM[i]+Datos[i][j];
		}
	}
	for(i=1;i<=4;i++){
		Vtotal=Vtotal+SEM[i];
	}
	cout<<"Ventas de cuatro semanas"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"      SEM1      SEM2      SEM3      SEM4"<<endl;
	for(j=1;j<=7;j++){
		for(i=1;i<=4;i++){
			cout<<"     "<<Datos[i][j]<<"    ";
		}
		cout<<endl;
	}
	cout<<"-----------------------------------------"<<endl;
	for(i=1;i<=4;i++){
		cout<<"     "<<SEM[i]<<"    ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Venta total del mes:      "<<Vtotal;
	return 0;
}
