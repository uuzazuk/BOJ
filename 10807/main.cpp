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


int solve(int a, int b, int x) {
    return 1;
}

int N;

// -100 <= arr <= 100
// 0 ~ 100   : index 0 ~ 100
// -1 ~ -100 : index 101 ~ 200
int table[201] = {0,};

void setTable(int v) {
    if (v >= 0) {
        table[v] += 1;
    } else {
        table[100 - v] += 1;
    }
}

int getVNum(int v) {
    if (v >= 0) {
        return table[v];
    } else {
        return table[100 - v];
    }

}

int V;

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

    int num;
    for(int i = 0; i < N; i++) {
        cin >> num;
        setTable(num);
    }

    int v;
    cin >> v;
    cout << getVNum(v) << endl;





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

