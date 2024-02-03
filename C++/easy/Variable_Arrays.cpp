#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
had to look up solution at https://programs.programmingoneonone.com/2021/02/hackerrank-variable-sized-arrays-solution-c-plus-plus.html

but I understand whats going on
*/


int main() {
   
   int n; // number of arrays
   int q; // number of elements we need to return
   cin >> n;
   cin >> q;
   
   vector<vector<int>> arr(n); // initializing vector of vectors
   
   for(int i = 0; i < n; i++) { // for each array given
       int len; // get the length of the array
       cin >> len; 
       arr[i].resize(len); // resize the inside vector to that length
       for (int j = 0; j < len; j++) {
           cin >> arr[i][j]; // read in the elemets of that array
       }
   }
   
   for(int k = 0; k < q; k++) { // for the number of elements needed to return
       int i; // get array index
       int j; // get index for element
       cin >> i;
       cin >> j;
       cout << arr[i][j] << endl; // print the element at the given index
   }
   

    return 0;
}

