


#include <iostream>
#include <cstdlib>
#include <math.h>
#define costo 30000
/* la caja de compensacion comfamiliar risaralda requiere sistematizar los pagos de auxilios a sus
afiliados por hijos los cuales reconoce 30,000.*/ 
using namespace std;
int main(int argc, char** argv) {
	system("color f0");
	int hijo,auxilio;
	char respuesta;
	cout<<endl<<endl;
	do{system("cls");
    cout<<"\t\t**************************************************************"<<endl;
    cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
	cout<<"\t\t   liquidacion axulio por hijos     "<<endl;
	cout<<"\t\t   caja de compesacion familiar     "<<endl;
	cout<<"\t\t        su  caja  amiga             "<<endl;
    cout<<"\t\t**************************************************************"<<endl;
    cout<<"\t\t    ingrese en numero de hijos      "<<endl;
    cin>>hijo;
    system("cls");
    if(hijo>0)
    {
    switch(hijo)
    { case 1:cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
            cout<<"\t\t    caja de compesacion familiar     "<<endl;
           	cout<<"\t\t          su  caja  amiga            "<<endl;
	        auxilio=hijo*costo;
			cout<<" valor de auxilio :"<<auxilio<<"mcts"<<endl;
			system("pause"); 
			break; 
	case 2:cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
            cout<<"\t\t    caja de compesacion familiar     "<<endl;
           	cout<<"\t\t          su  caja  amiga            "<<endl;
	        auxilio=hijo*costo;
			cout<<" valor de auxilio :"<<auxilio<<"mcts"<<endl;
			system("pause"); 
			break;
	case 3:cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
            cout<<"\t\t    caja de compesacion familiar     "<<endl;
           	cout<<"\t\t          su  caja  amiga            "<<endl;
	        auxilio=hijo*costo;
			cout<<" valor de auxilio :"<<auxilio<<"mcts"<<endl;
			system("pause"); 
			break; 
	case 4:cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
            cout<<"\t\t    caja de compesacion familiar   "<<endl;
           	cout<<"\t\t          su  caja  amiga          "<<endl;
	        auxilio=hijo*costo;
			cout<<" valor de auxilio :"<<auxilio<<"mcts"<<endl;
			system("pause"); 
			break;
	case 5:cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
            cout<<"\t\t    caja de compesacion familiar     "<<endl;
           	cout<<"\t\t          su  caja  amiga            "<<endl;
	        auxilio=hijo*costo;
			cout<<" valor de auxilio :"<<auxilio<<"mcts"<<endl;
			system("pause"); 
			break;
default:cout<<"\t\t    caja comfamiliar risaralda      "<<endl;
            cout<<"\t\t    caja de compesacion familiar     "<<endl;
           	cout<<"\t\t          su  caja  amiga            "<<endl;
	        auxilio=6*costo;
			cout<<" valor de auxilio :"<<auxilio<<"mcts"<<endl;
			system("pause"); 
			break;}
			
	}
   else
   {
   cout<<" usted no recibio axulio imprime certificado"<<endl;
   }
cout<<"liquidar otro auxilio s/n ? ";
cin>>respuesta;

}while(respuesta == 's');

system("pause"); 
return 0;
}
