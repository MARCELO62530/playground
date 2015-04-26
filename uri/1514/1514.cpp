#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, m, i, j, r1, r2, r3, r4;

    while (cin >> n >> m && n && m) {
        int current, solved_by_each[n], solutions_per_problem[m];

        r1 = 1; r2 = 1; r3 = 1; r4 = 1;

        memset(solved_by_each, 0, sizeof(solved_by_each));
        memset(solutions_per_problem, 0, sizeof(solutions_per_problem));

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> current;
                solved_by_each[i] += current;
                solutions_per_problem[j] += current;
            }
        }

        for (i = 0; i < n; i++) {
            if (solved_by_each[i] == m) r1 = 0;
            if (solved_by_each[i] == 0) r4 = 0;
        }

        for (j = 0; j < m; j++) {
            if (solutions_per_problem[j] == 0) r2 = 0;
            if (solutions_per_problem[j] == n) r3 = 0;
        }

        cout << r1 + r2 + r3 + r4 << endl;
    }

    return 0;
}
