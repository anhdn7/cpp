#include <iostream>

using namespace std;
int main(){
    int a,b;
    do
    {
        cin >> a >> b;
    }
    while (a<=b);
    
    for(int i = a-1; i > 1; i--){
        if(i % b == 0) {
            cout << "So can tim la: " << i << endl;
            break;
        }

    }

    return 0;
}