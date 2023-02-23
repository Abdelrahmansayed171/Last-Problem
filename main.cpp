//<a href="https://codeforces.com/contest/368/problem/B"></a>

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define Orca               cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
//#define filein             freopen("balancing.in","r",stdin);
//#define fileout            freopen("balancing.out","w",stdout);
#define endl               '\n'
#define PB                 push_back
//#define MP                 make_pair
#define INF                1000000
//#define loop(n)            for(int i = 0;i < n;i++)
//#define space              " "
//#define x                  first
//#define y                  second
//#define vi                 vector <int> v
typedef long long          ll;
//typedef pair<int,int>      pr;

void Orcawy(){
    int n,m;
    cin >> n>> m;
    map<int,bool> map;
    int arr[n];
    vector<int> prefix(n+5, 0);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i =n-1;i >=0;i --) {
        if (map[arr[i]] == false) {
            prefix[i] += prefix[i + 1] + 1;
            map[arr[i]] = true;
        } else {
            prefix[i] = prefix[i+1];
        }
    }
    int x;
    while(m--){
        cin >> x;
        cout << prefix[x-1] <<endl;
    }
}


int main() {
    Orca
    Orcawy();
    return 0;
}
