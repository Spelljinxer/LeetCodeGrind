// Problem : https://leetcode.com/problems/multiply-strings/description/
/**
 * Given two non-negative integers num1 and num2 represented as strings,
 * return the product of num1 and num2, also represented as a string.
 * 
 * Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.
 */


class Solution {
    public String multiply(String num1, String num2) {
        if(num1.equals("0") || num2.equals("0"))
            return "0";
        int len1 = num1.length();
        int len2 = num2.length();
        int[] result = new int[len1 + len2];
        for(int i = len1 - 1; i >= 0; i--)
        {
            for(int j = len2 - 1; j >= 0; j--)
            {
                int mul = (num1.charAt(i) - '0') * (num2.charAt(j) - '0');
                int sum = mul + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < result.length; i++)
        {
            if(i == 0 && result[i] == 0)
                continue;
            sb.append(result[i]);
        }
        return sb.toString();
    }
}