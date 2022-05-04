#include "Manuel.h"


// CONSTRUCTEUR MANUEL QUI INITIALISE LES ATTRIBUTS DE L'OBJET EN HERITANT DE LA CLASSE DOCUMENT
Manuel::Manuel(string v_titre, int v_numen, string v_auteur, int v_niv):Livre(v_titre, v_numen, v_auteur)
{
    this->nivscolaire= v_niv;
}



// GETTER
int Manuel::getNIVSCOLAIRE(){
    return this->nivscolaire;
}



// SETTER
void Manuel::setNIVSCOLAIRE(int v_nivscolaire){
    this->nivscolaire = v_nivscolaire;
}



// MÉTHODE POUR AFFICHER LA STRUCTURE DE MANUEL
// HERITANT DE LA METHODE AFFICHER DE LA CLASSE LIVRE
void Manuel::afficher(){
    cout << "Manuel: " << endl;
    Livre::afficher();
    cout << "Niveau: " << nivscolaire << endl;

}


// MÉTHODE QUI RETOURNE LE MONTANT DES FRAIS DE LIVRAISON POUR UN MANUEL
double Manuel::fraisLivraison(double distance){


    return fraisFixe + prixUnitaire * distance;
}




