#include "Arma.h"
#include <string>
#include <iostream>

using namespace std;

	//constructor default
	Arma::Arma() {
		cout << "Default constructor called" << endl;
		numeArma = "";
		numeSkin = "";
		stareArma = "";
		categorieArma = "";
		munitieArma = 0;
		damageArma = 0;
		pretArma = 0;
	}

	// constructor parametrizat
	Arma::Arma(std::string nume_Arma, std::string nume_Skin, std::string stare_Arma,
			std::string categorie_Arma, int munitie_Arma, int damage_Arma,
			int pret_Arma) {
		cout << "Parameterized constructor called" << endl;
		numeArma = nume_Arma;
		numeSkin = nume_Skin;
		stareArma = stare_Arma;
		categorieArma = categorie_Arma;
		munitieArma = munitie_Arma;
		damageArma = damage_Arma;
		pretArma = pret_Arma;
	}

	// constructor de copiere
	Arma::Arma(Arma &obj) {
		cout << "Copy constructor called" << endl;
		numeArma = obj.numeArma;
		numeSkin = obj.numeSkin;
		stareArma = obj.stareArma;
		categorieArma = obj.categorieArma;
		munitieArma = obj.munitieArma;
		damageArma = obj.damageArma;
		pretArma = obj.pretArma;
	}

	Arma::~Arma() {
		cout << "Destructor called" << endl;
	}

	//FUNCTII(METODE)
	// functia damageRealizat
	int Arma::damageRealizat(int damage, std::string directiaGlontului) {
		float totalDamage = 0;

		if (directiaGlontului == "headshot")
			totalDamage = damage * 4;

		else if (directiaGlontului == "chest&arm")
			totalDamage = damage * 1;

		else if (directiaGlontului == "stomach")
			totalDamage = damage * 1.25;

		else if (directiaGlontului == "legs")
			totalDamage = damage * 0.75;

		cout << "Damage total: " << totalDamage << endl;

		return totalDamage;
	}

	void Arma::setareProprietati(std::string nume_Arma, std::string nume_Skin,
			std::string stare_Arma, std::string categorie_Arma, int munitie_Arma,
			int damage_Arma, int pret_Arma) {
			numeArma = nume_Arma;
			numeSkin = nume_Skin;
			stareArma = stare_Arma;
			categorieArma = categorie_Arma;
			munitieArma = munitie_Arma;
			damageArma = damage_Arma;
			pretArma = pret_Arma;
	}

	void Arma::afisareArma() {
		cout << "Proprietati Arma" << endl;
		cout << "Nume Arma: " << numeArma << endl;
		cout << "Nume Skin: " << numeSkin << endl;
		cout << "Stare Arma: " << stareArma << endl;
		cout << "Categorie Arma: " << categorieArma << endl;
		cout << "Munitie Arma: " << munitieArma << endl;
		cout << "Damage Arma: " << damageArma << endl;
		cout << "Pret Arma: " << pretArma << endl;
	}

	bool Arma::gloanteRamase() {
		return munitieArma > 0 ;
	}

		void Arma::trageCuArma(string directiaGlontului) {
		if (gloanteRamase()) {
			munitieArma = munitieArma--;
			damageRealizat(10, directiaGlontului);
			cout << "Gloante ramase: " << munitieArma << endl;
		} else
			cout << "S-au terminat gloantele" << endl;
	}


