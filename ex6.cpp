6/
#include <iostream>

using namespace std;

class point{
private:
    float x;
    float y;
public:
    point(float X, float Y):x(X), y(Y){}
   void deplace( point& p, float a, float b){
        p.x=p.x + a;
        p.y=p.y + b;
    }
 void afficher()const{
  cout<< "(" << x << "," << y << ")" <<endl;
 }
};

int main()
{
  point p(2.3, 7.9);
  p.afficher();
  p.deplace(p, 3.4, 7.9);
  p.afficher();
    return 0;
}