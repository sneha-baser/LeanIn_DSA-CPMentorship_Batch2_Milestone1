#include<iostream>
#include<map>
using namespace std;

bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here#include <iostream>
    
    int m=str1.length();
    int n=str2.length();
    
    if(m!=n)
    {
        return false;
    }
    
    map<char,int>mp1;
    
    for(int i=0;i<m;i++)
    {
        mp1[str1[i]]++;
    }
    
    map<char,int>mp2;
    
    for(int j=0;j<n;j++)
    {
        mp2[str2[j]]++;
    }
    
    
    map<char,int>::iterator it1;
    map<char,int>::iterator it2;
    for( it1=mp1.begin(),it2=mp2.begin();it1!=mp1.end() && it2!=mp2.end(); it1++,it2++)
    {
        if(it1->second == it2->second)
        {
            return true;
        }
        
        else
        {
            return false;
        }
    }


        
    }
    
int main()
{
    cout << areIsomorphic("aab", "xxy") << endl;
    cout << areIsomorphic("aab", "xyz") << endl;
    return 0;
}