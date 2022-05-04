#include "Document.h"

// CONSTRUCTEUR QUI INITIALISE LES ATTRIBUTS DE LA CLASSE DOCUMENT
Document::Document(string param_titre, int v_numen){
    this->titre = param_titre;
    this->numen = v_numen;
}



// GETTERS
string Document::getTitle(){
    return this->titre;
}

int Document::getNumen(){
    return this->numen;
}



// SETTERS
void Document::setTitle(string param_titre){
    this->titre = param_titre;
}

void Document::setNumen(int v_numen){
    this->numen = v_numen;
}



// MÉTHODE POUR AFFICHER LA STRUCTURE DE LA CLASSE DOCUMENT
void Document::afficher(){
    cout << "Titre: " << titre << endl;
    cout << "numen: " << numen << endl;
}



// MÉTHODE FRAISLIVRAISON QUI RETOURNE LES FRAISFIXES ET LE PRIXUNITAIRE POUR TOUS LES DOCUMENTS
double Document::fraisLivraison(double distance){
    return fraisFixe+ prixUnitaire*distance;
}


