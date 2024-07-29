#include <iostream>
#include<vector>
using namespace std;


struct sale {
    string name;
    int price, quantity;
};
int i;
sale sl;
vector <sale> item;

int main() {
    while(true) {
        int val;
        cout<<"1. Add items: " << endl;
        cout<<"2. Search items: " << endl;
        cout<<"3. Sold items: " << endl;
        cout<<"4. Show all items: " << endl;
        cout<<"0. for Exit  " << endl;

        cout << "Enter value here: " << endl; cin>>val;

        if(val == 1) {
            int choice;
            do {
                cout<<"Name: "; cin>>sl.name;
                cout<<"Price: "; cin>>sl.price;
                cout<<"quantity: "; cin>>sl.quantity;
                item.push_back(sl);
                cout<<"Saved Successfully! "<<endl;
                cout<<"Enter 1 to continue or 0 to exit: " << endl;
                cin>>choice;

            }
            while(choice !=0 && choice==1) ;
        }// if

        else if (val == 2) {
            string item_name;
            cout<< "Enter name to search item: "<< endl;
            cin>>item_name;

            for(i=0; i< item.size(); i++) {
                if(item_name == item[i].name) {
                    cout<<"Name: " << item[i].name << endl;
                    cout<<"Price: " << item[i].price << endl;
                    cout<<"quantity: " << item[i].quantity << endl;

                }
            }


        }
        else if (val == 3) {
            string item_name;
            cout<< "Enter name to search item: "<< endl;
            cin>>item_name;

            for(i=0; i< item.size(); i++) {
                if(item_name == item[i].name) {
                    int q;
                    cout<<"Enter the sold quantity: "<< endl;
                    cin>> q;

                    item[i].quantity -= q;
                    cout << "The remaing quantity of " << item[i].name << " is : "<< item[i].quantity<< endl;

                }
            }
        }
        else if(val == 4) {
            if(item.empty()) {
                cout<<"No product in the inventory! "<< endl;
            }
            for(i=0; i< item.size(); i++) {
                cout<<"Name: " << item[i].name << endl;
                cout<<"Price: " << item[i].price << endl;
                cout<<"quantity: " << item[i].quantity << endl;
            }
        }
        else if (val == 0) {
            exit(0);
        }
        else {
            cout << "Invalid Entry: " <<endl;
        }

    }


}
