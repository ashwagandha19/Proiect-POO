#include "Cutit.h"
#include <iostream>
#include <string>

using namespace std;

        Cutit::Cutit() {
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
        Cutit::Cutit(std::string nume_Cutit, std::string nume_Skin, std::string stare_Cutit, std::string echipa_Cutit, std::string click_Cutit) {
            cout << "Parameterized constructor called" << endl;
            numeCutit = nume_Cutit;
            numeSkin = nume_Skin;
            stareCutit = stare_Cutit;
            clickCutit = click_Cutit;
            echipaCutit = echipa_Cutit;
        }

        Cutit::Cutit(Cutit &obj) {
            cout << "Copy constructor called" << endl;
            numeCutit = obj.numeCutit;
            numeSkin = obj.numeSkin;
            stareCutit = obj.stareCutit;
            clickCutit = obj.clickCutit;
            echipaCutit = obj.echipaCutit;
        }

        Cutit::~Cutit() {
            cout << "Destructor called" << endl;
        }


        //FUNCTII
        int Cutit::damageRealizat(std::string directiaLoviturii, std::string clickCutit) {
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

        void Cutit::afisareCutit() {
            cout << "Proprietati Cutit" << endl;
            cout << "Nume Cutit: " << numeCutit << endl;
            cout << "Nume Skin: " << numeSkin << endl;
            cout << "Stare Cutit: " << stareCutit << endl;
        }

