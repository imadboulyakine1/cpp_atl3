#include <iostream>
#include <vector>
#include <algorithm> //sort
using namespace std;

class Traitement
{
    vector<int> value;
public:
    void init()
    {
        cout << "Inserte Mode Activated : (give pair numbers // 0 will not be accepted)" << endl;
        value.resize(15);
        int var;
        for(int i = 0;i < 15;i++){
            cin >> var;
            if(var != 0 && var%2 == 0){
                value[i] = var;
            }
            else
            {
                cout << "Give other numbers" << endl;
            }
        }
    }
    void show(){
        cout << "List of numbers: ";
        for(int i = 0;i < value.size();i++){
            cout << "vector["<< i << "] =" << value[i] << endl ;
        }
    }

    friend double moyenne(Traitement& traitement);
    friend double median(Traitement& traitement);
};

double moyenne(Traitement& traitement){
    vector<int> Value = traitement.value ;
    if (Value.empty()) {
        return 0.0; 
    }
    double lasomme = 0.0f;
    for (int i = 0; i< Value.size(); i++){
        lasomme += Value[i];
    }
    return lasomme / Value.size();
}

double median(Traitement& traitement){
    vector<int> Value = traitement.value ;
    if (Value.empty()) {
        return 0.0; 
    }
    sort(Value.begin(), Value.end());
    if(Value.size()%2 == 0)
        return (Value[Value.size() / 2 - 1] + Value[Value.size() / 2 - 1]) / 2;
    else
        return Value[Value.size() / 2]; //7
}

int main() {
    Traitement traitement;
    traitement.init();
    traitement.show();

    cout << "Average: " << moyenne(traitement) << endl;
    cout << "Median: " << median(traitement) << endl;

    return 0;
}