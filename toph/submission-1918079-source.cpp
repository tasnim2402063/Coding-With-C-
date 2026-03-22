
#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int H,M;
    cin >> H >> M;
    if(H == 12) H = 0;

    double angleH = (H * 30.0) + (M * 0.5);
    double angleM = M * 6.0;
    double diff = abs(angleH - angleM);

    if (diff > 180.0)
    {
        diff = 360.0 - diff;
    }
    cout << fixed << setprecision(7) << diff << endl;


}
