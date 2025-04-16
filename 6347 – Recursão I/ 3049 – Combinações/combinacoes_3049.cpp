#include <bits/stdc++.h>

using namespace std;

const int MAX = 1001;

vector<vector<long long>> MEMO(MAX, vector<long long>(MAX, - 1)); 

long long c(int n, int p){
    if(MEMO[n][p] != -1) return MEMO[n][p];
    if(n == p || p == 0) return 1;
    return MEMO[n][p] = c(n - 1, p - 1) * n / p;
}
 
int main() {
    int n_casos_teste;
    
    cin >> n_casos_teste;
    
    while(n_casos_teste--){
        int n, p;
        cin >> n >> p;
        cout << c(n, p) << endl;
    }
    
    return 0;
}