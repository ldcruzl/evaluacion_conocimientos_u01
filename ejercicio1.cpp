//CRUZ LLICA, LUis David

#include<iostream>
#include<string>
using namespace std;

int main(){
    float a, b;//a y b seran los numeros a operar
    char op=0;//operacion a realzar,+ - * /
    do{
        cout<<"ingrese dos numeros a operar: ";cin>>a>>b;
        system("cls");//se implemento un menu para una visualizacion de las opciones
        cout<<"Menu de opciones"<<endl;
        cout<<"+: sumar los datos"<<endl;
        cout<<"-: restar los datos"<<endl;
        cout<<"*: multiplicar los datos"<<endl;
        cout<<"/: dividir los datos"<<endl;
        cout<<"0: salir del programa"<<endl;
        cout<<"Selecione una opcion: ";cin>>op;
        switch(op){
            case '+':
                cout<<"La sumatoria es: "<<a+b<<endl;
                system("pause");
                break;
            case '-':
                cout<<"La resta es de: "<<a-b<<endl;
                system("pause");
                break;
            case '*':
                cout<<"El producto es de: "<<a*b<<endl;
                system("pause");
                break;
            case '/':
                if(b!=0){
                    cout<<"La division es de: "<<a/b<<endl;
                }
                else{
                    cout<<"Resultado invalido"<<endl;//la disivion vendra a ser invalida
                }
                system("pause");
                break;
        }
    }while(op!='0');
    return 0;
}