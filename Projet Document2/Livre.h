#ifndef LIVRE_H
#define LIVRE_H
#include <iostream>
#include "Document.h"
using namespace std ;


class Livre:public Document{


    protected:
    // attributs propres de Livre
    // protected pour que les petites-filles puissent l'utiliser, dans ce projet, Roman et Manuel
    string auteur;


    public:

    // contructeur de Livre qui initialise ses attributs
    Livre(string v_titre, int v_numen, string v_auteur);


    // getter et setter de Livre
    string getAuteur();
    void setAuteur(string v_auteur);


    // méthode afficher qui affiche la structure de l'objet Livre  
    // virtual afin que les petites-filles puissent l'utiliser librement, dans ce projet, Roman et Manuel
    virtual void afficher();


    // méthode fraisLivraison qui prend en paramètre la distance, içi, distance est définit en global dans StockDocument.h
    double fraisLivraison(double); 

};


#endif