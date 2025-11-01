#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> letters;

    for (char c : magazine) letters[c]++;

    for (char c : ransomNote) {
      if (letters.count(c) == 0 || letters.at(c) == 0) return false;
      letters[c]--;
    }

    return true;
  }
};

int main() {
  Solution obj;
  cout << obj.canConstruct("aa", "ab") << endl;

  return 0;
}