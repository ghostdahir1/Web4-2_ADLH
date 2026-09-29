#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int Year = 1999;
    double paisA = 25.0;  
    double paisB = 19.9; 

    cout << "YEAR\tPais A\tPais B" << endl;
    cout << "------------------------" << endl;

    while (paisB <= paisA) {
        cout << Year << "\t" << paisA << "M\t" << paisB << "M" << endl;

        
        paisA = paisA * 1.02; 
        paisB = paisB * 1.03; 
        Year++;
    }
    
    cout << "------------------------" << endl;
    cout << "En el Year " << Year << " el Pais B (" << paisB << ") supero al Pais A (" << paisA << ")." << endl;

    getch();
}
