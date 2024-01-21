/*
A palindromic number reads the same both ways. The smallest 6 digit palindrome made from the product of two 3-digit numbers is .

Find the largest palindrome made from the product of two 3-digit numbers which is less than .

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

Print the required answer for each test case in a new line.

Sample Input 0

2
101110
800000
Sample Output 0

101101
793397
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPalindrome(int num)
{
    string s_num = to_string(num);
    int left = 0;
    int right = s_num.length() - 1;
    while (left < right)
    {
        if(s_num[left] != s_num[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int max_palin = 0;
        for(int i = 101 ; i <= 999 ; ++i){
            // All even number digits palindromes are dividible by 11
            for (int j = 121; j <= 999; j += (i%11 == 0) ? 1 : 11){
                if (i % 10 == 0 || j % 10 == 0) {
                    continue;
                }
                int product = i*j;
                if(product > max_palin && product <= n && isPalindrome(product)){
                    max_palin = product;
                    break;
                }
            }
        }
        cout << max_palin << endl;
    }
    return 0;
}