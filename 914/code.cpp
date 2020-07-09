// https://leetcode.com/problems/word-subsets/
class Solution {
public:
  vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
    vector<string> result;
    int const D = 'z' - 'a' + 1; // 26
    int C[D] = {0, };
    for(auto const& b: B)
    {
      int CC[D] = {0, };
      for(auto const& c: b)
        ++CC[c - 'a'];
      for(int i = 0; i < D; ++i)
        if (C[i] < CC[i])
          C[i] = CC[i];
    }
    for(auto const& a: A)
    {
      int CC[D] = {0, };
      for(auto const& c: a)
        ++CC[c - 'a'];
      int i;
      for(i = 0; i < D; ++i)
        if (C[i] > CC[i])
          break;
      if (!(i < D))
        result.push_back(a);
    }
    return result;
  }
};
