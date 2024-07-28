#include <iostream>
#include <string>

struct Package {
    std::string dest, sDate, eDate;
    int price;
};

void DisplayTour(Package pack) {
    std::cout<<"Destination: " << pack.dest << std::endl;
    std::cout <<"Start Date: " << pack.sDate << std::endl;
    std:: cout <<"End Date: " << pack.eDate << std::endl << std::endl ;

}

int main()
{
    Package pack1{"1. Long Beach", "07/24/2024", "08/01/2024" , 20000};
    Package pack2{"2. Shimoga", "05/29/2023", "06/20/2023", 1000000};
    Package pack3{"3. Bangalore", "03/23/2024", "04/22/2024", 250000};


    std::cout<< "--------Tour Packages---------" << std::endl;
    DisplayTour(pack1);
    DisplayTour(pack2);
    DisplayTour(pack3);


    int choice;

    std::cout<<"Enter the tour package no: " << std::endl;
    std::cin>> choice;

    if(choice == 1) {
        system("clear");
        std::cout<< "You have Selected the 1st Package" << std::endl;
        DisplayTour(pack1);
    }
    else if(choice == 2) {
        system("clear");
        std::cout<<"You have Selected the 2nd Package" << std::endl;
        DisplayTour(pack2);
    }
    else if (choice == 3) {
        system("clear");
        std::cout<<"You have Selected the 3nd Package" << std::endl;
        DisplayTour(pack3);
    }




    return 0;
}
