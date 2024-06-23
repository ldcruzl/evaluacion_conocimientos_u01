//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n1, n2, c, i;
    cout<<"ingrese dos numeros a comprobar: ";cin>>n1>>n2;
    c = 0;
    for(i=1; i<=n1&&i<=n2; i++){
        if(n1%i==0&&n2%i==0){
            c++;
        }
    }
    if(c>1){
        cout<<"No son pesi"<<endl;
    }
    else{
        cout<<"Son pesi"<<endl;
    }
    return 0;
}