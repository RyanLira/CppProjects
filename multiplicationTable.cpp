//produce a 10x10 multiplication table
//Ryan Lira

#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i < 11; i++){
        for(int j = 1; j < 11; j++){
            cout << (i * j);
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}