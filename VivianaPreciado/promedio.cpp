//creadopor viviana_Peciado   
#include<iostream>
using namespace std;
int main()
{
	float VAPO_x,VAPO_pm;
	int VAPO_i=0,VAPO_l;
	cout<<"Ingrese l: ";
	cin>>VAPO_l;
	do{
		cout<<"Ingrese x: ";
		cin>>VAPO_x;
		VAPO_i=VAPO_i+1;
		if(VAPO_x>VAPO_pm){
			VAPO_pm=VAPO_x;
		}
	}while(VAPO_i<VAPO_l);
	cout<<"El promedio maximo de el curso fue: "<<VAPO_pm<<endl<<endl;
	return 0;
}
