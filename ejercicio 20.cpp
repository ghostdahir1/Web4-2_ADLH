#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	char NombreT[50];
	int Contrato, Categoria, turno;
	float monmen,isr,ret,quin,tot;
	float faltas, horasex, faltot, tothrs, bono, rp, prestamo,percep,deduc,pago;
    float horas,total;
	
	
	cout<<"nombre de el trabajador :"<<endl;
	cin>>NombreT;
	
	
	cout<<"Tipo de contrato"<<endl;
	cout<<"1)Por honorarios"<<endl;
	cout<<"2)Por nomina"<<endl;
	cout<<"3)Por salario. : "<<endl; 
	
	cin>> Contrato;
	
	switch (Contrato) {
		case 1 :
			 cout<<"monto mensual :";
			 cin >> monmen;
			 quin=monmen/2;
		     isr=(quin*0.16);
			 ret=(quin*0.10);
			 tot=((quin+isr)-ret);
			 cout<<"nombre empleado :"<<NombreT<<endl;
			 cout<<"importe de el proyecto :"<<monmen<<endl;
			 cout<<"su monto quincenal es :"<<quin<<endl;
			 cout<<"su isr es :"<<isr<<endl;
			 cout<<"Su rencion es de :"<<ret<<endl;
			 cout<<"Su pago total es de :"<<tot<<endl;	
		break;
		case 2:
		    cout<<"monto mensual :";
		    cin>>monmen;
		    quin=monmen/2;
		    cout<<"-¿Cuantas faltas tiene el trabajador?-"<<endl;
		    cin>>faltas;
		    cout<<"-Horas extras totales de el trabajador-"<<endl;
		    cin>> horasex;
		    ret=(quin*0.01);
			if(faltas>0){
			   	faltot=(quin/15)*1.5;
			   	faltot=faltot*faltas;
			}
			if(horasex>5){
				horasex=5;
				tothrs=(quin/15)+0.5*horasex;
			}
			if(faltas==0) {
			     bono= monmen*0.05;
			}
			cout<<"tiene un prestamo s=1/n=0 ;";
			cin>> rp;
			if(rp==1){
			    prestamo=(monmen*0.10);	
			}
			percep=(quin+tothrs+bono);
			deduc=(ret+faltot+prestamo);
			pago=percep-deduc;		 
			cout<<"Nombre trabajador :"<<NombreT<<endl;
			cout<<"Percepciones : "<<percep<<endl;
			cout<<"Deducciones : "<<deduc<<endl;
			cout<<"Pago total : "<<pago<<endl;
		break;
		case 3 : 
		    cout<<"total horas"<<endl;
		    cin>>horas;
		    cout<<"seleccione turno"<<endl;
		    cout<<"1)Diurno"<<endl;
			cout<<"2)Nocturno"<<endl;
			cout<<"3)mixto"<<endl;
			cout<<"SELECCIONE TURNO"<<endl;
		    cin >>Categoria;
			switch (Categoria) {
		    case 1 :
		        pago=(horas*72.50);
		    break;
		    case 2 :
		        pago=(horas*115.20);
		    break;
		    case 3 :
		    	pago=(horas*120.80);
		    break;
		    default:
		    	cout<<"sin pago"<<endl;
		        pago=0;
		    break;
			}
		cout<<"Nombre trabajador : "<<NombreT<<endl;
		cout<<"Turno : "<<Categoria<<endl;
		cout<<"Total de horas : "<<horas<<endl;
		cout<<"Pago de Horas laboradas :"<<pago<<endl;										 
		break;
		default:
		cout<<"Erro"<<endl;						                 
	} 
	getch();
}
	
