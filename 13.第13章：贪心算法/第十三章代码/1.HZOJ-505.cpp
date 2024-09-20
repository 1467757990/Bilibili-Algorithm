/*************************************************************************
	> File Name: 1.HZOJ-505.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

//设定一个排序规则：要求两个字符串拼接成的新字符串越大越好。
bool cmp(const string &a, const string &b) {
    return a + b > b + a;
}

int main() {
    vector<string> arr; //开辟一个字符串数组
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        arr.push_back(s);
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
