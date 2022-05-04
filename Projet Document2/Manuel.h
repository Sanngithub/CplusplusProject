#ifndef MANUEL_H
#define MANUEL_H
#include <iostream>
#include "Livre.h"
#include "Document.h"
using namespace std ;


class Manuel:public Livre{


    private:
    // attributs propres de Manuel
    int nivscolaire;

    public:
    // contructeur de manuel qui initialise ses attributs
    Manuel(string v_titre, int v_numen, string v_auteur, int v_niv);

    // getter et setter
    int getNIVSCOLAIRE();
    void setNIVSCOLAIRE(int v_nivscolaire);


    // méthode afficher qui affiche la structure de l'objet Livre  
    void afficher();

    // méthode fraisLivraison qui prend en paramètre la distance, içi, distance est définit en global dans StockDocument.h
    double fraisLivraison(double); 

};


#endif