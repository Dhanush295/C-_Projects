#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
    string Roll_No, Name;
    int Fee;

public:
    Student(string roll_no, string name, int fee) {
        Roll_No = roll_no;
        Name = name;
        Fee = fee;
    }
    string getName() {
        return Name;
    }
    string getRoll_no() {
        return Roll_No;
    }
    int getFee() {
        return Fee;
    }
};

class Fee_Inquiry {

    vector<Student> ve;

public:
    void add(string rn, string nm, int fee) {
        Student student(rn,nm,fee);
        ve.push_back(student);
    }

    void feeStatus() {
        string rn;
        cout<<"Enter Student Roll Number: " <<endl;
        cin>>rn;

        for(int i=0; i< ve.size(); i++) {
            if(rn == ve[i].getRoll_no()) {
                cout<<"Roll No of Student:  "<< rn <<endl;
                cout<<"Name of student: "<< ve[i].getName() << endl;;
                cout<<"Total Fee of student : " << ve[i].getFee() <<" per month "<<endl<<endl;

            }
        }
    }


};



int main()
{
    Fee_Inquiry fee_In;
    fee_In.add("1", "Dha", 2000);
    fee_In.add("2", "Dee", 3000);
    fee_In.add("3", "Shahsh", 1000);
    fee_In.add("4", "Srii", 1500);
    fee_In.add("5", "Gangam", 200);

    int choice;

    cout<<"Enter '1' for Fee Inquiry: "<< endl;
    cout<<"Enter '2' to exit: "<< endl;
    cout<<"Enter your choice: " <<endl; cin>>choice;

    switch(choice) {
        case 1: {
            fee_In.feeStatus();
            break;
        }

        case 2: {
            exit(0);
            break;
        }
        default: {
            cout<<"Invalid Choice! "<<endl;
        }
    }

    return 0;
}
