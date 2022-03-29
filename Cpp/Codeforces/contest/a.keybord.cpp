    #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        set<char> s;
        for(int i=0;i<str.size();)
        {
            int j;
            for(j=i;j<str.size()&&str[j]==str[i];++j);
                if((j-i)&1)
                    s.insert(str[i]);
                i=j;
            }
            for(auto i:s)
                cout<<i;
            cout<<endl;
        }
        
    }