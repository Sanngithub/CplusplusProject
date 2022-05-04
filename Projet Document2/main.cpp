#include "Document.h"
#include "Livre.h"
#include "Dictionnaire.h"
#include "Roman.h"
#include "Manuel.h"
#include "StockDocument.h"

int main(){

    Document* doc1 = new Document("Mon Document", 01);
    // doc1->afficher();
    Dictionnaire* d1 = new Dictionnaire("Larousse", 456, "Anglais"); 
    // d1.afficher();
    Livre* l1 = new Livre("Nouveau Livre", 26, "Nouvel Auteur"); 
    // l1->afficher();
    Roman* r1 = new Roman("Les contemplations", 765, "Victor Hugo", 8);
    // r1.afficher();
    Manuel* m1 = new Manuel("Dissertation et methodes", 234, "Rochefort", 2);
    // m1.afficher();

    StockDocument notreStock; // stock vide

    notreStock.ajouterDocument(m1);
    notreStock.ajouterDocument(d1);
    notreStock.ajouterDocument(r1);
    // notreStock.ajouterDocument(l1);
    // notreStock.ajouterDocument(doc1);

    // // nous avons définit ici également une méthode afficher de stockdocument qui prend en paramètre la distance et qui affiche le bon de livraison pour les documents ajoutés. Hors, nous pensions que la méthode afficher ne doit pas prendre de paramètre.
    // notreStock.afficher(20);
   
    notreStock.afficher();
    double distance = 20;
    double FraisDeLivraison = 0;
    FraisDeLivraison = notreStock.fraisLivraison(distance);
    cout << "Frais de livraison pour une distance de " << distance <<"km est: " << FraisDeLivraison << " euros" << endl;

    return 0;


}