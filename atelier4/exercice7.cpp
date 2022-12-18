#include<iostream>
using namespace std;
class Point{
private:
double x;
double y;
protected:
string nom;
public:
Point(){
double x=(0.0);
double y=(0.0) ;
string nom="";
}
double getx(){
return x;
}
void setx(double X){
x=X;
}
double gety(){
return y;
}
void sety(double Y){
y=Y;
}
string getnom(){
return nom;
}
void setnom(double NOM){
nom=NOM;
}
void afficher(){
    cout<<"la valeur de x est :"<<x<<endl;
    cout<<"la valeur de y est :"<<y<<endl;
    cout<<"le nom est :"<<nom<<endl;
}};
class PointCouleur : public Point{
private:
unsigned int couleur ;
public:
PointCouleur(){
double x=(0.0);
double y=(0.0) ;
string nom="";
unsigned int couleur = 0;
}
unsigned int getcouleur(){
return couleur;
}
void setcouleur(unsigned int Couleur){
couleur=Couleur;
}
void afficher(){
    cout<<"la couleur est :"<<couleur<<endl; 
}

};