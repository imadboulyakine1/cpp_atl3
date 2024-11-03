#include <iostream>

using namespace std;

class test{
private:
    static int cmp;
public:
    void call(){
        cmp++;
        cout<< "la fonction a été appelé"<<endl;
    }
    static int get_cmp(){
    return cmp;
    }
};
int test::cmp=0;


int main()
{
    test T1;
    test T2;

    T1.call();
    T2.call();
    T2.call();

    cout<< "nombre d'appele est :" << test::get_cmp() <<endl;
    return 0;
}







