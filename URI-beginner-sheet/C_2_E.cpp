#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int mini = sum;
    int sum1 = 0;
    for (int i = 0; i < N; i++)
    {
        sum1 += a[i];
        mini = min(mini, abs(sum1 - (sum - sum1)));
    }

    cout << mini << endl;

}
