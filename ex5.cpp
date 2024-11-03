#include <iostream>

class T{
    public:
    static int value ;
    void call(){
        value++ ;
    }
};

int T::value = 0; 

int main() {
    T obj1, obj2;

    obj1.call();  
    obj2.call(); 

    std::cout << "T::value: " << T::value << std::endl; // Output: 2

    return 0;
}