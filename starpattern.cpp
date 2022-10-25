#include<iostream>
using namespace std;
int main(){
    int num,i,j;
    cout<<"Enter the number:";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=num;i>=1;i--){
        for(j=1;j<=num-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
return 0;
}

