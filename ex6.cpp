#include <iostream>
using namespace std;
class Test
{
public:
    static int tableau[];

public:
    static int division(int indice, int diviseur)
    {
        return tableau[indice] / diviseur;
    }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};
main()
{
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;
    if (y == 0)
        cout << "impossible de diviser sur 0 ";
    else
    {
        cout << "Le resultat de la division est: " << endl;
        cout << Test::division(x, y) << endl;
    }
}