#include <iostream>
#include <string>

using namespace std;

class Personne{
private:
    string nom,prenom,date;
public:
    Personne(string Nom,string Prenom,string Date):nom(Nom),prenom(Prenom),date(Date){};

    virtual void Affiche(){
        cout << "Nom: " << nom << endl;
        cout << "Prenom: " << prenom << endl;
        cout << "Date de naissance: " << date << endl;
    }
};
class Employe :  Personne{
public:
    int salaire;
    Employe(string Nom,string Prenom,string Date,int Salaire):Personne(Nom, Prenom, Date), salaire(Salaire){};
    void Affiche(){
        Personne::Affiche();
        cout << "Salaire: " << salaire << endl;
    }
};
class Chef: Employe{
private:
    int service;
public:
    Chef(string Nom,string Prenom,string Date):nom(Nom),prenom(Prenom),date(Date){};
    void Affiche(){
        Employe::Affiche;
        cout << service << endl;
    } 
};
class Directeur : Chef{
    public:
    int societe;
    Chef(string Nom,string Prenom,string Date):nom(Nom),prenom(Prenom),date(Date){};
    void Affiche(){
        Chef::Affiche;
        cout << societe << endl;
    } 
};

int main(){
    
}