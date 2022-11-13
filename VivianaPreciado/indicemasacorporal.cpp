//creadopor viviana_Peciado   
#include<iostream>
using namespace std;
int main()
	{
		float imc,peso,h;
		cout<<"Ingrese el peso (Kg) : "; cin>>peso;
		cout<<"Ingrese la altura (metros) : "; cin>>h;
		imc=peso/(h*h);
		if(imc<18.5){
			cout<<"Usted tiene bajo p"<<endl;
		}
		if (imc>=18.5 && imc<24.9){
			cout<<"Usted tiene peso normal"<<endl;
		}
		if(imc>=25 && imc<26.9){
			cout<<"Usted tiene sobrepeso grado I "<<endl;
		}
		if (imc>50){
			cout<<"Usted tiene obesidad tipo iv (extrema)  "<<endl;
		}
	}
