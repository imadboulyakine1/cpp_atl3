#include <iostream>
using namespace std;


class numComplex {
    public:
    int real,img;
    
};

void egalite(numComplex num1,numComplex num2){
        if(num1.real == num2.real && num1.img == num2.img){
            cout << "Egale" ;
            
        }
        else {
            cout << "Non" ;
        }
    };

numComplex addition(numComplex num1,numComplex num2){
    numComplex T;
    T.real = num1.real + num2.real;
    T.img = num1.img + num2.img; 
    return T ;
    };

numComplex soustraction(numComplex num1,numComplex num2){
    numComplex T;
    T.real = num1.real - num2.real;
    T.img = num1.img - num2.img; 
    return T ;
    };

numComplex multiplication(numComplex num1,numComplex num2){
    numComplex T;
    T.real = num1.real * num2.real - num1.img * num2.img;
    T.img = num1.real * num2.img + num2.real * num1.img; 
    return T;
    };

numComplex division(numComplex num1,numComplex num2){
    numComplex T;
    int alma9am = num2.real * num2.real + num2.img *num2.img;
    if(alma9am!= 0){
        T.real =( num1.real * num2.img + num2.real * num1.img ) / alma9am ;
        T.img =( num1.img * num2.real - num1.real * num2.img) / alma9am ;
        return T;
    }
    else{
        cout << "imposi" ;
    }
    return T;
    };

int main(){
    int choise;
    int real1,real2,ima1,ima2;
    cout << "give all nums" << endl; 
    cin >> real1 ;
    cin >> real2 ;
    cin >> ima1 ;
    cin >> ima2 ;
    cout << "choose if ukuk" << endl;
    cin >> choise ;
    numComplex Num1,Num2;
    Num1.real = real1;Num1.img = ima1;
    Num2.real = real2;Num2.img = ima2;

    switch (choise)
    {
    case 1:
        egalite(Num1,Num2);
        break;
    case 2:
        addition(Num1,Num2);
        break;
    case 3:
        soustraction(Num1,Num2);
        break;
    case 4:
        multiplication(Num1,Num2);
        break;
    case 5:
        division(Num1,Num2);
        break;
    default:
        break;
    }
    return 0;
}
