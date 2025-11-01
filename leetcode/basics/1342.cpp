#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
      int c = 0;
      while(num > 0) {
        num = num % 2 == 0 ? num / 2 : num - 1;
        c++;
      }

      return c;
    }
};

int main() {
  int num;
  cin >> num;

  Solution obj;
  cout << obj.numberOfSteps(num) << endl;

  return 0;
}