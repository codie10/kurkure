#include <iostream>
using namespace std;

bool solve(string &s1,string &s2)
{
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        if(s1==s2)
        {
            return true;
        }
        char t=s1.back();
        s1.pop_back();
        s1=t+s1;
    }
    return false;
}
int main() {
   
string s1,s2;
cout<<"Enter first string:";
cin>>s1;
cout<<"Enter Second String:";
cin>>s2;
bool ans=solve(s1,s2);
if(ans)
{
    cout<<"True";
}
else
{
    cout<<"Ekke";
}

    return 0;
}
