#include<iostream>

using namespace std;

int main()
{
    int values[] = {1,2,3,4,5,6,7,8,9};
    
    for(int i=0; i<sizeof(values)/sizeof(int); i++)
    {
       cout << values[i] << endl;
    }

    return 0;
}
