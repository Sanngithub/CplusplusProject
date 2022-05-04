#ifndef ROMAN_H
#define ROMAN_H
#include <iostream>
#include "Livre.h"
#include "Document.h"
using namespace std ;


class Roman:public Livre{


    private:
    // attributs propres de Roman
    int nbprix;

    public:

    // contructeur de Roman qui initialise ses attributs
    Roman(string v_titre, int v_numen, string v_auteur, int v_prixlit);

    // getter et setter de Roman
    int getPrixLit();
    void setPrixLit(int v_prix_lit);

    // méthode afficher qui affiche la structure de l'objet Roman
    void afficher();

    // méthode fraisLivraison qui prend en paramètre la distance, içi, distance est définit en global dans StockDocument.h
    double fraisLivraison(double distance); 

};


#endif