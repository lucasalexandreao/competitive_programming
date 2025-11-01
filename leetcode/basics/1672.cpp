#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    size_t m = accounts.size();
    size_t n = accounts[0].size();

    int mw = 0;

    for (int i = 0; i < m; i++) {
      int w = 0;
      for (int j = 0; j < n; j++) w += accounts[i][j];
      if (w > mw) mw = w;
    }

    return mw;
  }
};



int main() {
  vector<vector<int>> accounts = {{1, 2, 3}, {2, 3, 4}};

  Solution obj;
  cout << obj.maximumWealth(accounts) << endl;

  return 0;
}