#include<iostream>
using namespace std;
class Bank
{
    public:
    int ATM_pin;
    int pin;
    int cash;
    int balance=10000;
    int mobile_number;
    // int code;
  
 

    void account()
    {   
  
    cout << "ENTER PIN NUMBER : ";
    cin >> ATM_pin;
    cout << endl;
    if (ATM_pin == 0000)
    {
      cout << "*****SHAILJA*****" << endl
           << endl;
    }
    else
    {
      cout << "exit" << endl;
    }
  
    }
    void pin_n()
  {
    cout << "------WELLCOME TO SBI ------";

    cout << "ENTER THE MOBILE NUMBER : ";
    cin >> mobile_number;
    
  }
  void withdrawal()
  {
    cout << "------WELLCOME TO SBI ------" << endl
         << endl;
    cout << "----ENTER YOUR ATM CARD----" << endl;

    cout << "ENTER THE AMOUNT : ";
    cin >> cash;
    cout << "ENTER PIN NUMBER : ";
    cin >> ATM_pin;
    if (balance-=cash)
    {
      cout << "BALANCE IS : " << balance;
    }
    else
    {
      cout << balance;
    }
  }
  void deposit()
  {
    cout << "------WELLCOME TO SBI ------" << endl
         << endl;
    cout << "----ENTER YOUR ATM CARD----" << endl
         << endl;

    cout << "ENTER PIN NUMBER : ";
    cin >> ATM_pin;
    cout << "ENTER THE AMOUNT : ";
    cin >> cash;

    if (balance+=cash)
    {
      cout << "BALANCE IS : " << balance;
    }
    else
    {
      cout << balance;
    }
  }
  void exit()
  {

    cout << "------THANKS FOR VISIT------";
  }

};
int main()
{
    class Bank b;
  cout << "\t--------------SBI BANK----------------" << endl
       << endl;
       int number;
  do
  {
    cout << endl
         << "1 : ACOUNT " << endl
         << endl;
    cout << "2 : CREAT PIN NUMBER " << endl
         << endl;
    cout << "3 : CASH WITHDRAWAL " << endl
         << endl;
    cout << "4 : CASH DEPOSIT" << endl
         << endl;
    cout << "5 : EXIT" << endl
         << endl;
    cout << "select number : ";
    cin >> number;

    switch (number)
    {
    case 1:
      b.account();
      break;

    case 2:
      b.pin_n();
      break;

    case 3:
      b.withdrawal();
      break;

    case 4:
      b.deposit();
      break;

    case 5:
      b.exit();
      break;
    }
  } while (number != 5);
    return 0;
}