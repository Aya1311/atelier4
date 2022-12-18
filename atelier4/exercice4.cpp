#include<iostream>
#include <list>
#include <string>
using namespace std;

void showlist(list<string>p){
    std::list<string>::iterator it;
 for(it =p.begin();it!= p.end();it++){
    cout<<" . "<< *it <<endl;
 }
}

int main(){
    string nom;
    string prenom;
    string age;
    list<string> utilisateur;
    cout<<"rentrer le nom"<<endl;
    cin>>nom;
    utilisateur.push_back(nom);
    cout<<"rentrer le prenom"<<endl;
    cin>>prenom;
    utilisateur.push_back(prenom);
    cout<<"rentrer l'age"<<endl;
    cin>>age;
    utilisateur.push_back(age);
    cout<<"list trier"<<endl;
    utilisateur.sort();
    showlist( utilisateur);
   return 0;
 }  