#include <iostream>
using namespace std;
int main()
{
    int amount, dis, payable;

    cout<<"Enter the Shopping Amount: " << endl;
    cin>>amount;

    switch(amount/100) {
        case 0:
            dis = 0;
            cout<< "Your avail 0% Discount: " << dis << endl;
            payable = amount - dis;
            cout<<"Payable amount after discount :"<< amount <<" - "<<dis<<" : "<<payable <<" " <<endl;
            break;
        case 1:
            dis = (amount * 5)/100;
            cout<< "Your avail 5% Discount: " << dis << endl;
            payable = amount - dis;
            cout<<"Payable amount after discount :"<< amount <<" - "<<dis<<" : "<<payable <<" " <<endl;
            break;
        case 2:
            dis = (amount * 10)/100;
            cout<< "Your avail 5% Discount: " << dis << endl;
            payable = amount - dis;
            cout<<"Payable amount after discount :"<< amount <<" - "<<dis<<" : "<<payable <<" " <<endl;
            break;
        case 3:
            dis = (amount * 15)/100;
            cout<< "Your avail 5% Discount: " << dis << endl;
            payable = amount - dis;
            cout<<"Payable amount after discount :"<< amount <<" - "<<dis<<" : "<<payable <<" " <<endl;
            break;
        default:
            dis = (amount * 20)/100;
            cout<< "Your avail 15% Discount: " << dis << endl;
            payable = amount - dis;
            cout<<"Payable amount after discount :"<< amount <<" - "<<dis<<" : "<<payable <<" " <<endl;
            break;

    }
}
