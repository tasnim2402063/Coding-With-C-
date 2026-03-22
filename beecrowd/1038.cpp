#include<bits/stdc++.h>
using namespace std;
int main()
{

    int X,Y;
    float total;

    cin >> X >> Y;

    if(X == 1)
    {

          total = Y * 4;
    }
    else if( X == 2)
    {

         total = Y * 4.50;

    }
    else if( X == 3)
    {

         total = Y * 5.00;

    }
    else if ( X ==4)
    {

          total = Y * 2.00;

    }
    else if ( X == 5)
    {

         total = Y * 1.50;

    }

    cout << fixed << setprecision (2);
    cout << "Total: R$ " << total << endl;
    
}
