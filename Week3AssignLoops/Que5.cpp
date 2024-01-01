#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter x:";
    cin>>x; 
    int ld;
    int sum=0;
    while(x>0){

        ld=x%10;  
        if(ld%2==0) sum+=ld;
        
        x=x/10;
       
    }
    cout<<sum;
}

