/*
If we list all the natural numbers below  that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of  or  below .

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

For each test case, print an integer that denotes the sum of all the multiples of  or  below .

Sample Input 0

2
10
100
Sample Output 0

23
2318
Explanation 0

For , if we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .

Similarly for , we get .

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
        int n;
        cin >> n;
        long long sum3 = (3LL * ((n - 1) / 3) * ((n - 1) / 3 + 1)) / 2;

        long long sum5 = (5LL * ((n - 1) / 5) * ((n - 1) / 5 + 1)) / 2;

        long long sum15 = (15LL * ((n - 1) / 15) * ((n - 1) / 15 + 1)) / 2;
        
        cout << sum3 + sum5 - sum15 << endl;
    }
    return 0;
}