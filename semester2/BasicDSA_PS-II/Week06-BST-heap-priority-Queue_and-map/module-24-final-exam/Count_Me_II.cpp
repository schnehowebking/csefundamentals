#include<bits/stdc++.h>
using namespace std;

pair<int, int> frqValue(vector<int>& arr) {
    map<int, int> mp;
    int fq = 0;
    int fqv = arr[0];

    for (int num : arr) {
        mp[num]++;
        if (mp[num] > fq) {
            fq = mp[num];
            fqv = num;
        } else if (mp[num] == fq && num > fqv) {
            fqv = num;
        }
    }

    return make_pair(fqv, fq);
}

int main() {

    // Write your code here
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        vector<int> arr(x);
        for (int i = 0; i < x; ++i) {
            cin >> arr[i];
        }

        pair<int, int> p = frqValue(arr);
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}