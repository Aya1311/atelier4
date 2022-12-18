#include<iostream>
#include <list>

using namespace std;
void showlist(list<int>entier){
    std::list<int>::iterator it;
 for(it =entier.begin();it!= entier.end();it++){
    cout<<" . "<< *it <<endl;
 }
}

int main(){
    int e;
    list<int> entier;
    for (int i=1;i<=4;i++){
          cout<<"rentrer l'entier"<<i<<endl;
          cin>>e;
          entier.push_back(e);
    }
     showlist(entier); 
    cout<<"list trier"<<endl;
    entier.sort();
   showlist(entier); 
   return 0;
 }   