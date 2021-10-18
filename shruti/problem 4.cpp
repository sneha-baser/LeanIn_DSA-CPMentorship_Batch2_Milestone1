#include<iostream>
#include<unordered_map>
using namespace std;

string concatenatedstring(string s1, string s2)
{
    string result;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s2.size();i++)
        {
            mp[s2[i]]=1;
        }
        
        for (int i = 0; i < s1.size(); i++) {
        if (mp.find(s1[i]) == mp.end())
            result += s1[i];
        else
            mp[s1[i]] = 2;
        }
        
        for (int i = 0; i < s2.size(); i++)
        {
        if (mp[s2[i]] == 1)
            result += s2[i];
        }
    return result;

}

int main()
{
    string s1 = "aacdb";
    string s2 = "gafd";
    cout << concatenatedstring(s1, s2);
    return 0;
}


