#include<iostream>
#include<iterator>
#include<set>
using namespace std;

bool recherche(set<int,greater<int> > s, int r){  
set<int, greater< int > >::iterator itr;
for(itr = s.begin();itr != s.end() && *itr != r;itr++){
    if(*itr == r){
        return true;}
    else{
       return false;
        }
}
return 0;
}

template<class T> T recherche(T s, int r){  
set<int, greater< int > >::iterator itr;
for(itr = s.begin();itr != s.end() && *itr != r;itr++){
    if(*itr == r){
        cout<<"existe";}
    else{
       cout<<"n'existe pas";
        }}
}


void showset(set<int,greater<int> > s){
 set<int, greater< int > >::iterator itr;
 for(itr= s.begin() ; itr!= s.end() ; itr++){
    cout<< *itr <<" ";
 }

}
int main()
{
    int r;
set<int, greater<int> > s;
for(int i=1;i<=100;i++){
    s.insert(i);
}
showset(s);
cout<<endl<<"donner la valeur a chercher"<<endl;
cin>>r;
recherche(s,r);
return 0;
}