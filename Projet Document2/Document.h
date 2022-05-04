#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include <vector>
// cette facon de définir les variables permet à toutes les classes filles/petites-filles de les utiliser
// on définit alors içi, le prix unitaire qui s'appliquent à tous les objets de type Document
// on définit également les fraisFixes qui s'appliquent à tous les objets de type Document
#define prixUnitaire 0.05
#define fraisFixe 2

using namespace std ;


class Document{

    protected:
    // attributs de la classe Document
    string titre;
    int numen;


    public:
    // constructeur Document qui initialise les paramètres de la classe 
    Document(string param_titre, int v_numen);

    // getter et setter pour récupérer le paramètre titre de la classe Document
    string getTitle();
    void setTitle(string param_titre);

    // getter et setter pour récupérer le paramètre numen(numéro d'enregistrement) de la classe Document
    int getNumen();
    void setNumen(int v_numen);

    // méthode afficher et fraisLivraison 
    // virtual afin que les objets de type Document puissent utiliser ces méthodes librement 
    virtual void afficher(); 
    virtual double fraisLivraison(double);

};


#endif   
