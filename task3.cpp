#include<iostream>
using namespace std;

int main(){
        int rs = 0;
        int cs = 0;
        char sm;

        cout << "length: ";
        cin >> rs;
        cout << "width: ";
        cin >> cs;
        cout << "symbol: ";
        cin >> sm;

        for(int i = 0; i < rs; i++){
                for(int u = 0; u < cs; u++)
                {
                        cout << sm << " ";
                }
                cout << endl;
        }
}

