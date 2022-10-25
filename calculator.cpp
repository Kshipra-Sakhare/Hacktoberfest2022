#include<iostream>
using namespace std;
int main(){
        int n1,n2;
        cout<<"Enter the two numbers:";
        cin>>n1>>n2;

        char op;
        cout<<"Choose the operator:";
        cin>>op;

        switch(op){
            case '+':
            cout<<n1+n2<<endl;
            break;

            case '-':
            cout<<n1-n2<<endl;
            break;

            case '*':
            cout<<n1*n2<<endl;
            break;

            case '/':
            cout<<n1/n2<<endl;
            break;

            default:
            cout<<"Enter the correct operator.";
            break;
        }
  return 0;
}
       
