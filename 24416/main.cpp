// 피보나치 수열

#include<cassert>
#include<vector>
#include<cstdio>
#include<map>
#include<set>
#include<cstring>
#include<cstring>
#include<memory>
#include<algorithm>
#include<string>
#include<iostream>
#include<queue>
#include <ctime>

// 제출시에는 아래 라인 막고 제출
//#define DEBUG

using namespace std;

int MAX_32 = 987654321;
long long MAX_64 = 987654321987654321;


int N;

int nCntF_recur = 0;
int nCntF_dp = 0;


int f_recur(int n) {
    if (n == 1 || n == 2) {
        nCntF_recur++;
        return 1;
    } else {
        return (f_recur(n-2) + f_recur(n-1));
    }

}

int f_dp(int n) {
    int f[41] = {0,};

    f[1] = f[2] = 1;

    for(int i = 3; i <= n; i++) {
        nCntF_dp++;
        f[i] = f[i - 2] + f[i - 1];
    }
    return 0;
}

int main()
{
#ifdef DEBUG
//    cout << "START of main()"  << endl;

//    time_t start, finish;
//    double duration;
//
//    start = time(NULL);


    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    cin >> N;

    f_recur(N);
    f_dp(N);

    cout << nCntF_recur << " " << nCntF_dp;



#ifdef DEBUG
//	finish  = time(NULL);
//
//    duration = (double)(finish - start);
//    cout << duration << "sec" << endl;
//
//
//    cout << "END of main()"  << endl;
#endif
}
