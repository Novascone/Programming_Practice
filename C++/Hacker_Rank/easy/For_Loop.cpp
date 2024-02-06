#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char *nums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a;
    int b;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++){
        if(i >= 1 && i <= 9) {
        printf("%s\n", nums[i-1]);
        }
        else if(i > 9) {
             if(i % 2 == 0){
                printf("%s\n", "even"); 
             }
             else{
                printf("%s\n", "odd");
             }
            
        }
       
        
    }
    
    return 0;
}