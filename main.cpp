#include <iostream>
using namespace std;

int main(){
    int n=0, a=1, b=1,c=0;
    cin>>n;
    cout << a << endl << b << endl;
        for(;;) {
            c = a + b;
            a = b;
            b = c;
                if (c<n) {
                cout << c << endl;
                }
            else {
                break;
            }
        }
    return 0;
}
