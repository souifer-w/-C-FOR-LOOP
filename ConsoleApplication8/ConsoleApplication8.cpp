#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int x = 0; x < (2* i- 1); x++)
        {
            cout << "*" ;
        }


        cout << "\n";


    }



    return 0;
}