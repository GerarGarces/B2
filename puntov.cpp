//creadopor viviana_Peciado   
#include<iostream>
using namespace std;
int main()
{
	float VAPO_x,VAPO_s=0,VAPO_vb,VAPO_piva=12,VAPO_viva,VAPO_pdesc=10,VAPO_vdesc,VAPO_vn;
	int VAPO_i=0,VAPO_l;
	cout<<"Ingrese l: ";
	cin>>VAPO_l;
	do{
		cout<<"Ingrese x: ";
		cin>>VAPO_x;
		VAPO_i=VAPO_i+1;
		VAPO_s=VAPO_s+VAPO_x; 
	}while(VAPO_i<VAPO_l);
	VAPO_vb=VAPO_s;
	VAPO_viva=VAPO_vb*VAPO_piva/100;
	VAPO_vdesc=VAPO_vb*VAPO_pdesc/100;
	VAPO_vn=VAPO_vb+VAPO_viva-VAPO_vdesc;
	cout<<"El valor a pagar es de: "<<VAPO_vn<<endl;
	return 0;
	
}
