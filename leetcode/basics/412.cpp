#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vec;
        for (int i = 1; i <= n; i++) {
          if (i % 3 == 0 && i % 5 == 0)
            vec.push_back("FizzBuzz");
          else if (i % 3 == 0)
            vec.push_back("Fizz");
          else if (i % 5 == 0)
            vec.push_back("Buzz");
          else
            vec.push_back(to_string(i));
        }

      return vec;
    }
};



int main() {
  int n;
  cin >> n;

  Solution obj;
  vector<string> vec = obj.fizzBuzz(n);
  for (int i = 0; i < n; i++)
    cout << vec[i] << " ";
  cout << endl;

  return 0;
}