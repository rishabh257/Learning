#include <iostream>
using namespace std;

int main() {
    
    cout << "Menu contents : " << endl;
    cout << "=============" << endl;
    cout << "1.Pizza" << endl;
    cout << "2.Burger" << endl;
    cout << "3.Chowmein." << endl;
    cout << "4.Chef's Special." << endl << endl;
 
    int input;
    cin >> input;
    
    switch(input)
    {
        case 1:
        cout << "Pizza out of stock. Apologies!";
        break;
        case 2:
        cout << "Pizza out of stock. Apologies!";
        break;
        case 3:
        cout << "Pizza out of stock. Apologies!";
        break;
        case 4:
        cout << "Chef's on Holiday. Have a Great Day :)";
        break;
        
        default:
        cout << "Please Order Correct Item." << endl;
    }
    
	return 0;
}
