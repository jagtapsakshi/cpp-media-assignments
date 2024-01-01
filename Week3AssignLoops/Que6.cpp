#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    int reverse=0;
    int ld=0 ; 
    int sum;
    int a = x;
    while(x>0){  
        reverse = reverse*10; 
        ld = x%10;   
        reverse+=ld;
        x=x/10;      
        
    }
    sum= reverse + a ;
    cout<<sum<<" ";
    cout<<"["<<a<<"+"<<reverse<<"]";
}


