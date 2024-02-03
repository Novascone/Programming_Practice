#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <istream>
#include <string>
using namespace std;


int main() {
     int n;
     int q;
     cin >> n;
     cin >> q;
  
     vector<string> lines(n);
     for(int i = 0; i < n; i++) 
     {
        getline(cin, lines[i]);
        while (lines[i].length() == 0)
            getline(cin, lines[i]);
     }
     vector<string> queries(q);
     for(int j = 0; j < q; j++)
     {
         getline(cin, queries[j]);
         
     }
    
    
    return 0;
}
