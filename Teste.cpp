#include <iostream>

using namespace std;

int main (){
    int val;
    
    inicio:
    cout << "[1]=verde, [2]=vermelho, [3]=azul.\n";
    cin >> val;
    cout << "\n";
    

    switch (val)
    {
    case 1:
        cout << "[Verde]";
        goto inicio;
    case 2:
        cout << "[vermelho]";
        goto inicio;    
    case 3:
        cout << "[Azul]";
        goto inicio;
    default:
        cout << "Invalido.";
        goto inicio;
    }
}