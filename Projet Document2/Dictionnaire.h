#ifndef DICTIONNAIRE_H
#define DICTIONNAIRE_H
#include <iostream>
#include "Document.h"
using namespace std ;


class Dictionnaire:public Document{


    protected:
    // attributs propres de Dictionnaire
    // protected pour que les petites-filles puissent l'utiliser
    string langue;
    int fraisParticulier = 10;


    public:

    // contructeur de Dictionnaire qui initialise ses attributs
    Dictionnaire(string title, int v_numen, string lang);


    // getter et setter de Dictionnaire
    string getLangue();
    void setLangue(string v_langue);
    int getFraisParticulier();
    void setFraisParticulier(int v_fraisParticulier);


    // méthode afficher qui affiche la structure de l'objet Dictionnaire
    void afficher();

    // méthode fraisLivraison qui prend en paramètre la distance, içi, distance est définit en global dans StockDocument.h
    double fraisLivraison(double);

};

#endif