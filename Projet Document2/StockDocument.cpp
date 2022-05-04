#include "StockDocument.h"
#include "Dictionnaire.h"

// CONSTRUCTEUR STOCKDOCUMENT VIDE QUI VA STOCKER LES OBJETS DE TYPE DOCUMENTS QU'ON VA LUI AJOUTER
void StockDocument::vecteurDocuments(){
}


// MÉTHODE QUI VA PERMETTE D'AJOUTER UN OBJET DE TYPE DOCUMENT DANS LE STOCK VIDE A l'AIDE DE PUSH_BACK
void StockDocument::ajouterDocument(Document* v_document){
    notreStock.push_back(v_document);
}



// MÉTHODE QUI VA AFFICHER LE BON DE FRAIS DE LIVRAISON
void StockDocument::afficher(){


    cout << "----------------------------------------------------------------------------------" << endl;

    for(int i = 0 ; i < notreStock.size() ; i++){
        (*notreStock[i]).afficher();
        cout << endl;

    }

    cout << "----------------------------------------------------------------------------------" << endl;
}


// METHODE AFFICHER AVEC UN PARAMETRE QUI NOUS SEMBLE INCORRECT
// void StockDocument::afficher(double distance){

//     double somme; 
//     somme = StockDocument::fraisLivraison(distance);

//     cout << "----------------------------------------------------------------------------------" << endl;

//     for(int i = 0 ; i < notreStock.size() ; i++){
//         (*notreStock[i]).afficher();
//         cout << endl;
//     }

//     cout << "----------------------------------------------------------------------------------" << endl;
    
//     cout << "Frais de livraison pour une distance de " << distance <<"km est: " << somme << "euros" << endl;
// }



// MÉTHODE QUI CALCULE LE COUT DES FRAIS DE LIVRAISON DU STOCK EN FONCTION D'UNE DISTANCE
double StockDocument::fraisLivraison(double v_distance){

    double sum = 0;
    for(int i = 0 ; i < notreStock.size() ; i++){
        sum = sum + (*notreStock[i]).fraisLivraison(v_distance);
    }
    return sum;
}


