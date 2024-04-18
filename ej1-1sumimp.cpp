#include <iostream>
using namespace std;

int main (){
    int n ; 
    int imp ;
    int sumaimp = 0 ;
    cout<<"Ingrese un numero natural"<<endl;
    cin>>n;

    if (n<0){
        cout<<"Vuelva a ingresar el numero"<<endl;
    }

    while(imp<n){
        imp = n-1 ;
        if (imp%2 != 0){
            sumaimp += imp ;
        }
        imp -- ;
    }

}