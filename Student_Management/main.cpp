#include <iostream>
using namespace std;

void ClearScreen() {
#if defined _WIN32
    system("cls");
#else
    system("clear");
#endif
}


int i, no_student;
string name[30], roll_no[30], className[30], subject[30];

void add() {
    cout<<"Enter number of students: " << endl;
    cin>> no_student;

    for(i=0; i< no_student; i ++ ) {
        cout<<"Enter information about students!"<< i+1 << endl;
        cout<<"Enter Name no of students"<< i+1 << endl;  cin>>name[i];
        cout<<"Enter Roll Number of students"<< i+1 << endl;  cin>>roll_no[i];
        cout<<"Enter Class of students"<< i+1 << endl;  cin>>className[i];
        cout<<"Enter Subject of students"<< i+1 << endl;  cin>>subject[i];

        cout<<endl;
    }
}

void show() {
    for(i=0; i < no_student; i++) {
        cout<< i+1 <<" Student Name: "<< name[i] << endl;
        cout<< i+1 <<" Student Roll Number: "<< roll_no[i] << endl;
        cout<< i+1 <<" Student Class: "<< className[i] << endl;
        cout<< i+1 <<" Student Subject: "<< subject[i] << endl;

        cout<<endl;
    }
}

void findStd() {
    string roll_num;
    cout <<"Enter student roll no be get student information: " << endl;
    cin>> roll_num;

    for(i=0; i<no_student; i++) {
        if(roll_num == roll_no[i]) {
            cout<< i+1 <<" Student Name: "<< name[i] << endl;
            cout<< i+1 <<" Student Roll Number: "<< roll_no[i] << endl;
            cout<< i+1 <<" Student Class: "<< className[i] << endl;
            cout<< i+1 <<" Student Subject: "<< subject[i] << endl;

            cout<<endl;
        }
    }

}

void update() {
    string roll_num;
    cout <<"Enter student roll no be get student information: " << endl;
    cin>> roll_num;

    for(i=0; i<no_student; i++) {
        if(roll_num == roll_no[i]) {
            cout<< i+1 <<" Student Name: "<< name[i] << endl;
            cout<< i+1 <<" Student Roll Number: "<< roll_no[i] << endl;
            cout<< i+1 <<" Student Class: "<< className[i] << endl;
            cout<< i+1 <<" Student Subject: "<< subject[i] << endl;

            cout<<endl;
        }
    }

}

void del() {

    string roll_num;
    cout <<"Enter student roll no to delete student information: " << endl;
    cin>> roll_num;

    for(i=0; i<no_student; i++) {
        if(roll_num == roll_no[i]) {
            no_student = 0;
            cout<<endl;
        }
    }

}


int main()
{
    int val;
    while(true) {
        cout<<"Enter 1 to add information about student: " << endl;
        cout<<"Enter 2 to show information about student: " << endl;
        cout<<"Enter 3 to search information about student: " << endl;
        cout<<"Enter 4 to update information about student: " << endl;
        cout<<"Enter 5 to delete information about student: " << endl;
        cout<<"Enter 0 to exit program: " << endl;

        cin>> val;

        switch(val) {
            case 1:
                add();
            break;
            case 2:
                show();
            break;
            case 3:
                system("clear");
            findStd();
            break;

            case 4:
                system("clear");
            update();
            break;

            case 5:
                system("clear");
            del();
            break;

            case 0:
                exit(0);
            break;

            default:
                cout<<"Enter value does not exist!" << endl;
        }
    };

    return 0;
}
