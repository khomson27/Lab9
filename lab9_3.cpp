#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    int z;
    string T;
    cout << "Enter your age: ";
    cin >> x;
    if (x <= 20)
        {
        cout << "Enter your height: ";
        cin >> y;
        if (y < 160)
            {
                T = "UNFRIEND";
            } else if(y < 175)
            {
                T = "FRIEND";
            } else
            {
              cout << "Enter your property: ";
              cin >> z;
              if (z > 69000000)
              {
                T = "MARRIED";
              } else 
              {
                T = "ONE-NIGHT-STAND";
              }  
            } 
        } else if(x < 30)
        {
            cout << "Enter your property: ";
            cin >> z;
            if (z > 10000000)
            {
                T = "BEST FRIEND";
            } else
            {
                T = "UNFRIEND";
            }

        } else 
        {
            T = "UNFRIEND";
        }
 cout << "Your status = " << T;
 return 0;
}