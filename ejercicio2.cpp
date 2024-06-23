//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n1, n2, c, i;
    cout<<"ingrese dos numeros a comprobar: ";cin>>n1>>n2;
    c = 0;
    i = 1;
    while(i<=n1&&i<=n2){
        if(n1%i==0&&n2%i==0){
            c++;
        }
        i++;
    }
    if(c>1){
        cout<<"No son pesi"<<endl;
    }
    else{
        cout<<"Son pesi"<<endl;
    }
    return 0;
}