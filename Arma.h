#define ARMA_H
#include <string>
#pragma once

class Arma {
    private:

        // numele armei
        std::string numeArma;

        // armele pot avea diferite skinuri
        std::string numeSkin;

        // armele pot avea diferite stari (tipul de uzura)
        std::string stareArma;

        // armele pot fi sortate pe categorii: shotguns, pistols, rifles, smgs etc
        std::string categorieArma;

        // armele au un anumit numar de gloante
        int munitieArma;

        // armele au un anumit pret
        int pretArma;

        // directia glontului: cap, piept&brat, stomac, picior
        std::string directiaGlontului;

        int damageArma;

    public: 
    	    //constructor default
	        Arma::Arma() ;
            // constructor parametrizat
            Arma(std::string nume_Arma, std::string nume_Skin, std::string stare_Arma, std::string categorie_Arma, int munitie_Arma, int damage_Arma, int pret_Arma);

            // constructor de copiere
            Arma(Arma &obj) ;

            //FUNCTII(METODE)
            // functia damageRealizat
            int damageRealizat(int damage, std::string directiaGlontului);

            void setareProprietati(std::string nume_Arma, std::string nume_Skin, std::string stare_Arma, std::string categorie_Arma, int munitie_Arma, int damage_Arma, int pret_Arma ) ;

            void afisareArma();

            bool gloanteRamase();

            virtual void trageCuArma(std::string directiaGlontului);
};
