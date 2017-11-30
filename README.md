//vectores
#include<iostream>
using namespace std;

int main(){
 int vect1[5];
 int vect2[5];
 int vect_t[5];   
 int salir;
//  rellenamos los vectores
for(int cont=0;cont<5;cont++){
    cout<<"vect["<<cont<<"]";
    cin>>vect1[cont];
}
 
cout<<"presiona pa salir y luego enter";                     
cin>>salir;
return 0;
}                 
                   
