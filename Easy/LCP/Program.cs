/*
* Problem https://leetcode.com/problems/longest-common-prefix
* Write a function to find the longest common prefix string amongst an array of strings.
* If there is no common prefix, return an empty string "".
*/
using System;

public class Solution {
    public static string LongestCommonPrefix(string[] strs) 
    {
      //check empty
      if(strs.Length == 0)
      {
        return "";
      }
      
      Array.Sort(strs);
      
      string prefix = "";
      for(var i = 0; i < strs[0].Length; i++)
      {
        char c = strs[0][i];
        for(var j = 0; j < strs.Length; j++)
        {
          if (i >= strs[j].Length || strs[j][i] != c) 
          {
            return prefix;
          }
        }

        prefix += c;
      }
      return prefix;
    }
}


class Test
{
  public static void Main(String [] args)
  {
    string[] input =  ["flower","flow","flight"];

    string output = Solution.LongestCommonPrefix(input);
  }
}