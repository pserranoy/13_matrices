#include <iostream>
using namespace std;
int Datos[3][3];

int main(){
	int Datos[3][3];
	int pmayor,rmayor=0;
	int Votos[5];//Mayor numero de votos nacional
	int n,m,vmayor,cmayor[5];//Las ciudades con votos ganadores
	int i,j,cm,vm;
	cout<<"Ingrese cuantos partidos politicos participaran: "; cin>>n;
	cout<<"Ingrese en cuantas ciudades se desarrollara: "; cin>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cout<<"Ingrese los votos del "<<i<<" partido politico en la "<<j<<"° ciudad: "; cin>>Datos[i][j];
		}
	}
	vmayor=0;
	for(i=1;i<=n;i++){
		Votos[i]=0;
		for(j=1;j<=m;j++){
			Votos[i]=Votos[i]+Datos[i][j];
			}
		if(Votos[i]>vmayor){
			vmayor=Votos[i];
			vm=i;
		}
	}
	for(i=1;i<=n;i++){
		cmayor[i]=0;
		for(j=1;j<=m;j++){
			if(Datos[i][j]>cmayor[j]){
				cmayor[j]=Datos[i][j];
				cm=i;
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i=vm){
				if(rmayor<cmayor[j]){
					rmayor=cmayor[j];
				    pmayor=j;
			    }
			}
			
		}
	}
	cout<<"El partido que gano a nivel nacional fue: El partido "<<vm<<endl;
	for(j=1;j<=m;j++){
		cout<<"El partido ganador de la ciudad "<<j<<" fue: El partido "<<cm<<endl;	
		}
	
	cout<<"El partido con mayor votacion fue en la ciudad: "<<pmayor<<endl;
	return 0;
}
