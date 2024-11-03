#include <iostream>
#include <math.h>
using namespace std;

class vecteur3d {
    public:
    float x = 0.0f ;
    float y = 0.0f ;
    float z = 0.0f ;
    vecteur3d(float X = 0.0f,float Y =0.0f ,float Z = 0.0f):x(X),y(Y),z(Z) {}

    void Affiche(){
        cout << "(" << x << ", " << y << ", " << z << ")" <<endl;
    }
    vecteur3d somme(vecteur3d vect1,vecteur3d vect2){
        return vecteur3d(vect1.x + vect2.x,vect1.y + vect2.y,vect1.z + vect2.z);
    }
    vecteur3d* somme_adr(vecteur3d* vect1, vecteur3d* vect2) {
        return new vecteur3d(vect1->x + vect2->x, vect1->y + vect2->y, vect1->z + vect2->z);
    }
    vecteur3d& somme_ref(vecteur3d& vect1, vecteur3d& vect2) {
        static vecteur3d result; 
        result.x = vect1.x + vect2.x;
        result.y = vect1.y + vect2.y;
        result.z = vect1.z + vect2.z;
        return result; 
    }

    float produit(vecteur3d vect1,vecteur3d vect2){
        return vect1.x * vect2.x + vect1.y * vect2.y + vect1.z * vect2.z;
    }
    bool coincide(vecteur3d vect1,vecteur3d vect2){
        if(vect1.x == vect2.x && vect1.y == vect2.y && vect1.z == vect2.z)
            return true;
        else
            return false;
    }
    float norme(vecteur3d vect){
        return  pow(pow(vect.x, 2) + pow(vect.y, 2) + pow(vect.z, 2), 0.5);
    }
    vecteur3d normax(vecteur3d vect1,vecteur3d vect2){
        if(norme(vect1) > norme(vect2)){
            return vect1;
        }
        else if (norme(vect1) < norme(vect2))
        {
            return vect2;
        }
        else if (coincide(vect1, vect2))
        {
            return vect1;
        }
    }
};

int main() {
    vecteur3d v1(1, 2, 3);
    vecteur3d v2(4, 5, 6);



    return 0;
}