// Shrishti Raizada
// CPP Basic
// Milestone 1 Q 4

//Code to concatenete 2 strings having uncommon characters

#include <bits/stdc++.h>
#include <map>
using namespace std;
void findDistinctCharacters(string one, string two){
   // initializing char presence in string
   map<char, int> chars;
   // iterating over the first string
   for (int i = 0; i < one.size(); ++i){
      // inserting every character into map
      chars.insert({one[i], 1});
   }
   // iterating over the second string
   for (int i = 0; i < two.size(); ++i){
      // checking whether the current char in string or not
      if (chars.count(two[i])) {
         // assigning 0 for common chars
         chars.find(two[i])->second = 0;
      }
      else {
         // insering new chars
         chars.insert({two[i], 1});
      }
   }
   // printing the distinct characters
   for (auto item: chars){
      // checking the presence
      if (item.second == 1) {
         // printing the distinct char
         cout << item.first << " ";
      }
   }
}
int main(){
   string one = "alphabets";
   string two = "characters";
   findDistinctCharacters(one, two);
   return 0;
}