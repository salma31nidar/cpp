#include<iostream>
using namespace std ;

    class complex{
private:
    float re;
    float img;
public :    
    complex(){
        float a,b;
        cout << "entrez la partie reel" << endl;
        cin >> a ;
        cout << "entrez la partie imaginaire "<< endl;
        cin >> b;
        this->img=a;
        this->re=b;
    }
    complex(float a ,float b){
        this->img=a;
        this->re=b;
    }
    void displaycomplexe(){
        cout << this->re<<"+"<<this->img<<"i"<<endl;
    }
    complex operator +(complex c){
        int c1 ,c2;
        c1= this->re+c.re;
        c2= this->img+c.img;
        return complex(c1,c2);
    }
    };
    int main (){
        complex c1,c2;
        c1.displaycomplexe();
        c2.displaycomplexe();
        c1.operator+(c2).displaycomplexe(); 
    }
