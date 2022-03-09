using namespace std;
#include <iostream>

int main()
{
    int n;
    int p1 = 0;
    int p = 2;
    int d;
    bool k;

    cout << "Ile mam wyświetlić liczb pierwszych?" << endl;
    cin >> n;
    cout << "Liczby pierwsze:";
    // k3
    while (p1 < n)
    {
        // k4
        k = true;
        for (d = 2;d<=p-1;d++)
        {
            // k5
            if (p % d == 0) {k = false; }

        }
        if (k == true)
        {
        // k6
        cout << p << ", ";
        // k7
        p1 = p1 + 1;
        }
        // k8
        p = p + 1;
    }

}
