#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    bool flag = true;
    while((s = getchar()) != EOF)
    {
        if(s == '"')
        {
            if(flag == true)
            {
                cout<<"``";
                flag = false;
            }
            else
            {
                cout<<"''";
                flag = true;
            }
        }
        else
        {
            cout<<s;
        }
    }

}

//int main()
//{
//        int i,len;
//        string str;
//        char s_char, r_char;
//
//        cout<<"ENTER STRING: ";
//        getline(cin,str);
//
////        cout<<"\nENTER CHARACTER TO BE REPLACED: ";
////        cin>>s_char;
////
////        cout<<"\nENTER REPLACING CHARACTER: ";
////        cin>>r_char;
//
//        len=str.length();
//
//        for(i=0 ; i<len ; i++)
//        {
//                if(str[i]=='"')
//                {
//                         str[i]='``';
//                }
//        }
//
//        cout<<str;
//
//
//}



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    char c;
//    bool flag = true;
//    while((c = getchar()) != EOF)
//    {
//        if(c == '"')
//        {
//            if(flag)
//            {
//                printf("``");
//                flag = false;
//            }
//            else
//            {
//                printf("''");
//                flag = true;
//            }
//        }
//        else
//        {
//            printf("%c", c);
//        }
//    }
//    return 0;
//}
