#include<iostream>
#include<list>
#include<iterator>
using namespace std ;
#include<string>

class point {
    protected: 
    string nom;
    private :
    double x;
    double y;
    public :
    double getX(double x1);
    double setX();
    double getY(double Y1);
    double setY();
    string getNOM(string nom1);
    string setNOM(string nom2);
    void afficher(string nom3);
};

class pointcouleur : public point {
    private:
     unsigned int couleur;
    public :
    void afficher(string couleur );
    unsigned int getcouleur();
    unsigned int setcouleur();
};