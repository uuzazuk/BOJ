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

#define WHITE   0
#define BLUE    1
#define BLENDED 2

int square[128][128] = {-1, };
int result[2] = {0, };

void checkColor(int x1, int x2, int y1, int y2) {
    int firstColor = square[x1][y1];

    if(x1 == x2) {
        result[firstColor] = result[firstColor] + 1;
        return;
    }



    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            if (square[i][j] == firstColor)
                continue;

            // 다른 색깔이 있다면 이 검사에서 count할 필요 없이 분할하고 검사를 바로 중지
            int offset = 0;

            offset = (x2 - x1) / 2;

            checkColor(x1, x1 + offset, y1, y1 + offset);
            checkColor(x1 + offset +1, x2, y1, y1 + offset);
            checkColor(x1, x1 + offset, y1 + offset +1, y2);
            checkColor(x1 + offset +1, x2, y1 + offset +1, y2);


            return;
        }
    }

    result[firstColor] = result[firstColor] + 1;

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

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> square[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> square[i][j];
        }
    }

    checkColor(0, N-1, 0, N-1);

    cout << result[WHITE] << endl;
    cout << result[BLUE] << endl;
}
