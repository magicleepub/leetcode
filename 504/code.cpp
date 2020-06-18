// https://leetcode.com/problems/base-7/

class Solution {
public:
  string convertToBase7(int num) {
    if (num == 0)
      return "0";
    bool negative = num < 0;
    if (negative)
      num = -num;
    int const B = 7;
    vector<char> array;
    string result;
    for(; num; num /= B) {
      array.push_back('0' + (num % B));
    }
    if (negative)
      result += '-';
    for(int i = array.size() - 1; i >= 0; --i)
      result += array[i];
    return result;
  }
};
