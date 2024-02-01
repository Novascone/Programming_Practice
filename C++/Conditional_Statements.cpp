#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    char *nums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n >= 1 and n <= 9) {
        printf("%s", nums[n-1]);
    }
    else if(n > 9) {
        printf("%s", "Greater than 9");
    }
    else if(n < 1) {
        printf("%s", "Less than 1");
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
