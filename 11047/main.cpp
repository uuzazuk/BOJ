// 동전 0



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
#define DEBUG

using namespace std;

int MAX_32 = 987654321;
long long MAX_64 = 987654321987654321;

int N, coninN, K;
int coinValue[10] = {0, };


void divideX(int x, int &q, int &r) {
    for (int i = 0; i < coninN; i++) {
        if (coinValue[coninN - i - 1] <= x) {
            q = x / coinValue[coninN - i - 1];
            r = x %  coinValue[coninN - i - 1];
            break;
        }
    }
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

    cin >> N >> K;
    coninN = N;

    int i = 0;
    while(N--) {
        cin >> coinValue[i++];
    }

    int qSum = 0;
    int q = 0;
    int r = 0;
    int x = K;

    do {
        divideX(x, q, r);
        qSum += q;
        x = r;
    } while(r != 0);

    cout << qSum << endl;


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
