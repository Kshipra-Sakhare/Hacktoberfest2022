#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int num;
    cout<<"Enter the number:";
    cin>>num;
    int sum=0;
    int original_num=num;
    while(num>0){
        int lastdigit=num%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        num=num/10;
    }
    if(sum==original_num){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<sum;
        cout<<"Not an armstrong number"<<endl;
    }
return 0;
}


