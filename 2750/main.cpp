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

int solve1() {
    cin >> N;

    int num;
    set<int> nums;
    while(N--) {
        cin >> num;
        nums.insert(num);
    }

    for (auto num: nums) {
        cout << num << endl;
    }

    return 1;
}

int solve2() {
    cin >> N;

    int num;
    vector<int> nums;

    while(N--) {
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    for (auto num: nums) {
        cout << num << endl;
    }

    return 1;

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

    solve2();


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
