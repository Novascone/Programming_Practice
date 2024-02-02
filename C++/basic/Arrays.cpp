#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N = 0;
    cin >> N;
    int arr[4];
    for(int i=0; i < N; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < N; i++) {
        cout << arr[(N - 1) - i] << " ";
    }
    
    
    return 0;
}
