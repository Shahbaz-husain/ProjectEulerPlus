/*
The prime factors of  are  and .

What is the largest prime factor of a given number ?

Input Format

First line contains , the number of test cases. This is followed by  lines each containing an integer .

Constraints

Output Format

For each test case, display the largest prime factor of .

Sample Input 0

2
10
17
Sample Output 0

5
17
Explanation 0

Prime factors of  are , largest is .
Prime factor of  is  itself, hence largest is .

Note : Problem needs to be solved in the least time complexity possible for each input

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
        long maxi=0;
        for( long i=2;i*i<=n;i++){
            while(n%i==0){
                maxi=max(maxi,i);
                n=n/i;
            }
        }
        if(n>maxi){
            maxi=n;
        }
        cout << maxi << endl;
    }
    return 0;
}