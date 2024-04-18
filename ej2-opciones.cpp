#include <iostream>
using namespace std ;

int main (){
    int sumaNums ;
    int promNums ;
    int num1, num2, num3, eleccion ; 

    cout<<"Escriba 3 numeros"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<"Si desea sumarlos, escriba 1. Si desea promediarlos, escriba 0"<<endl;
    cin>>eleccion ;

    if (eleccion == 1){
        sumaNums = num1 + num2 + num3 ;
        cout<<"La suma de los numeros ingresados es: "<<sumaNums<<endl;
    }
    else if (eleccion == 0){
        promNums = (num1 + num2 + num3)/3 ;
        cout<<"El promedio de los numeros ingresados es: "<<promNums<<endl;
    }
    else{
        cout<<"Incorrecto. Vuelva a ingresar solo 0 o 1"<<endl;
    }
}