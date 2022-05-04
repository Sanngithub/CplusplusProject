#include "Livre.h"


// CONSTRUCTEUR LIVRE QUI INITIALISE LES ATTRIBUTS DE L'OBJET EN HERITANT DE LA CLASSE DOCUMENT
Livre::Livre(string v_titre, int v_numen, string v_auteur):
Document::Document(v_titre, v_numen)
{
    this->auteur = v_auteur;
}



// GETTERS
string Livre::getAuteur(){
    return this->auteur;
}


// SETTERS
void Livre::setAuteur(string v_auteur){
    this->auteur = v_auteur;
}



// MÉTHODE POUR AFFICHER LA STRUCTURE DE LIVRE
// HERITANT DE LA METHODE AFFICHER DE LA CLASSE MERE DOCUMENT
void Livre::afficher(){
    // cout << "Livre: " << endl;
    Document::afficher();
    cout << "Auteur: " << auteur << endl;
}


// MÉTHODE QUI RETOURNE LE MONTANT DES FRAIS DE LIVRAISON POUR UN LIVRE
double Livre::fraisLivraison(double distance){

    return fraisFixe + (prixUnitaire* distance);
}