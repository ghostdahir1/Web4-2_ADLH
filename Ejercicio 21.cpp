#include <iostream>
using namespace std;

int main() {
    int nu, r;

    cout << "Ingrese el numero limite: ";
    cin >> nu;

    cout << "Numeros pares:" << endl;
    
    for (int x = 1; x <= nu; x++) {
        r = x % 2; 
        
        if (r == 0) { 
            cout << x << ", ";
        }
    }
    
    cout << "\nFIN" << endl;
    return 0;
}
