# include <iostream>
# include <cmath>
using namespace std;
int main() {
    double x;
    double R;
    double y;


    cout << "R ="; cin >> R;
    cout << "x ="; cin >> x;

    if (x <= -6)
        y = R;
    else
        if (x >= -6 && -R >= x)
            y = (5 * R - R * R) / (6 - R);
        else
            if (x >= -R && 0 >= x)
                y = -sqrt(-x * x - 2 * x * R) + R;
            else
                if (0 <= x && x <= R)
                    y = R - x;
                else
                    if (R <= x && x < ++R)
                        y = sqrt(R * R - x * x);
                    else
                        y = R - x;
    cout << endl;
    cout << "y =" << y << endl;

    cin.get();
    return 0;
