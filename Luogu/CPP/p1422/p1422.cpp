#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    if (n <= 150)
    {
        cout << fixed << setprecision(1) << n * 0.4463 << endl;
    }

    else if (n > 150 && n <= 400)
    {
        cout << fixed << setprecision(1) << 150 * 0.4463 + (n - 150) * 0.4663 << endl;
    }

    else
    {
        cout << fixed << setprecision(1) << 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663 << endl;
    }
}