#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	char nombre[30];
	char cedula[10];
	double plasolat=0;
	double palocar=0;
	double vidrio=0;
	double puntos;
	
	cout<< "\n Bienvenido querido usuario \n"<<endl;
	cout<< "Ingrese su nombre: ";
	cin>> nombre;
	cout<< "Ingrese su numero de cedula: ";
	cin>> cedula;
	cout<< "\n Hola " << nombre << endl;
	
	while(true){
		
		int material=0;
		double kilosmaterial=0;
		
		while(true){
			cout<< "\n¿Que desea reciclar el dia de hoy?\n(Plastico o Latas - 1)\n(Papel o Carton - 2)\n(Vidrio - 3)\n ";
			cin>> material;
			if(material>= 1 && material <= 3) break;
				else cout << "Material no valido, favor de ingresar un valor entre 1 y 3.\n" << endl;
		}
		while(true){
			cout<< "¿Cuantos kilos de material va a reciclar?\n ";
			cin>> kilosmaterial;
			if(kilosmaterial> 0) break;
				else cout << "No puedes ingresar una cantidad menor a 0, favor ingresar un valor mayor\n" << endl;
		}
		
		switch(material){
			//100 me parece muy bien como una base de puntos con algunos ceros asi se veran como mas puntos a que si se dieran de 1 en 1
			case 1: plasolat=plasolat+kilosmaterial;
					puntos=puntos+(kilosmaterial*100);break;
			case 2: palocar=palocar+kilosmaterial;
					puntos=puntos+(kilosmaterial*100);break;
			case 3: vidrio=vidrio+kilosmaterial;
					//El vidrio tendra 50 puntos mas que los otros por ser un material menos reciclado que el resto, asi dara mas incentivo a reciclarlo
					puntos=puntos+(kilosmaterial*150);break;
		}
		char Continuar;
        cout << "\n¿Desea ingresar mas material? (s/n): ";
        cin >> Continuar;
        if (Continuar != 's' && Continuar != 'S') break;
		}
		
		cout << "\n\t >Comprobante:\n" << endl;   		
		cout << "Nombre: " << nombre << endl;
    	cout << "Cedula: " << cedula << endl;
		cout << "Cuantos kilos de plastico y latas: " << plasolat << endl;
    	cout << "Cuantos kilos de papel y carton: " << palocar << endl;
    	cout << "Cuantos kilos de vidrio: " << vidrio << endl;
    	cout << "Puntos recibidos: " << puntos << endl;
    	cout << "\n\tFavor presentar su comprobante en nuestra sucursal mas cercana a ud\n\tpara reclamar sus puntos oficilamente\n\n\tMuchas Gracias por usar nuestra app :)\n\tRecuerda siempre cuidar el medio ambiente";
	
	return 0;
}
