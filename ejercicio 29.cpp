#include <iostream>
#include <conio.h>
using namespace std;

void entrada (float a[],int lim);
float f2 (float a[],int lim);

int main() {
    double prodA, prodB;
    double totalA = 0, totalB = 0;

    cout << "Ingrese la produccion anual (5 anios):" << endl;

    for(int i = 1; i <= 5; i++) {
        cout << "Anio " << i << " - Vino Tipo A: ";
        cin >> prodA;
        cout << "Anio " << i << " - Vino Tipo B: ";
        cin >> prodB;

        totalA += prodA; 
        totalB += prodB; 
    }

    double promedioB = totalB / 5.0;

    cout << "\nResultados:" << endl;
    cout << "a) Total vino Tipo A: " << totalA << endl;
    cout << "b) Promedio vino Tipo B: " << promedioB << endl;

    cout << "c) El vino mas producido fue: ";
    if (totalA > totalB) {
        cout << "Vino Tipo A" << endl;
    } else if (totalB > totalA) {
        cout << "Vino Tipo B" << endl;
    } else {
        cout << "Ambos se produjeron igual" << endl;
    }

   getch();
}

void entrada (float a[],int lim){
	int x
	for (x=0;x=lim;x++){
		cin>>a[x];
	}
}

float f2 (float a[],int lim){
	int x,tot=0
	for (x=0;x<lim;x++){
		tot=tot+a[x];
	}
	return tot
}
