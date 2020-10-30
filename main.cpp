#include <iostream>
using namespace std;

class Arma {
    private:

        // numele armei
        string numeArma;

        // armele pot avea diferite skinuri
        string numeSkin;

        // armele pot avea diferite stari (tipul de uzura)
        string stareArma;

        // armele pot fi sortate pe categorii: shotguns, pistols, rifles, smgs etc
        string categorieArma;

        // armele au un anumit numar de gloante
        int munitieArma;
        
        // armele au un anumit damage
        int damageArma;

        // armele au un anumit pret
        int pretArma;

        // directia glontului: cap, piept&brat, stomac, picior
        string directiaGlontului;



    public:
            // constructor default
            Arma() {
                cout << "Default constructor called" << endl;
                numeSkin = "Safari Mesh";
            }


            // constructor parametrizat
            Arma(string nume_Arma, string nume_Skin, string stare_Arma, string categorie_Arma, int munitie_Arma, int damage_Arma, int pret_Arma) {
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
            Arma(Arma &obj) {
                cout << "Copy constructor called" << endl;
                numeArma = obj.numeArma;
                numeSkin = obj.numeSkin;
                stareArma = obj.stareArma;
                categorieArma = obj.categorieArma;
                munitieArma = obj.munitieArma;
                damageArma = obj.damageArma;
                pretArma = obj.pretArma;
            }

            ~Arma() {
                cout << "Destructor called" << endl;
            }

            //FUNCTII(METODE)
            // functia damageRealizat
            int damageRealizat(int damage, string directiaGlontului) {
                float totalDamage = 0;

                if(directiaGlontului == "headshot") totalDamage = damage*4;

                else if (directiaGlontului == "chest&arm") totalDamage = damage*1;

                else if (directiaGlontului == "stomach") totalDamage = damage*1.25;

                else if (directiaGlontului == "legs") totalDamage = damage*0.75;

                cout << "Damage total: " << totalDamage << endl;
            }

            void setareProprietati(string nume_Arma, string nume_Skin, string stare_Arma, string categorie_Arma, int munitie_Arma, int damage_Arma, int pret_Arma ) {
                numeArma = nume_Arma;
                numeSkin = nume_Skin;
                stareArma = stare_Arma;
                categorieArma = categorie_Arma;
                munitieArma = munitie_Arma;
                damageArma = damage_Arma;
                pretArma = pret_Arma;
            }


            void displayArma() {
                cout << "Proprietati Arma" << endl;
                cout << "Nume Arma: " << numeArma << endl;
                cout << "Nume Skin: " << numeSkin << endl;
                cout << "Stare Arma: " << stareArma << endl;
                cout << "Categorie Arma: " << categorieArma << endl;
                cout << "Munitie Arma: " << munitieArma << endl;
                cout << "Damage Arma: " << damageArma << endl;
                cout << "Pret Arma: " << pretArma << endl;
            }

};

int main() {
    Arma arma1("AK 47", "Frontside Misty", "Factory New", "Assault Rifles", 30, 27, 2700);
    arma1.displayArma();
    arma1.damageRealizat(27, "headshot");
    cout << endl;


    Arma arma2;
    arma2.setareProprietati("MP5-SD", "Phosphor", "Well-Worn", "SMGs", 30, 27, 1500);
    arma2.displayArma();
    cout << endl;

    // utliziarea constructorului de copiere
    Arma arma3 = arma1;
    arma3.displayArma();
    cout << endl;

}