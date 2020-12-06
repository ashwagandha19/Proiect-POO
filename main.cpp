#include <iostream>
#include "Cutit.h"
#include "Arma.h"
#include "Burstfire.cpp"

using namespace std;

int main() {
	cout << endl;
	Arma arma1("AK 47", "Frontside Misty", "Factory New", "Assault Rifles", 30,
	27, 2700);
	arma1.afisareArma();
	cout << endl;

	Arma arma3 = arma1;
	arma3.afisareArma();
	cout << endl;

	Burstfire famas("Famas", "Aligator", "Field Tested", "Assault Rifles", 25, 26, 2050);
	famas.afisareArma();
	famas.trageCuArma("headshot");
	famas.trageCuArma("chest&arm");
	famas.trageCuArma("stomach");
	cout << endl;

	Cutit cutit1("M9 bayonet", "Lore", "Field-Tested", "dreapta", "ct");

	cutit1.afisareCutit();
	cutit1.damageRealizat("headshot", "dreapta");
	cout << endl;

	Cutit cutit2("M9 bayonet", "Lore", "Field-Tested", "stanga", "t");
	cutit2.afisareCutit();
	cutit2.damageRealizat("stomach", "dreapta");
	cout << endl;
}
