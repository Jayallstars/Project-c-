#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class Bank {
    private:
        bool flag = false;
    	  char qt_menu;
        char name[20];
        char nameAcc[20];
        char accType[20];
        int initial = 0, deposit = 0, withdraw = 0;
    public:
    Bank () {
        name[20] = ' ';
        nameAcc[15] = ' ';
        accType[10] = ' ';
        }
        void menu();
        void create();
        void depo();
        void check();
        void withd();
        void display();
};

void Bank::menu() {
  int choice;
  cout << "*************************************************************" << endl;
  cout << endl;
  cout << "\n\t BANK MANAGEMENT SYSTEM  \n\n" << endl;
  cout << "\t Choose from menu below : " << endl;
  cout << "\t 1.Create account : " << endl;
  cout << "\t 2.Deposit balance : " << endl;
  cout << "\t 3.Check balance : " << endl;
  cout << "\t 4.Withdraw balance : " << endl;
  cout << "\t 5.Account deatail : " << endl;
  cout << "\t 6.Exit : " << endl;
  cout << endl;
  cout << "*************************************************************" << endl;
  cout << endl;
  cout << "\tYour choice : ";
  cin >> choice;

  if (choice == 1) {
        create();
  }
  else if (choice == 2) {
        depo();
  }
  else if (choice == 3) {
        check();
  }
  else if (choice == 4) {
        withd();
  }
  else if (choice == 5) {
        display();
  }
  else if (choice == 6) {
        exit(0);
  }
}

void Bank::create() {
    cout << "\n\t Enter name : ";
    cin >> name;
    cout << "\n\t Ente account name : ";
    cin >> nameAcc;
    cout << "\n\t Enter account type : ";
    cin >> accType;
    cout << endl;
    cout << "\tSuccess to Create Account!\n";
    cout << "\tYou can exit to menu pls press 'q' : ";
    cin >> qt_menu;
    cout << endl;
  	if (qt_menu == 'q') {
    		menu();
  	}
}

void Bank::depo() {
    cout << "\n\t Enter deposti amount TH/Bath : ";
    cin >> deposit;
    flag = true;
    cout << endl;
    cout << "\tSuccess to Deposit!\n";
    cout << "\tYou can exit to menu pls press 'q' : ";
    cin >> qt_menu;
    cout << endl;
  	if (qt_menu == 'q') {
    		menu();
  	}
}

void Bank::check() {
    if (flag == true) {
          initial += deposit;
          cout << "\n\tTotal available fund : " << initial << endl;
          cout << endl;
          flag = false;
    } else {
          cout << "\n\tTotal available fund : " << initial << endl;
          cout << endl;
          flag = false;
    }
    cout << "\tSuccess to Check Balance!\n";
    cout << "\tYou can exit to menu pls press 'q' : ";
    cin >> qt_menu;
    cout << endl;
  	if (qt_menu == 'q') {
    		menu();
  	}
}

void Bank::withd() {
    cout << "\n\t Enter withdraw amount TH/Bath : ";
    cin >> withdraw;
    cout << endl;
    cout << "\tSuccess to Withdraw!\n";
    cout << "\tYou can exit to menu pls press 'q' : ";
    cin >> qt_menu;
    cout << endl;
  	if (qt_menu == 'q') {
    		menu();
  	}
}

void Bank::display() {
    cout << "\t TRANSACTION DETAIL : " << endl;
    cout << "\t Name : " << name << endl;
    cout << "\t Account Number : " << nameAcc << endl;
    cout << "\t Account Type : " << accType << endl;
    cout << "\t Total deposit : " << initial << endl;
    cout << "\t Total withdraw : " << withdraw << endl;
    cout << "\t Available now : " << initial - withdraw << endl;
    cout << "\tSuccess to Display Account Deatails\n";
    cout << "\tYou can exit to menu pls press 'q' : ";
    cin >> qt_menu;
    cout << endl;
  	if (qt_menu == 'q') {
    		menu();
  	}
}
 
int main() {

    Bank B;
    B.menu();
    return 0; 
}
