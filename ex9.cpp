#include <iostream>

using namespace std;

struct myString {
    int data;
    myString* next; 


    myString(int value) : data(value), next(nullptr) {}
};

class Liste {
private:
    myString* head; 

public:
    Liste() : head(nullptr) {}

    ~Liste() {
        while (head != nullptr) {
            myString* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void ajouterDebut(int value) {
        myString* newString = new myString(value);
        newString->next = head;
        head = newString;
    }

    void supprimerDebut() {
        if (head != nullptr) {
            myString* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void afficher() {
        cout << "Liste : ";
        myString* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Liste maListe;

    // Add elements to the list
    maListe.ajouterDebut(5);
    maListe.ajouterDebut(3);
    maListe.ajouterDebut(1);

    // Display the list
    maListe.afficher(); // Output: Liste : 1 3 5 

    // Remove the first element
    maListe.supprimerDebut();

    // Display the list again
    maListe.afficher(); // Output: Liste : 3 5 

    return 0;
}