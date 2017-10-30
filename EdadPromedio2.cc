//Edad promedio a la cual se graduna los alumnos de fìsica, con cantidad de edades variables.
//Apuntadores(No crea un vector, le da lugares cualquiera a los datos en la memoria para despues invocarlos
//Joseph Edrei Moreno Cruz
//30 de octubre del 2017
#include<iostream>
using namespace std;
int main(){
size_t talla=14; //size_t es un tipo de variable
int *edad=new int [talla];
int suma=0;
for (int i=0; i<talla; i++)
{
cout<<"¿A qué edad te graduaste?"<<endl;
cin>>edad[i];
suma+=edad[i];
}
for(int j=0; j<talla; j++)
cout<<edad[j]<<",";
cout<<"La edad promedio de graduación esperada es "<<suma/talla<<endl;
delete[]edad;
return(0);
}
