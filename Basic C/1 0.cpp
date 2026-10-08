#include <bits/stdc++.h>
using namespace std;

int N, X[100];

void inkq(){
    for(int i = 1; i <= N; i++){
        cout << X[i];
    }
    cout << endl;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        if(j == 1 && i > 1 && X[i - 1] == 1)
            continue;

        X[i] = j;
        if( i == N ){
            inkq();
        }
        else{
            Try(i + 1);
        }
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> N;
    Try(1);
    return 0;
}
