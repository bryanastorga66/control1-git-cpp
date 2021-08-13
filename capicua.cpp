#include<iostream>
using namespace std;
int main(){
 int num,aux,resto,ni=0;
 
 cout<<"Ingrese numero"<<endl;
 cin>>num;
 
 aux=num;
 
 while(aux>0){
         resto=aux%10;
      aux=aux/10;
      ni=ni*10+resto;
 }
 
 if(ni==num){
  cout<<"1";
 }
 else{
  cout<<"0";
  
 }
  return 0;
}
 