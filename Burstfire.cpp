class Burstfire: public Arma {
private:
	int burstBullets;
public:
	Burstfire(string numeArma, string numeSkin, string stareArma,
			string categorieArma, int munitieArma, int damageArma, int pretArma) :
			Arma(numeArma, numeSkin, stareArma, categorieArma, munitieArma,
					damageArma, pretArma) {
	}

	void trageCuArma(string directiaGlontului) {
		if (burstBullets > 0) {
			burstBullets = burstBullets--;
			damageRealizat(20, directiaGlontului);
		} else if (gloanteRamase()) {
			munitieArma = munitieArma--;
			//damage normal
			damageRealizat(10, directiaGlontului);
			cout << "Gloante ramase: " << munitieArma << endl;
		} else
			cout << "S-au terminat gloantele" << endl;
	}
};
