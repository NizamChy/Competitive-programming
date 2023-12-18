#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,cnt;
    for(i=1; i<=4; i++)
    {
        cin>>s;
        if (s != "3B" || s != "HR" || s != "2B" || s != "H"  )
        {
            cnt=1;
            break;
        }

    }
    if (cnt==1)
        cout << "No"<<endl;
    else
        cout<<"Yes"<<endl;

}


// string fixed_array[4]; //= {"3B", "HR", "2B", "H"};
//    int cnt=0;
//    cout << "Please enter something:\n";
//    string user_input;
//    for(int i =1; i<=4; i++)
//    {
//            cin >> user_input;
//    }
//
//    for (int i=0; i<4; i++)
//    {
//        if (user_input != "3B" || user_input != "HR" || user_input != "2B" || user_input != "H"  )
//        {
//            cnt=1;
//            //break;
//        }
////     else cnt=0;
////     break;
//
//
//    }
//    if (cnt==1)
//        cout << "No"<<endl;
//    else
//        cout<<"Yes"<<endl;
