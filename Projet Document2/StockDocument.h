#ifndef STOCKDOCUMENT_H
#define STOCKDOCUMENT_H
#include <iostream>
#include <vector>
#include "Document.h"
// on définit ici le paramètre distance en Km pour pouvoir l'utiliser dans la méthode fraisLivraison(double) de notre classe StockDocument
// #define distance 20
using namespace std ;



class StockDocument{


    private:
    // notre stock est un vecteur de type pointeur Document
    vector <Document*> notreStock ;


    public:
    // constructeur vide de la classe StockDocument qui va s'alimenter à l'aide de la méthode ajouterDocument
    void vecteurDocuments(); 

    // méthode qui va permettre d'ajouter un Document dans le constructeur StockDocument vide de type Document 
    void ajouterDocument(Document*);

    // méthode afficher qui affiche le bon de livraison en n'oubliant pas de définir la distance en km en haut du fichier StockDocument.h 
    void afficher(); 
    // void afficher(double); 

    // méthode fraisLivraison qui prend en paramètre la distance, içi, distance est définit en global dans StockDocument.h
    double fraisLivraison(double); 

};



#endif