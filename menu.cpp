#include <iostream>
#include <windows.h> // Assuming you have this for SetConsoleTextAttribute

using namespace std;

int choice; // Declare choice globally or pass it as a parameter to the function
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void correction(int choice) {
    // Implement correction logic if needed
}

void Admin() {
    // Implement Admin logic
}

void RegularUser() {
    // Implement RegularUser logic
}

void getUsername() {
    // Implement getUsername logic
}

void Exit() {
    // Implement Exit logic
}

int menu() {
    char op = 'y';
    while (op == 'y') {
        SetConsoleTextAttribute(h, 9);

        cout << "Enter 1 for Admin" << endl;
        cout << "Enter 2 for regular User" << endl;
        cout << "Enter 3 for exit !" << endl;
        cout << "Enter your choice\n";
        SetConsoleTextAttribute(h, 2);
        cin >> choice;
        // if(choice=="a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z")
        correction(choice);
SetConsoleTextAttribute(h, 3);
        if (choice == 1) {
            cout << "******************** Welcome to Admin******************\n";
            Admin();
            getUsername();

        } 
       
        else if (choice == 2) {
             SetConsoleTextAttribute(h, 4);
            cout << "***************** Welcome as Regular User ******************\n";
            RegularUser();
        } else if (choice == 3) {
             SetConsoleTextAttribute(h, 40);
            cout << "You have exited the program.\n";
            Exit();
            break;
        }
 SetConsoleTextAttribute(h, 6);
        cout << "Want to Continue Yes or No:" << endl;
        cin >> op;
    }
    return 0;
}

int main() {

    menu();
    return 0;
}
