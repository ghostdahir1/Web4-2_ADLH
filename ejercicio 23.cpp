#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int nu, r;
    double t1 = 0, t2 = 0, t = 0; 

    cout << "Hasta que numero (#): ";
    cin >> nu;

    for (int x = 1; x <= nu; x++) {
        r = x % 2;

        if (r == 0) {
            t1 = t1 + (1.0 / x); 
            cout << "- 1/" << x << " ";
        } else {
            t2 = t2 + (1.0 / x);
            if(x > 1) cout << "+ "; 
            cout << "1/" << x << " ";
        }
    }

    t = t2 - t1;
    
    cout << "\nResultado t: " << t << endl;
    cout << "FIN" << endl;
    getch();
}

