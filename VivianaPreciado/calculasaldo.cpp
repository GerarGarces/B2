//creadopor viviana_Peciado   
#include <iostream>
using namespace std;
int main  ()
{
	float VAPO_x,VAPO_s= 0 ;
	int VAPO_i= 0 ,VAPO_l;
	cout<< " Ingrese cantidad de egrasos (1) : " ;
	cin>>VAPO_l;
	cout<< " Ingrese el saldo inicial (s) : " ;
	cin>>VAPO_s;
	do {
		cout<< " Ingreso egreso (x) : " ;
		cin>>VAPO_x;
		VAPO_i=VAPO_i+ 1 ;
		VAPO_s=VAPO_s+VAPO_x;
	} while (VAPO_i<VAPO_l);
	cout<< " El saldo final es: " <<VAPO_s<<endl;
	return  0 ;

}
