#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    string forma;

    cout << "Entrez la date et l'heure au format JJMMAAAHHNN : ";
    cin >> forma;

    string jour = forma.substr(0, 2);
    int mois = stoi(forma.substr(2, 2));
    string annee = forma.substr(4, 4);
    string heure = forma.substr(8, 2);
    string minute = forma.substr(10, 2);

    vector<string> les_mois = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin","Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };

    cout << "la forma reprsent la date du " << jour << " " << les_mois[mois] << " " << annee << " à " << heure << "h" << minute << "."<< endl;;

    return 0;
}