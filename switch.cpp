#include <iostream>
using namespace std;
int main()
{
	float mx,usd=0.053, eur=0.049, jpy=6.79, yuan=0.36, solpe=0.20;
	float km, in=39370.1, ft=3280.84, cm=100000, nm=1000000000000, ly=0.00000000000010570;
	float kg,ton=0.00110231, oz=35.274, lb=2.20462, ug=1000000000, Tg=10000000000;
	int op, cambio;
	char S,N;
	cout << "ingresa una opcion a realizar \n";
	cout << "1.Cambio de monedas, 2.cambio de KM 3.cambio de kG \n";
	cin >> op;
	switch (op)
	{
		case 1: cout << "a que sistema de cambio quieres realiza \n";
		cout << "1.usd 2.eur 3.jpy 4,yuan 5.solpe \n";
		cin >> cambio;
		switch (cambio)
		{
			case 1: cout << "ingresa el valor del pesos mx \n";
			cin >> mx;
			cout << "el precio convertido a USD es \n";
			cout << mx* usd;
			break;
			case 2: cout << "ingresa el valor del pesos mx \n";
			cin >> mx;
			cout << "el precio convertido a Euros es \n";
			cout << mx* eur;
			break;
			case 3: cout << "ingresa el valor del pesos mx \n";
			cin >> mx;
			cout << "el precio convertido a yenes es \n";
			cout << mx* jpy;
			break;
			case 4: cout << "ingresa el valor del pesos mx \n";
			cin >> mx;
			cout << "el precio convertido a yuan es \n";
			cout << mx* yuan;
			break;
			case 5: cout << "ingresa el valor del pesos mx \n";
			cin >> mx;
			cout << "el precio convertido a sol peruano es \n";
			cout << mx* solpe;
			break;
			
			default:
			cout << "opcion no valida ingrese de nuevo \n";
			break;
		}
		case 2: cout << "conversion de km a otro sistema de unidad \n";
		cout << "1.in 2.ft 3.cm 4.nm 5.ly \n00";
		cin >> cambio;
		switch (cambio)
		{
			case 1 : cout << "ingresa el valor de los kiometros \n";
			cin >> km;
			cout << "el valor convertido a pulgadas es \n";
			cout << km * 39370.1;
			break;
			
			case 2 : cout << "ingresa el valor de los kiometros \n";
			cin >> km;
			cout << "el valor convertido a pies es \n";
			cout << km * 3280.84;
			break;
			
			case 3 : cout << "ingresa el valor de los kiometros \n";
			cin >> km;
			cout << "el valor convertido a centimetros es \n";
			cout << km * 100000;
			break;
			
			case 4 : cout << "ingresa el valor de los kiometros \n";
			cin >> km;
			cout << "el valor convertido a nanometro es \n";
			cout << km * 1000000000000;
			break;
			
			case 5 : cout << "ingresa el valor de los años luz \n";
			cin >> km;
			cout << "el valor convertido a pulgadas es \n";
			cout << km * 0.00000000000010570;
			break;
			default :
			cout << "opcion no valida \n";
			break;
		}
		case 3: cout << "a que sistema quieres convertir los kg \n";
		cout << "1.tonelada 2.onza 3.libra 4.microgramo 5.teragramo \n";
		cin >> cambio;
		switch (cambio)
		{
			case 1 : cout << "ingresa el valor de los kg \n";
			cin >> kg;
			cout << "el valor convertido a tonelada es \n";
			cout << kg / 0.00110231;
			break;
			
			case 2 : cout << "ingresa el valor de los kg \n";
			cin >> kg;
			cout << "el valor convertido a onza es \n";
			cout << kg * 35.274;
			break;
			
			case 3 : cout << "ingresa el valor de los kg \n";
			cin >> kg;
			cout << "el valor convertido a libra es \n";
			cout << kg * 35.274;
			break;
			
			case 4 : cout << "ingresa el valor de los kg \n";
			cin >> kg;
			cout << "el valor convertido a microgramo es \n";
			cout << kg * 1000000000;
			break;
			
			case 5 : cout << "ingresa el valor de los kg \n";
			cin >> kg;
			cout << "el valor convertido a teragramos es \n";
			cout << kg / 1000000000;
			break;
			
			default:
				cout << "opcion no valida \n";
				break;
	    }
	    default :
	cout << "proximamente actualizacion xD ";
	}
	
}
