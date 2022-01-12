#include"Package.h"
#include"Gpo.h"
#include"Postoffice.h"
#include<iostream>
#include<fstream>
using namespace std;
int main(){

    cout<<"<<<WELCOME TO PAKISTAN POSTAL SERVICE>>>"<<endl;
    GPO administrator("Hussain");
    Employee*emps[4] = {
        new Employee("Ibrahim", 01, administrator),
        new Employee("Akif", 02, administrator),
        new Employee("Azmir", 03, administrator),
        new Employee("Zafar", 04, administrator)
    };
    int what_are_yu, employee_ID, cra = 0, i;
    string employee_name;
    cout<<"Enter\n1) if you are an employee\n2) if you are a customer\n3) if you are a GPO"<<endl;
    cin>>what_are_yu;
    if(what_are_yu == 1){
    cout<<"enter the employee name of yours>>:"<<endl;
    cin>>employee_name;
    cout<<"enter the employee ID>>>:"<<endl;
    cin>>employee_ID;
    for(i=0; i<4; i++){
        if(emps[i]->Login(employee_name, employee_ID)){
            cout<<"welcome to the system mr"<<emps[i]->getnem()<<endl;
            cra++;
        }
    }
    if(cra == 0){cout<<"Wrong ID or name>>"<<endl;}
    else{
        int chooser;
        cout<<"what would yu like to do today>>?"<<endl;
        cout<<"1) enter package data\n 2)get package data 3)none of the above"<<endl;
        cin>>chooser;
        if(chooser == 1){administrator.setter();}
        else if(chooser == 2){
            // lets write a function for this
        }
    }
    }
    else if(what_are_yu == 2){
    int cho, customer_ID = 0;
    string nam;
    ofstream cust;
    cust.open("customer.txt", ios::app);
    cout<<"<<<WELCOME DEAR CUSTOMER>>>"<<endl;
    cout<<"please enter your name>>:"<<endl;
    cin>>nam;
    customer_ID++;
    cust<<"name of customer : ";
    cust<<nam;
    cust<<"customer ID :";
    cust<<customer_ID;
    cust.close();
    cout<<"enter the Employee you want to talk to:"<<endl;
    cout<<"1) "<<emps[0]->getnem()<<"\n"<<"2) "<<emps[1]->getnem()<<"\n"<<"3) "<<emps[2]->getnem()<<"\n"<<"4) "<<emps[3]->getnem()<<endl;
    cin>>cho;
    administrator.setter();
    }
    else if(what_are_yu == 3){
        int blaa;
        cout<<"do you want to 1) add data\n2) sort data"<<endl;
        cin>>blaa;
        if(blaa == 1){
            administrator.setter();
        }
        else if(blaa == 2){
        administrator.sorter();
        }
    }
    return 0;
}