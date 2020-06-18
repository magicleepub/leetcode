// https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
  void bucket_to_result(int element, int* B, vector<int>& result)
  {
      while(B[element])
      {
        result.push_back(element);
        --B[element];
       }
  }

  vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
  {
    vector<int> result;
    int const D = 1001;
    int B[D] = {};
    for(int const& element: arr1)
      ++B[element];
    for(int const& element: arr2)
      bucket_to_result(element, B, result);
    for(int element = 0; element <= 1000; ++element)
      bucket_to_result(element, B, result);
    return result;
  }
};
