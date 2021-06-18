#include<iostream>
using namespace std;

int main()
{
    
    int values[84];
    
    values[0] = 55;
    values[1] = 93;
    values[2] = 84;
    values[3] = 75;
    
    cout << "Array of Integers" << endl;
    cout << "=================" << endl;
    
    for(int i=0; i<4; i++)
    {
        cout << "Value of element " << i << " is : " << values[i] << endl;
    }
    
    double numbers[4] = {4.5,2.3,7.2,8.3};
    
    cout << endl << "Array of Doubles" << endl;
    cout << "================" << endl;
    
    for(int i=0; i<4; i++)
    {
        //numbers[i] = 88; overwrites every value of array "numbers" by updating "i" in every iteration of the for loop.
        cout << "Value of element " << i << " is : " << numbers[i] << endl;
    }
    
    cout << endl << "Array with all zero values" << endl;
    cout << "=======================" << endl;
    
    int arrayofZeroes[4] = {   };
    
    for(int i=0; i<4; i++)
    {
        cout << "Value of element " << i << " is : " << arrayofZeroes[i] << endl;
    }
    
    //Array of Strings
    
    string texts[] = {"Keyboard","Mouse","Earphones"};
    
    cout << endl << "Array of strings" << endl;
    cout << "=======================" << endl;
    for(int i=0; i<4; i++)
    {
        cout << "Value of element " << i << " is : " << texts[i] << endl;
    }
    
    return 0;
}