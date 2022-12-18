#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void afficherDateEtHeure(string s)
{
cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4) << endl;
cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) <<"min"<< endl;
}

int main()
{ 
    string s;
    cout<<"veiller renseigner la chaine de caractere sous la forme:JJMMAAAAHHMIN"<<endl;
    cin>>s;
    afficherDateEtHeure(s); 
    return 0;
}