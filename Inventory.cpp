nclude <iostream>
#include <string>
#include <vector>
using namespace std;

class Item {
    private:
        int itemId;
        string itemName;
        int cost;
        int rating;
        bool fragile;
    public:
        void setCost(int c) {
        cost = c;
    }
        int getCost() {
        return cost;
    }

};

class Customer {
    private:
        int identificationNum;
        string name;
        string username;
        string password;
        string contactNumber;
    public:
        //getter
        int getID(){
            return identificationNum;
        }
        //setter
        void setID(int iD){
            identificationNum = iD;
        }
        string getName(){
            return name;
        }
        void setName(string n){
            name = n;
        }
        string getUsername(){
            return username;
        }

        void setUsername(string u){
           username = u;
        }
        string getPassword(){
            return password;
        }
        void setPassword(string p){
            password = p;
        }
        string getContactNumber(){
            return contactNumber;
        }
        void setContactNumber(string c){
            contactNumber = c;
        }
};

class Manager {
    private:
        string username;
        string password;
};




void adminMenu(){
    while(true){
        int option;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|            Welcome to Administrator Menu !         |" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|                 1- Manage Managers                 |" << endl;
        cout << "|                 2- Manage Customers                |" << endl;
        cout << "|                 3- Return                          |" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Please Choose an option (1-3): "; cin >> option;
        switch(option){
            case 1:
                cout << "managers - cont.." << endl;
                return;
            case 2:
                cout << "Customers - cont.." << endl;
                return;
            case 3:
                return;
            default:
                cout<<"Please select a valid option! \n";
                break;
        }
    }
}

int main (){
    while (true){
        int option;
        string username;
        string password;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|       Welcome to Ahmed's Management System !       |" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|             1- ADMINISTRATOR LOGIN                 |" << endl;
        cout << "|             2- SALES MANAGER LOGIN                 |" << endl;
        cout << "|             3- CUSTOMER LOGIN                      |" << endl;
        cout << "|             4- EXIT PROGRAM                        |" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Please Choose an option (1-4): "; cin >> option;
        switch(option){
            case 1: //admin
                cout << "Please enter username: "; cin >> username;
                cout << "Please enter password: "; cin >> password;
                if(username == "admin" && password == "admin"){
                    adminMenu();
                }else{
                    cout<<"Invalid username or password! \n";
                    break;
                }
                break;
            case 2: // manager
                cout << "Please enter username: "; cin >> username;
                cout << "Please enter password: "; cin >> password;
                if(username == "sales" && password == "sales"){
                    // salesMenu();
                }else{
                    cout<<"Invalid username or password! \n";
                    break;
                }
                break;
            case 3: // customer
                cout << "Please enter username: "; cin >> username;
                cout << "Please enter password: "; cin >> password;
                if(username == "customer" && password == "customer"){
                    // customerMenu();
                }else{
                    cout<<"Invalid username or password! \n";
                    break;
                }
                break;
            case 4:
                exit(0);
                break;
            default: // invalid
                cout<<"Please select a valid option! \n";
                break;
        }
    }
}
