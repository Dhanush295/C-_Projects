#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Hostel {
    string name;
    int roll_num;
    int bed;
    vector <Hostel> vec;

public:
    Hostel(string nme, int rn) {
        name = nme;
        roll_num = rn;
        bed = 0;
    }

    bool bedStatus() {
        if(bed < 3) {
            bed ++;
            return true;
        }
        return false;
    }

    void add(string nm, int rn) {
        Hostel hostel(nm, rn);
        vec.push_back(hostel);
        allocation();
    }

    void allocation() {
        if(bedStatus() == true) {
            cout<< "You Have allocated Bed in hostel "<< endl << endl;

        }
        else {
            cout<<"Hostel is full!"<< endl<<endl;
        }
    }
    void remove() {
        int roll_n;
        cout << "Enter roll no for remove student: "<< endl;
        cin>>roll_n;

        for(int i=0; i<vec.size(); i++) {
            if(roll_n == vec[i].roll_num) {
                cout<<"Name: " <<vec[i].name;
                cout<<"Roll Number: "<< roll_n;

                vec.erase(vec.begin()+ i);
                cout<<"Sudent removed from Hostel" <<endl;
            }
        }
    }

    void display() {
        for(int i=0; i<vec.size(); i++) {
            cout<<"Name: " <<vec[i].name;
            cout<<"Roll Number: "<< vec[i].roll_num;
        }
    }

};

int main() {
    string n; int r;

    Hostel hostel(n, r);

    cout<<"_______Student Hostel_________"<<endl;
    cout<<"--------------------------------"<<endl;
    while(true) {
        int choice;
        cout<<"Enter 1 for add student to hostel" << endl;
        cout<<"Enter 2 for remove student from hostel " << endl;
        cout<<"Enter 3 for display students in hostel " << endl;
        cout<<"Enter 0 to exit program " << endl;
        cout<<"Enter Choice: " <<endl;
        cin>> choice ;

        if(choice == 1) {
            cout<<"Enter Student Name: "<< endl; cin>>n;
            cout<<"Enter Student Roll Number: "<<endl; cin>>r;
            hostel.add(n,r);
        }
        else if(choice == 2) {
            hostel.remove();
        }
        else if(choice == 3) {
            hostel.display();
        }
        else if(choice == 0) {
            exit(0);
        }
        else {
            cout<<"Invalid entry! "<< endl;
        }
    }

    return 0;
}
