//Edad promedio a la cual se graduna los alumnos de fìsica.
//Joseph Edrei Moreno Cruz
//30 de octubre del 2017
#include<iostream>
using namespace std;
int main(){
int edad[14];
int suma=0;
for (int i=0; i<14; i++)
{
cout<<"¿A qué edad te graduaste?"<<endl;
cin>>edad[i];
suma+=edad[i];
}
for(int j=0; j<14; j++)
cout<<edad[j]<<",";
cout<<"La edad promedio de graduación esperada es "<<suma/14<<endl;
return(0);
}
