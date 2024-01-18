/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with  and , the first  terms will be:

By considering the terms in the Fibonacci sequence whose values do not exceed , find the sum of the even-valued terms.

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

Print the required answer for each test case.

Sample Input 0

2
10
100
Sample Output 0

10
44
Explanation 0

For , we have , sum is .
For , we have , sum is .
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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long sum = 0;
        long prev = 1;
        long curr = 2;
        while(curr <= n)
        {
            if (curr%2 == 0){
                sum += curr;
            }
            long temp = curr;
            curr = prev+curr;
            prev = temp;
        }
        cout << sum << endl;
    }
    return 0;
}