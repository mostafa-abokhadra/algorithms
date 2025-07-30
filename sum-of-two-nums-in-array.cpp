// an array is given, find indicies of two numbers when added the result equals target
// constraint: indecies may not be he same index
  vector<int> twoSum(vector<int>& nums, int target) {
      int i, j;
      bool found = false;
      for (i = 0; i < nums.size(); i++) {
          for (j = 0; j < nums.size(); j++){
              if (nums[i] + nums[j] == target && i != j) {
                  found = true;
                  break;
              }
          }
          if (found)
              break;
      }
      vector<int> results;
      results.push_back(i);
      results.push_back(j);
      return results;
  }
