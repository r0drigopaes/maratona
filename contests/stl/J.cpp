#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 1, -1, 0, 0};
int dy[] = {0, 0, 0, 1, -1};

void play(int vec[3][3], int x, int y) {
        for(int i = 0; i < 5; ++ i) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if((nx < 0) || (nx > 2)) continue;
                if((ny < 0) || (ny > 2)) continue;
                ++vec[nx][ny];
        }
}

int main() {
        string fields;

        for(int k = 1; getline(cin, fields); ++k) {
                int vec[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

                for(auto x : fields) {
                        x -= 'a';
                        play(vec, x/3, x%3);
                }

                cout << "Case #" << k << ":" << endl;
                for(int i = 0; i < 3; ++i)
                        for(int j = 0; j < 3; ++j)
                                printf("%d%c", vec[i][j]%10, j == 2 ? 10 : 32);
        }

        return 0;
}
