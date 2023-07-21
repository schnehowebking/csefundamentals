#include<bits/stdc++.h>
using namespace std;


pair<string, int> fqWords(string& s) {
    stringstream ss(s);
    map<string, int> mp;
    string word, fqWord;
    int max = 0;

    while (ss >> word) {
        mp[word]++;
        if (mp[word] > max) {
            max = mp[word];
            fqWord = word;
        }
    }

    return make_pair(fqWord, max);
}

int main() 
{
    // Write your code here
    
    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        pair<string, int> result = fqWords(s);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}