#include <iostream>
using namespace std;
int main(){
    int a,b,c,i;
    cout<<"enter the 1st number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    if(a>b){
    c=b;
    }
    else{  
    c=a;
    }
    for (int i=c; i>0; i--)
    {
      if((a%i==0 && b%i==0)){
      cout<<"the required GCD is "<<i;
      break;
      }
    }
return 0;
}



    














    
