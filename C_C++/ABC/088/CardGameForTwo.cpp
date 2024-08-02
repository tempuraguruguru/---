#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    int alice = 0;
    int bob = 0;
    for(int i = N-1; i >= 0; i-=2) alice += A[i];
    for(int i = N-2; i >= 0; i-=2) bob += A[i];
    cout << alice - bob << endl;
}