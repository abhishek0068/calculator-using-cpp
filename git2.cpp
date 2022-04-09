#include<iostream>
using namespace std;
int main(){
      int i,j;
      char k;
      cout<<"Welcome to calculator\n";
      cout<<"Enter a number\n";
      cin>>i;
      cout<<"Enter the operator\n";
      cin>>k;
      cout<<"Enter another number\n";
      cin>>j;
      if(k=='+'){
             cout<<i+j;
      }
      else if(k=='-'){ 
             cout<<i-j;
      }
      else if(k=='/'){
             cout<<i/j;
      }
      else if(k=='*'){
             cout<<i*j;
      }
}
