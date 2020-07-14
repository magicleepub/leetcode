// https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:
  bool judgeSquareSum(int c) {
    int a = 0;
    int b = sqrt(c);
    while (a <= b)
    {
      int lhs = a * a;
      int rhs = c - b * b;
      if (lhs == rhs)
        return true;
      if (lhs < rhs)
        ++a;
      else // lhs > rhs
        --b;
    }
    return false;
  }
};
