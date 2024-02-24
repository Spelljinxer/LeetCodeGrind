#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(std::string s) {
      int start = 0;
      int end = s.size() - 1;

      while( start <= end )
      {
        if(!isalnum(s[start]))
        {
          start++;
          continue;
        }
        if(!isalnum(s[end]))
        {
          end--;
          continue;
        }

        if(tolower(s[start]) != tolower(s[end]))
        {
          return 0;
        }

        else{
          start++;
          end--;
        }
      }
      return true;
    }
};


// more efficient

class Solution {
public:
    bool isPalindrome(string s) {
      std::string t;
        for(const auto& a:s)
        {
            if(a>='A' && a<='Z')
            {
                t.push_back(a-'A' + 'a');
            }
            else if(a>='a' && a<='z')
            {
                t.push_back(a);
            }
            else if(a>='0' && a<='9')
            {
                t.push_back(a);
            }
        }
        int len = t.size();
        for(int i=0; i<len/2; ++i)
        {
            if(t[i] != t[len-i-1])
            {
                return false;
            }
        }
        return true;
    }
};