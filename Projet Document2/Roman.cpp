#include "Roman.h"

// CONSTRUCTEUR ROMAN QUI INITIALISE LES ATTRIBUTS DE L'OBJET EN HERITANT DE LA CLASSE LIVRE
Roman::Roman(string v_titre, int v_numen, string v_auteur, int v_prixlit):Livre(v_titre, v_numen, v_auteur)
{
    this->nbprix=v_prixlit;
}


// GETTER
int Roman::getPrixLit(){
    return this->nbprix;
}



// SETTER
void Roman::setPrixLit(int v_prix_lit){
    this->nbprix = v_prix_lit;
}


// MÉTHODE POUR AFFICHER LA STRUCTURE DE ROMAN
// HERITANT DE LA METHODE AFFICHER DE LA CLASSE LIVRE
void Roman::afficher(){
    cout << "Roman: " << endl;
    Livre::afficher();  
    cout << "nbprix: " << nbprix << endl;

}


// MÉTHODE QUI RETOURNE LE MONTANT DES FRAIS DE LIVRAISON POUR UN ROMAN
double Roman::fraisLivraison(double distance){

    return fraisFixe + (prixUnitaire * distance);
}

