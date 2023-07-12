#include <bits/stdc++.h>

using namespace std;

// Solution by Pranavan

string timeConversion(string s) {
    string stamp = s.substr(8,2);
    string result = s.substr(0,8);
    if (s.substr(8,2)=="PM"){
        if (s.substr(0,2)!="12"){
            result = to_string(stoi(s.substr(0,2))+12)+s.substr(2,6);
        }  
    }
    else if (s.substr(0,2)=="12"){
        result = "00"+s.substr(2,6);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
