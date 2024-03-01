#include <iostream>
using namespace std;
main(){
	char lapiz,lapicero,cuaderno;
	cout<<"trae lapiz (s/n):";
	cin>>lapiz;
	cout<<"trae lapicero (s/n):";
	cin>>lapicero;
	cout<<"trae cuaderno (s/n)";
	cin>>cuaderno;
	
	if((lapiz=='s' || lapicero=='s')&& cuaderno=='s'){
		cout<<"ingresa"<<endl;
	
	}else{
		cout<<"lo siento no puede ingresar"<<endl;
	}
	
	
	
	system("pause");
}
