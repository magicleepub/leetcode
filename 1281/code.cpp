class Solution {
public:
  int subtractProductAndSum(int n) {
    int const D = 10;
    int product = 1;
    int sum = 0;
    for(; n; n /= D) {
      int x = n % D;
      product *= x;
      sum += x;
    }
    return product - sum;
  }
};
