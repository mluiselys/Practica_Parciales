#include "cCajero.h"
int cCajero::counter = 0;
cCajero::cCajero(const int id, float Saldo, cTarjeta* Card): ID(id)
{
	this->Saldo = Saldo;
	this->tarjeta = Card;
	counter++;
}

cCajero::cCajero(int Saldo):ID(counter++)
{
	this->Saldo = Saldo;
}

cCajero::~cCajero()
{
}

cTarjeta* cCajero::Menu(cTarjeta* tarjeta)
{
	int opcion = 0;
	system("cls");
	cout << "---------MENU--------\n" << endl;
	cout << "1. Depositar\n" << endl;
	cout << "2. Extraer\n" << endl;
	cout << "3. Consultar Saldo\n" << endl;
	cout << "4. Salir\n" << endl;

	cin >> opcion;
	switch (opcion)
	{
	case 1:
		if (IntroTarjeta(tarjeta))
		{
			Depositar();
			Operaciones++;
		}
		system("pause");
		Menu(tarjeta);
		break;
	
	case 2:
	
		if (IntroTarjeta(tarjeta))
		{
			try {
				Extraer();
			}
			catch (exception* ex)
			{ cout << ex->what() << endl; delete ex; }
			Operaciones++;
		}
		system("pause");
		Menu(tarjeta);
		break;
	case 3:
		if (IntroTarjeta(tarjeta))
		{
			ConsultarSaldo();
			Operaciones++;
		}
		system("pause");
		Menu(tarjeta);
		break;
	default:
		tarjeta = DevTarjeta();
		system("pause");
		break;
	}
	return tarjeta;
}

void cCajero::ConsultarSaldo() const
{
	cout << "Saldo actual: " << tarjeta->getSaldo() << endl;
}

void cCajero::Depositar()
{
	float monto = 0.0;
	cout << "ingrese el monto a depositar: " << endl;
	cin >> monto;
	tarjeta->setSaldo(tarjeta->getSaldo() + monto);
}
