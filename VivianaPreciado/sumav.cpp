#include<iostream>
 using namespace std;                                                                                                 //creadopor viviana_Peciado   

int main()

  {
float  VAPO_x, VAPO_s=0.0;

int  VAPO_i=0, VAPO_l;

cout<<"Ingrese el valor de  VAPO_l: ";                                                                                                                                            cin>> VAPO_l;                                                      
do{

cout<<"Ingrese el valor de  VAPO_x: ";

cin>> VAPO_x;

 VAPO_i= VAPO_i+1;

 VAPO_s= VAPO_s+ VAPO_x;

}while( VAPO_i< VAPO_l);                                            
cout<<"La suma de los número fue: "<<VAPO_s<<endl;

return 0;

}
