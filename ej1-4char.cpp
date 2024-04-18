#include <iostream>
using namespace std;

int main(){
    string word ;
    int num ; 

    cout<<"Ingrese palabra"<<endl;
    cin>>word;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;

    int largow ;
    largow = word.size();
    int pos=largow-1;
    string nuevaWord ; 

    while(pos>=(largow-num)){
        nuevaWord = word[pos]+num ; 
        pos -- ;
    }

    cout<<nuevaWord<<endl;
}
