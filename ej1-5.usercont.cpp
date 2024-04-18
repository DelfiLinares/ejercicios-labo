#include <iostream>
using namespace std;

int main(){
    string userAlm = "anticristo666", contrAlm = "r0sslynchteamo";
    string usuario, contraseña;

    cout<<"Ingrese nombre de usuario"<<endl;
    cin>>usuario;
    cout<<"Ingrese contraseña"<<endl;
    cin>>contraseña;
    
    if (userAlm==usuario && contrAlm==contraseña){
        cout<<"La autentacion fue exitosa, el acceso ha sido concedido"<<endl;
    }
    else if (userAlm==usuario || contrAlm==contraseña){
        cout<<"Ha ingresado un dato erroneamente, no se le ha concedido el acceso"<<endl;
    }
    else{
        cout<<"Ha ingresado ambos datos erroneamente, no se le ha concedido el acceso"<<endl;
    }
}