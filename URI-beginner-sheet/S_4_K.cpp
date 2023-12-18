#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define     all(x)     x.begin(), x.end()
#define     rall(x)    x.rbegin(), x.rend()

#define     in        insert
#define     pb       push_back
#define     ff         first
#define     ss       second
#define    mp      make_pair
#define     ub      upper_bound
#define     lb        lower_bound

#define       nl          cout << "\n"
#define     YES        cout << "YES\n"
#define     NO         cout << "NO\n"
#define     Yes         cout << "Yes\n"
#define      No         cout << "No\n"

#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))

#define tst int t;cin>>t;while(t--)
#define sp(y, x) fixed << setprecision(x) << y

#define power(a, b) (double)pow((double)a, (double)b)
#define gcd(a, b) __gcd(a, b)
#define PI 3.1415926535

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[26]= {0};

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char c;
        cin>>c;
        a[c-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<a[i]; j++)
        {
            cout<<char('a'+i);
        }

    }

    return 0;


}

//    char s1[1000001], s2[1000001];
//    gets(s1);
//    gets(s2);
//    ll p = strlen(s1);
//    ll q = strlen(s2);
//
//    for(int i=0; i<p+q; i++)
//    {
//        s1[i] = s1[i];
//        //s2[i] = s2[i];
//        s1[i+1] = s2[i+1];
//        s1[i+2] = s2[i+2];
//    }
//    for(int i=0; i<p+q; i++)
//    {
//        cout<<s1[i]<<s2[i];
//    }
//}


//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    string s1, s2;
//    cin>>s1>>s2;
////    getline(cin,s1);
////    getline(cin,s2);
//    int p = s1.size();
//    int q = s2.size();
//    for(int i=0; i<p+q; i++)
//    {
//        s1[0] = s1[0];
//        s2[0] = s2[0];
//        if(i % 2 != 0)
//        {
//            s1[i] = s1[i];
//        }
//        else
//        {
//            s1[i] = s1[i];
//        }
//        cout<<s1[i]<<s2[i];
//    }
//
//
//}



