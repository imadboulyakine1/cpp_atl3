#include <iostream>
using namespace std;

class Animals{
    public:
    string nom;
    int age;

    
    int set_value(int value){
        return age += value;
    }
};
class Zebra : Animals{
    public:
    string lieu;
    void cons_zebra(string Name,int Age,string Lieu){
        nom = Name;
        age = Age;
        lieu = Lieu;
    }
    void affcihe(){
        cout << nom << endl;
        cout << age << endl;
        cout << lieu << endl;
    }
};
class Dolhpin : Animals{
    public:
        string lieu;
    void cons_dolhpin(string Name,int Age,string Lieu){
        nom = Name;
        age = Age;
        lieu = Lieu;
    }
    void affcihe(){
        cout << nom << endl;
        cout << age << endl;
        cout << lieu << endl;
    }
    
};

int main(){
    Dolhpin dolphpin;
    dolphpin.cons_dolhpin("suzzi",20,"lkarin");
    dolphpin.affcihe();
}