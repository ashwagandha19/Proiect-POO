#define CUTIT_H
#include <string>
#pragma once

class Cutit  {
    private:
        // damage-ul cutitului
        int damage;

        // nume cutit
        std::string numeCutit;

        // damage-ul difera daca apas click stanga sau click dreapta cand injunghii pe cineva
        std::string clickCutit;

        // exista 2 tipuri de cutite basic, unul pentru tero si unul pentru counter tero
        std::string echipaCutit;

        // exista diferite skinuri pentru cutite
        std::string numeSkin;

        // directia loviturii: cap, piept&brat, stomac, picior, spate
        std::string directiaLoviturii;

        // starea cutitului
        std::string stareCutit;

    public:
        Cutit::Cutit() ;
        // constructor parametrizat
        Cutit(std::string nume_Cutit, std::string nume_Skin, std::string stare_Cutit, std::string echipa_Cutit, std::string click_Cutit);

        Cutit(Cutit &obj) ;

        //FUNCTII
        int damageRealizat(std::string directiaLoviturii, std::string clickCutit) ;

        void afisareCutit();

};
