/*
The sum of the squares of the first ten natural numbers is, . The square of the sum of the first ten natural numbers is, . Hence the absolute difference between the sum of the squares of the first ten natural numbers and the square of the sum is .

Find the absolute difference between the sum of the squares of the first  natural numbers and the square of the sum.

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

Print the required answer for each test case.

Sample Input 0

2
3
10
Sample Output 0

22
2640
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
        long sumSq = 0;
        long numSum = 0;
        for(int i =1; i<= n; ++i ){
            numSum += i;
            sumSq += i*i;
        }
        cout << numSum*numSum - sumSq << endl;
    }
    return 0;
}
