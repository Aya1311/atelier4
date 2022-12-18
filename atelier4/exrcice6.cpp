#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
    if(diviseur == 0){throw"Division par 0 n'est pas valide";}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try{
cout << "Le résultat de la division est: "<< endl;
cout <<Test::division(x,y) << endl;
}catch(const char *e){
cerr<<e<<endl;
}

return 0; }