#include<iostream>
#include<string.h>
using namespace std;

class savingbank{
private:string username ;
int accountno;
double blance;
double intrestrate;


public:savingbank(string name,int accno,double inblance,double rate){
  username=name;
  accountno=accno;
  blance=inblance;
  intrestrate=rate;

}
void deposit(double amount){
 if(amount>0){
blance+=amount;
cout<<"deposit"<<amount<<endl;
}

}
void withdraw(double amount){
if(amount>0&&amount>=blance){
blance-=amount;
cout<<"Withdro amount is$"<<amount<<endl;
}else{
cout<<"insadfg"<<endl;
}
}
void intrest(){
double intrest=blance*intrestrate/100;
blance+=intrest;
cout<<"intrest amount is$"<<intrest<<endl;

}
void display(){
cout<<"[saving account ]"<<endl;
cout<<" amount holder is$"<<username<<endl;
cout<<"amount is$"<<accountno<<endl;
cout<<"acunt blance amount is$"<<blance<<endl;


}

};

class cheakingaccount{
private:string username ;
int accountno;
double blance;
double trafee;


public:cheakingaccount(string name,int accno,double inblance,double fee){
  username=name;
  accountno=accno;
  blance=inblance;
  trafee=fee;

}
void deposit(double amount){
 if(amount>0){
blance+=amount;
cout<<"deposit"<<amount<<endl;
}

}
void withdraw(double amount){
double total=amount+trafee;
if(total<=blance){
blance-=total;
cout<<"Withdro amount is$"<<amount<<"(transation fee)"<<endl;
}else{
cout<<"insadfg"<<endl;
}
}

void display(){
cout<<"[cheaker  account ]"<<endl;
cout<<" amount holder is$"<<username<<endl;
cout<<"amount is$"<<accountno<<endl;
cout<<"acunt blance amount is$"<<blance<<endl;
cout<<"transatation fee$"<<trafee<<endl;

}

};

int main(){
savingbank sav("aline",1001,5000.0,3.0);
cheakingaccount che("bob",1002,3000.0,20.0);

sav.display();
sav.deposit(1000);
sav.withdraw(2000);
sav.intrest();
sav.display();

che.display();
che.deposit(1500);
che.withdraw(1000);
che.display();


}

