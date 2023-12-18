#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char last = 'a';
    long long rotation1, rotation2, sum=0;
    for(int i=0; i<s.size(); i++)
    {
        rotation1 = abs(s[i] - last);
        rotation2 = 26 - rotation1;

///        sum+=min(rotation1, rotation2);
             if(rotation1<=rotation2)
        {
            sum=sum+rotation1;
        }
        else
        {
            sum = sum+rotation2;
        }
        last = s[i];
    }
    cout<<sum<<endl;
}
