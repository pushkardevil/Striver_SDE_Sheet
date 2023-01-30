class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        if(s.size()==0)
      return 0;
  int maxans = INT_MIN;
  for (int i = 0; i < s.length(); i++) // outer loop for traversing the string
  {
    unordered_set < int > set;
    for (int j = i; j < s.length(); j++) // nested loop for getting different string starting with str[i]
    {
      if (set.find(s[j]) != set.end()) // if element if found so mark it as ans and break from the loop
      {
        maxans = max(maxans, j - i);
        break;
      }
      set.insert(s[j]);
    }
  }
  return maxans;
    }
};
