#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//solution by Pranavan.

string multiplyString(string s, int count){
    string result = "";
    for (int i = 0; i<count;i++){
        result+=s;
    }
    return result;
}
void staircase(int n) {
    for (int i=1; i<=n; i++){
        cout<< multiplyString(" ",n-i);
        cout<< multiplyString("#",i)<<endl;
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

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
