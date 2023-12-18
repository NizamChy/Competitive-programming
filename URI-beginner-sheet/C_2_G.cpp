#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int a[1000];
    cin>>N;
    int ans = 0;

    for(int i = 1; i <= N; i ++)
        cin>>a[i];

    sort(a + 1, a + 1 + N);

    for(int i = 1; i <= N; i += 2)
        ans += (a[i + 1] - a[i]);

    cout<<ans;
}
