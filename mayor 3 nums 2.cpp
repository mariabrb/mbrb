//progrma que me lea 3 nums y me diga cual es el mayor
#include<iostream>

int main (){
    int n1,n2,n3;
    int salir;
    int mayor;
    std::cout<<"escribe el prmer numero:";
    std::cin>>n1;    
    std::cout<<"escribe el segunfo numero:";
    std::cin>>n2;    
    std::cout<<"escribe el tercer numero:";
    std::cin>>n3;
    if(n1>n2){
             if(n1>n3){
//           el mas grande es n1  
             mayor=n1;
                  }
                else{
                     mayor=n3;
//                   el mas grande es n3  
                     }  
                        
             }
   else{//n1>n2
         if(n2>n3){
              //el mas grande en n2
              mayor=n2;
              }
              else{
                   mayor=n3;
//                 el mas grande es n3  
                   }
              
    
    
}
std::cout<<"el mayor es: "<<mayor;
std::cout<<"\ntoca cualquier tecla para salir\n";
std::cin>>salir;
return 0;
}
