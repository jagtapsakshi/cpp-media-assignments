#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum=0;
    int a=1, b=1;

    for(int i=1; i<=n;i++){
        sum = a+b;
        a=b;
        b = sum;
        cout<<b<<endl;
    }
    cout<<endl;

}


