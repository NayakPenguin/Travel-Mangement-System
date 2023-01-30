// Travel Management System
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "cabs.h"

using namespace std;
    
int main(){
    Cab c1;
    c1.setCab();
    c1.showDetails();
    c1.bookCab(11.2);
    c1.showDetails();
    c1.bookCab(4.35);
    c1.showDetails();

    return 0;
}