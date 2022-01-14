#include<iostream>
using namespace std;
void withdraw(int balance);
void checkbalance(int balance);
void deposit(int balance);
int main(){
    int balance=100000,choice;
    cout<<"Automated Teller Machine"<<endl;
    cout<<"1.Check Balance"<<endl<<"2.Withdraw money"<<endl<<"3.Deposit Money"<<endl<<"4.Exit."<<endl;
    in:
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice){
        case 1:
            checkbalance(balance);
             break;
        case 2:
             withdraw(balance);
             break;
        case 3:
             deposit(balance);
             break;
        case 4:
             break;
        default:
             cout<<"Enter valid option."<<endl;
             goto in;                    
    }
}

void withdraw(int balance){
    int amount;
    cout<<"Enter the amount:";
    cin>>amount;
    if(amount>balance){
        cout<<"Transaction Failed.Don't have enough balance"<<endl;
    }
    else{
        cout<<"Your amount Rs."<<amount<<" has been withdrawn"<<endl;
    }
    cout<<"Your account has balance of Rs."<<(balance-amount);
}

void checkbalance(int balance){
    cout<<"Your account has balance of Rs.:"<<balance;
}

void deposit(int balance){
    int amount;
    cout<<"Enter the amount:";
    cin>>amount;
    cout<<amount<<" has been deposited in your account."<<endl;
    cout<<"Your account has a balance of Rs."<<(balance+amount);
}