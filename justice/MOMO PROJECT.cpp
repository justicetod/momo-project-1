#include <iostream>

using namespace std;

int main(){

const int defaultpin=0000;
int attempts=0;
int select;
float reference;
char option;
char Y;
char N;
int number;
float amount;
int pin;
int new_pin;
float balance,counter;
string digits;
balance=1000;

cout<<"main menu"<<endl;
cout<<"1.check balance"<<endl;
cout<<"2.reset pin"<<endl;
cout<<"3.send"<<endl;
cin>>select;

if(select==1)

do{

cout<<"please enter your 4 digit pin"<<endl;
cin>>pin;
attempts++;
if(pin!= defaultpin){
cout<<"incorrect pin. try again"<<endl;
}
else if(pin==defaultpin){
cout<<"your balance is 1000"<<endl;
}
  }while(pin!=defaultpin &&attempts<3);

 else if(attempts >3){
        cout<<"maximum attempts reached"<<endl;
  cout<<"existing program"<<endl;
  }
  switch(pin){
      break;
  }

 if(select==2){

  cout<<"are you sure you want to reset pin"<<endl;
  cout<<"choose Y/N"<<endl;
  cin>>option;
  if(option==Y){
    cout<<"enter new pin"<<endl;
    cin>>new_pin;
    pin==new_pin;
    cout<<"your new pin is"<<new_pin;
  }
 }
 else if(select==3){
        cout<<"enter mobile number"<<endl;
       cin>>number;
       cout<<"enter amount to transfer"<<endl;
       cin>>amount;
       cout<<"transfer "<<amount<<" to "<<number<<endl;
       cout<<"enter reference"<<endl;
       cin>>reference;
       cout<<"enter your pin: "<<endl;
       cin>>pin;
       do{

            attempts++;
       if(pin !=defaultpin){
            cout<<"incorrect pin.please try again"<<endl;
       }
       else if(pin==defaultpin){
        cout<<"you have successfully sent "<<amount<<" to"<<number<<endl;
       cout<<"your current balance is"<<balance-amount<<endl;
       }
 }while(pin !=defaultpin && attempts>3);
 if(attempts>3){
        cout<<"maximum attempts reached.";
 cout<<"existing program."<<endl;
 }
 switch(pin){
 
 break;
}

}









    return 0;
}
