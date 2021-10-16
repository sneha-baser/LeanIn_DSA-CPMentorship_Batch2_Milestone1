/*The idea is to use hash map where key is character and value is number of strings in which character is present.
 If a character is present in one string, then count is 1, else if character is present in both strings, count is 2.
 O(n) Time complexity
 O(m*n) Space COmplexity given size of strings are m and n respecively.
 */
#include <bits/stdc++.h>
using namespace std;
  
string concatenetedString(string s1, string s2)
{
    string res = "";
    unordered_map<char, int> m;
    for (int i = 0; i < s2.size(); i++)
        m[s2[i]] = 1;
    for (int i = 0; i < s1.size(); i++) {
        if (m.find(s1[i]) == m.end())
            res += s1[i];
        else
            m[s1[i]] = 2;
    }
    for (int i = 0; i < s2.size(); i++)
        if (m[s2[i]] == 1)
            res += s2[i];
    return res;
}
int main()
{
    string s1 = "abcs";
    string s2 = "cxzca";
    cout << concatenetedString(s1, s2);
    return 0;
}