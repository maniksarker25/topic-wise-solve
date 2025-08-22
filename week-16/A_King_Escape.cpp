#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int ax, ay;
    cin >> ax >> ay;
    int bx, by;
    cin >> bx >> by;
    int cx, cy;
    cin >> cx >> cy;

    bool kingTopLeft = (bx < ax && by < ay);
    bool kingTopRight = (bx < ax && by > ay);
    bool kingBottomLeft = (bx > ax && by < ay);
    bool kingBottomRight = (bx > ax && by > ay);

    bool targetTopLeft = (cx < ax && cy < ay);
    bool targetTopRight = (cx < ax && cy > ay);
    bool targetBottomLeft = (cx > ax && cy < ay);
    bool targetBottomRight = (cx > ax && cy > ay);

    if ((kingTopLeft && targetTopLeft) ||
        (kingTopRight && targetTopRight) ||
        (kingBottomLeft && targetBottomLeft) ||
        (kingBottomRight && targetBottomRight))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
