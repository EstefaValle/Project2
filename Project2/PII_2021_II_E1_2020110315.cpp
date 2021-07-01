#include <iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<Windows.h> 
#include<clocale> 
#include <exception>


using namespace std;

int visitaCine_Mayor(int visitaCine_OpCont[4]) {
	int visitaMayor;
	int frecuenciaMayor;

	if (visitaCine_OpCont[0] > visitaCine_OpCont[1] && visitaCine_OpCont[0] > visitaCine_OpCont[2] && visitaCine_OpCont[0] > visitaCine_OpCont[3])
	{
		visitaMayor = visitaCine_OpCont[0];
		frecuenciaMayor = 1;
	}
	else if (visitaCine_OpCont[1] > visitaCine_OpCont[2] && visitaCine_OpCont[1] > visitaCine_OpCont[3])
	{
		visitaMayor = visitaCine_OpCont[1];
		frecuenciaMayor = 2;
	}
	else if (visitaCine_OpCont[2] > visitaCine_OpCont[3])
	{
		visitaMayor = visitaCine_OpCont[2];
		frecuenciaMayor = 3;
	}
	else
	{
		visitaMayor = visitaCine_OpCont[3];
		frecuenciaMayor = 4;
	}

	return frecuenciaMayor;
}
int generoCine_Mayor(int generoCine_OpCont[5]) {
	int Mayor;
	int generoMayor;

	if (generoCine_OpCont[0] > generoCine_OpCont[1] && generoCine_OpCont[0] > generoCine_OpCont[2] && generoCine_OpCont[0] > generoCine_OpCont[3] && generoCine_OpCont[0] > generoCine_OpCont[4])
	{
		Mayor = generoCine_OpCont[0];
		generoMayor = 1;
	}
	else if (generoCine_OpCont[1] > generoCine_OpCont[2] && generoCine_OpCont[1] > generoCine_OpCont[3] && generoCine_OpCont[1] > generoCine_OpCont[4])
	{
		Mayor = generoCine_OpCont[1];
		generoMayor = 2;
	}
	else if (generoCine_OpCont[2] > generoCine_OpCont[3] && generoCine_OpCont[2] > generoCine_OpCont[4])
	{
		Mayor = generoCine_OpCont[2];
		generoMayor = 3;
	}

	else if (generoCine_OpCont[3] > generoCine_OpCont[4])
	{
		Mayor = generoCine_OpCont[3];
		generoMayor = 4;
	}
	else
	{
		Mayor = generoCine_OpCont[4];
		generoMayor = 5;
	}

	return generoMayor;
}
int acompananteCine_Mayor(int acompCine_OpCont[4]) {
	int MayorAc;
	int acomMayor;

	if (acompCine_OpCont[0] > acompCine_OpCont[1] && acompCine_OpCont[0] > acompCine_OpCont[2] && acompCine_OpCont[0] > acompCine_OpCont[3])
	{
		MayorAc = acompCine_OpCont[0];
		acomMayor = 1;
	}
	else if (acompCine_OpCont[1] > acompCine_OpCont[2] && acompCine_OpCont[1] > acompCine_OpCont[3])
	{
		MayorAc = acompCine_OpCont[1];
		acomMayor = 2;
	}
	else if (acompCine_OpCont[2] > acompCine_OpCont[3])
	{
		MayorAc = acompCine_OpCont[2];
		acomMayor = 3;
	}
	else
	{
		MayorAc = acompCine_OpCont[3];
		acomMayor = 4;
	}

	return acomMayor;
}
int compraBoletosCine_Mayor(int compraBoletos_OpCont[3]) {
	int Mayorbol;
	int boletoMayor;

	if (compraBoletos_OpCont[0] > compraBoletos_OpCont[1] && compraBoletos_OpCont[0] > compraBoletos_OpCont[2])
	{
		Mayorbol = compraBoletos_OpCont[0];
		boletoMayor = 1;
	}
	else if (compraBoletos_OpCont[1] > compraBoletos_OpCont[2])
	{
		Mayorbol = compraBoletos_OpCont[1];
		boletoMayor = 2;
	}

	else
	{
		Mayorbol = compraBoletos_OpCont[2];
		boletoMayor = 3;
	}

	return boletoMayor;
}
int CompraProductosCine_Mayor(int compraproductos_OpCont[4]) {
	int mayorProd;
	int prodMayor;

	if (compraproductos_OpCont[0] > compraproductos_OpCont[1] && compraproductos_OpCont[0] > compraproductos_OpCont[2] && compraproductos_OpCont[0] > compraproductos_OpCont[3])
	{
		mayorProd = compraproductos_OpCont[0];
		prodMayor = 1;
	}
	else if (compraproductos_OpCont[1] > compraproductos_OpCont[2] && compraproductos_OpCont[1] > compraproductos_OpCont[3])
	{
		mayorProd = compraproductos_OpCont[1];
		prodMayor = 2;
	}
	else if (compraproductos_OpCont[2] > compraproductos_OpCont[3])
	{
		mayorProd = compraproductos_OpCont[2];
		prodMayor = 3;
	}
	else
	{
		mayorProd = compraproductos_OpCont[3];
		prodMayor = 4;
	}

	return prodMayor;
}


