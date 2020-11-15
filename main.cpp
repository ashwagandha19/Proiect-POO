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
                numeArma = "";
                numeSkin = "";
                stareArma = "";
                categorieArma = "";
                munitieArma = 0;
                damageArma = 0;
                pretArma = 0;
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


            void afisareArma() {
                cout << "Proprietati Arma" << endl;
                cout << "Nume Arma: " << numeArma << endl;
                cout << "Nume Skin: " << numeSkin << endl;
                cout << "Stare Arma: " << stareArma << endl;
                cout << "Categorie Arma: " << categorieArma << endl;
                cout << "Munitie Arma: " << munitieArma << endl;
                cout << "Damage Arma: " << damageArma << endl;
                cout << "Pret Arma: " << pretArma << endl;
            }

            void gloanteRamase(int munitie_Arma, int gloanteTrase) {
                munitie_Arma = munitie_Arma - gloanteTrase;
                cout << "Gloante ramase: " << munitie_Arma << endl; 
            }
};

class Cutit  {
    private:
        // damage-ul cutitului
        int damage;

        // nume cutit
        string numeCutit;

        // damage-ul difera daca apas click stanga sau click dreapta cand injunghii pe cineva
        string clickCutit;

        // exista 2 tipuri de cutite basic, unul pentru tero si unul pentru counter tero
        string echipaCutit;

        // exista diferite skinuri pentru cutite
        string numeSkin;

        // directia loviturii: cap, piept&brat, stomac, picior, spate
        string directiaLoviturii;

        // starea cutitului
        string stareCutit;

    public: 
        // constructor default
        Cutit() {
            cout<<"Default constructor called" << endl;
            numeCutit = "";
            numeSkin = "";
            stareCutit = "";
            directiaLoviturii = "";
            echipaCutit = "";
            clickCutit = "";
            damage = 0;
        } 

        // constructor parametrizat
        Cutit(string nume_Cutit, string nume_Skin, string stare_Cutit, string echipa_Cutit, string click_Cutit) {
            cout << "Parameterized constructor called" << endl;
            numeCutit = nume_Cutit;
            numeSkin = nume_Skin;
            stareCutit = stare_Cutit;
            clickCutit = click_Cutit;
            echipaCutit = echipa_Cutit;
        }

        Cutit(Cutit &obj) {
            cout << "Copy constructor called" << endl;
            numeCutit = obj.numeCutit;
            numeSkin = obj.numeSkin;
            stareCutit = obj.stareCutit;
            clickCutit = obj.clickCutit;
            echipaCutit = obj.echipaCutit;
        }

        ~Cutit() {
            cout << "Destructor called" << endl;
        }


        //FUNCTII
        int damageRealizat(string directiaLoviturii, string clickCutit) {
            float totalDamage = 0;

            if(directiaLoviturii == "headshot") {
                if (clickCutit == "dreapta") totalDamage = 250;
                else totalDamage = 50;
            }

            else if ((directiaLoviturii == "chest&arm") || (directiaLoviturii == "stomach") || (directiaLoviturii == "legs")){
                if(clickCutit == "dreapta") totalDamage = 55;
                else totalDamage = 12;
            }

            cout << "Damage total cutit: " << totalDamage << endl;
        }

        void afisareCutit() {
            cout << "Proprietati Cutit" << endl;
            cout << "Nume Cutit: " << numeCutit << endl;
            cout << "Nume Skin: " << numeSkin << endl;
            cout << "Stare Cutit: " << stareCutit << endl;
        }

};

int main() {
    Arma arma1("AK 47", "Frontside Misty", "Factory New", "Assault Rifles", 30, 27, 2700);
    arma1.afisareArma();
    arma1.damageRealizat(27, "headshot");
    arma1.gloanteRamase(30, 17);
    cout << endl;


    Arma arma2;
    arma2.setareProprietati("MP5-SD", "Phosphor", "Well-Worn", "SMGs", 30, 27, 1500);
    arma2.afisareArma();
    cout << endl;

    // utliziarea constructorului de copiere
    Arma arma3 = arma1;
    arma3.afisareArma();
    cout << endl;


    Cutit cutit1("M9 bayonet", "Lore", "Field-Tested", "dreapta", "ct");

    cutit1.afisareCutit();
    cutit1.damageRealizat("headshot", "dreapta");
}