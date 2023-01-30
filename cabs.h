// Travel Management System
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
    
class Cab{
    // Let the cost be per kilometer
    string type; // Luxury or Regular 
    double kilometers = 0, cost = 0;
    bool available = true; 
public :
    void setCab(){
        string type; double cost;
        cout<<"Enter type of car (Regular / Luxury) : "; cin>>type;
        cout<<"Enter cost per kilometer : "; cin>>cost;
        
        this->type = type;
        this->cost = cost;
    }

    void showDetails(){
        cout<<"Type of car (Regular / Luxury) : "<<type<<endl;
        cout<<"Cost per kilometer : "<<cost<<endl;
        cout<<"Kilometers used : "<<kilometers<<endl;
        cout<<"Available : "<<available<<endl;
    }

    double bookCab(double dist_kilo){
        if(available == false){
            cout<<"Cab not avaiable!\n";
            return 0.0;
        }

        double price = dist_kilo * cost;    
        available = false;
        cout<<type<<" Cab booked. Price : "<<price<<endl;
        kilometers += dist_kilo;

        return price;
    }
};