int main() {
	setlocale(LC_ALL, "Spanish");
	SetConsoleCP(1252);

	char resp;
	string noGustaCine;
	int encuestadosCont = 0;

	int visitaCine = 0;
	int visitaCine_OpCont[4];

	int generoCine = 0;
	int generoCine_OpCont[5];

	int acompCine = 0;
	int acompCine_OpCont[4];

	int compraBoletos = 0;
	int compraBoletos_OpCont[3];

	int compraproductos = 0;
	int compraproductos_OpCont[4];
	const int PORCENTAJE = 100;
	int i;
	for (i = 0; i < 4; i++) {
		visitaCine_OpCont[i] = 0;
	}

	for (i = 0; i < 5; i++) {
		generoCine_OpCont[i] = 0;
	}

	for (i = 0; i < 4; i++) {
		acompCine_OpCont[i] = 0;
	}

	for (i = 0; i < 3; i++) {
		compraBoletos_OpCont[i] = 0;
	}

	for (i = 0; i < 4; i++) {
		compraproductos_OpCont[i] = 0;
	}
	cout << "------------------ Bienvenido a Cinemark ------------------------" << endl;
	cout << "-- Por favor, ayudenos a contestar las siguientes preguntas --" << endl;
	cout << endl;

	do
	{

		do
		{
			try {

				cout << endl;
				cout << " ¿Con qué frecuencia visita el cine?: " << endl << endl;
				cout << "	* 1 -----------> 1 a 2 veces al año" << endl;
				cout << "	* 2 -----------> 3 a 5 veces al año" << endl;
				cout << "	* 3 -----------> Más de 6 veces al año" << endl;
				cout << "	* 4 -----------> Nunca" << endl;

				cin >> visitaCine;
				if (visitaCine != 1 && visitaCine != 2 && visitaCine != 3 && visitaCine != 4) {
					throw "Valor invalido, por favor ingrese un valor valido";
				}
				switch (visitaCine) {
				case 1:
					visitaCine_OpCont[0]++;
					break;
				case 2:
					visitaCine_OpCont[1]++;
					break;
				case 3:
					visitaCine_OpCont[2]++;
					break;
				case 4:
					visitaCine_OpCont[3]++;
					cout << "Su opinión es muy importante, ¿Puede decirnos la razón?" << endl;
					getline(cin, noGustaCine);
					cin.ignore();

					system("cls");
					cout << endl << endl;
					cout << "¡Gracias por su respueta! Hasta pronto " << endl << endl;


					system("Pause");
					return 0;


				default:


					break;
				}
			}
			catch (const char* msg)
			{
				cerr << "Error : " << msg << endl;
			}

			system("Pause");
			system("cls");

		} while (visitaCine > 4 || visitaCine < 1);

		do
		{
			cout << endl << endl;
			cout << " ¿Cual es su genero de cine favorito? " << endl << endl;
			cout << "	* 1 -----------> Aventura" << endl;
			cout << "	* 2 -----------> Acción" << endl;
			cout << "	* 3 -----------> Supenso / terror" << endl;
			cout << "	* 4 -----------> Drama" << endl;
			cout << "	* 5 -----------> Comedia" << endl;

			cin >> generoCine;
			cout << endl << endl;
			switch (generoCine) {

			case 1:
				generoCine_OpCont[0]++;
				break;

			case 2:
				generoCine_OpCont[1]++;
				break;

			case 3:
				generoCine_OpCont[2]++;
				break;

			case 4:
				generoCine_OpCont[3]++;
				break;

			case 5:
				generoCine_OpCont[4]++;
				break;

			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (generoCine > 5 || generoCine < 1);


		do
		{
			cout << endl;
			cout << " Cuando visita el cine ¿Cuántas personas lo acompañan? " << endl << endl;
			cout << "	* 1 -----------> 1 persona" << endl;
			cout << "	* 2 -----------> 2 persona " << endl;
			cout << "	* 3 -----------> 3 o más" << endl;
			cout << "	* 4 -----------> Voy solo" << endl;


			cin >> acompCine;
			cout << endl << endl;
			switch (acompCine) {

			case 1:
				acompCine_OpCont[0]++;
				break;

			case 2:
				acompCine_OpCont[1]++;
				break;

			case 3:
				acompCine_OpCont[2]++;
				break;

			case 4:
				acompCine_OpCont[3]++;
				break;

			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (acompCine > 4 || acompCine < 1);

		do
		{
			cout << endl << endl;
			cout << " ¿Dónde compra sus boletos? " << endl << endl;
			cout << "	* 1 -----------> Taquilla del Cine" << endl;
			cout << "	* 2 -----------> Online " << endl;
			cout << "	* 3 -----------> Otro" << endl;

			cin >> compraBoletos;
			cout << endl << endl;
			switch (compraBoletos) {

			case 1:
				compraBoletos_OpCont[0]++;
				break;

			case 2:
				compraBoletos_OpCont[1]++;
				break;

			case 3:
				compraBoletos_OpCont[2]++;
				break;


			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (compraBoletos > 3 || compraBoletos < 1);

		do
		{
			cout << endl << endl;
			cout << " Aproximadamente ¿Cuanto gasta en le cosumo de alimentos y bebidas?" << endl << endl;
			cout << "	* 1 -----------> Menos de 150 lempiras" << endl;
			cout << "	* 2 -----------> Entre 150 y 300 lempiras" << endl;
			cout << "	* 3 -----------> Entre 300 y 500 lempiras" << endl;
			cout << "	* 4 -----------> Más de 500 lempiras" << endl;

			cin >> compraproductos;
			cout << endl << endl;
			switch (compraproductos) {

			case 1:
				compraproductos_OpCont[0]++;
				break;

			case 2:
				compraproductos_OpCont[1]++;
				break;

			case 3:
				compraproductos_OpCont[2]++;
				break;

			case 4:
				compraproductos_OpCont[3]++;
				break;


			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (compraproductos > 4 || compraproductos < 1);

		encuestadosCont++;

		cout << " ¿Desea llenar otra encuesta?, (S=Si / N=No)" << endl;
		cin >> resp;
		system("cls");

	} while (resp == 'S' || resp == 's');



	cout << endl << endl;



	string frecuenciaTitulo;
	int frecuencia;

	int visita;




	frecuencia = visitaCine_Mayor(visitaCine_OpCont);


	if (frecuencia == 1)
	{
		frecuenciaTitulo = "1 a 2 veces al año";
		visita = visitaCine_OpCont[0];
	}
	else if (frecuencia == 2)
	{
		frecuenciaTitulo = "3 a 5 veces al año";
		visita = visitaCine_OpCont[1];
	}
	else if (frecuencia == 3)
	{
		frecuenciaTitulo = "más de 6 veces al año";
		visita = visitaCine_OpCont[2];
	}
	else if (frecuencia == 4)
	{
		frecuenciaTitulo = "nunca";
		visita = visitaCine_OpCont[3];
	}



	double resultadoFrecuencia = (visita / encuestadosCont) * PORCENTAJE;
	// ------------------------ 

	string generoTitulo;
	int genero = generoCine_Mayor(generoCine_OpCont);
	int generoMasGustado;
	cout << endl << endl;

	if (genero == 1)
	{
		generoTitulo = "aventura";
		generoMasGustado = generoCine_OpCont[0];
	}
	else if (genero == 2)
	{
		generoTitulo = "acción";
		generoMasGustado = generoCine_OpCont[1];
	}
	else if (genero == 3)
	{
		generoTitulo = "supenso / terror";
		generoMasGustado = generoCine_OpCont[2];
	}
	else if (genero == 4)
	{
		generoTitulo = "drama";
		generoMasGustado = generoCine_OpCont[3];
	}
	else
	{
		generoTitulo = "comedia";
		generoMasGustado = generoCine_OpCont[4];
	}
	double resultadogenero = (generoMasGustado / encuestadosCont) * PORCENTAJE;

	//------------------------------

	string acomTitulo;
	int acompa = acompananteCine_Mayor(acompCine_OpCont);
	int acomMayor;
	cout << endl << endl;

	if (acompa == 1)
	{
		acomTitulo = "1 persona";
		acomMayor = acompCine_OpCont[0];
	}
	else if (genero == 2)
	{
		acomTitulo = "2 personas";
		acomMayor = acompCine_OpCont[1];
	}
	else if (genero == 3)
	{
		acomTitulo = "3 o más personas";
		acomMayor = acompCine_OpCont[2];
	}
	else
	{
		acomTitulo = "ninguna persona";
		acomMayor = acompCine_OpCont[3];
	}

	double resultadoacompa = (acomMayor / encuestadosCont) * PORCENTAJE;
	// ---------------------------

	string boletosTitulo;
	int boletos = compraBoletosCine_Mayor(compraBoletos_OpCont);
	int boletosMayor;
	cout << endl << endl;

	if (boletos == 1)
	{
		boletosTitulo = "en taquilla";
		boletosMayor = compraBoletos_OpCont[0];
	}
	else if (genero == 2)
	{
		boletosTitulo = "online";
		boletosMayor = compraBoletos_OpCont[1];
	}
	else
	{
		boletosTitulo = "a través de terceros";
		boletosMayor = compraBoletos_OpCont[2];
	}

	double resultadoaCompraBoleto = (boletosMayor / encuestadosCont) * PORCENTAJE;
	//------------------

	string consumoTitulo;
	int consumo = CompraProductosCine_Mayor(compraproductos_OpCont);
	int consumoMayor;


	if (consumo == 1)
	{
		consumoTitulo = "menos de 150 lempiras";
		consumoMayor = visitaCine_OpCont[0];
	}
	else if (consumo == 2)
	{
		consumoTitulo = "entre 150 y 300 lempiras";
		consumoMayor = visitaCine_OpCont[1];
	}
	else if (consumo == 3)
	{
		consumoTitulo = "entre 300 y 500 lempiras";
		consumoMayor = visitaCine_OpCont[2];
	}
	else
	{
		consumoTitulo = "más de 500 lempiras";
		consumoMayor = visitaCine_OpCont[3];
	}

	double resultadoConsumo = (consumoMayor / encuestadosCont) * PORCENTAJE;

	cout << "----------  RESULTADO DE LA ENCUESTA  ---------" << endl << endl;
	cout << " - PREGUNTA #1: Un " << resultadoFrecuencia << "% de los encuestados visita el cine " << frecuenciaTitulo << endl;
	cout << " - PREGUNTA #2: Para un " << resultadogenero << "% de los encuestados, su género de cine favorito es el cine de " << generoTitulo << endl;
	cout << " - PREGUNTA #3: Un " << resultadoacompa << "% respondio que, visita el cine acompañado de " << acomTitulo << endl;
	cout << " - PREGUNTA #4: El " << resultadoaCompraBoleto << "% de encuestados compra su boleto " << boletosTitulo << endl;
	cout << " - PREGUNTA #5: El " << resultadoConsumo << "% de encuestados indicaron que su consumo en comidas y bebidas es de " << consumoTitulo << " por visita" << endl << endl;
	system("Pause");
	return 0;
}
