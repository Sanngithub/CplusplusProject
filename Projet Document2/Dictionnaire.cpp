#include "Dictionnaire.h"


// CONSTRUCTEUR DICTIONNAIRE QUI INITIALISE LES ATTRIBUTS DE L'OBJET EN HERITANT DE LA CLASSE DOCUMENT
Dictionnaire::Dictionnaire(string v_titre, int v_numen, string v_langue):
Document::Document(v_titre, v_numen)
{
    this->langue = v_langue ;
}



// GETTERS
string Dictionnaire::getLangue(){
    return this->langue;
}

int Dictionnaire::getFraisParticulier(){
    return this->fraisParticulier;
}



// SETTERS
void Dictionnaire::setLangue(string v_langue){
    this->langue = v_langue;
}

void Dictionnaire::setFraisParticulier(int v_fraisParticulier){
    this->fraisParticulier = v_fraisParticulier;
}



// MÉTHODE POUR AFFICHER LA STRUCTURE DE DICTIONNAIRE
// HERITANT DE LA METHODE AFFICHER DE LA CLASSE MERE DOCUMENT
void Dictionnaire::afficher(){
    cout << "Dictionnaire: " << endl;
    Document::afficher();
    cout << "Langue: " << langue << endl;
}



// MÉTHODE QUI RETOURNE LE MONTANT DES FRAIS DE LIVRAISON POUR UN DICTIONNAIRE
double Dictionnaire::fraisLivraison(double distance){

    return fraisParticulier + fraisFixe + (prixUnitaire * distance);
}




