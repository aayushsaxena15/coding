#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main (int argc, char* argv[])
{
    int n, cases;

    scanf("%d", &cases);

    while (cases--)
    {
    string grid[1000];
    int rocks[1000][1000];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        for (int row = 0; row < n; row++)
        {
            for (int col = n-1; col >= 0; col--)
            {
                if (col == n-1)
                {
                    if (grid[row][col] == '#')
                        rocks[row][col] = 1;
                        else
                            rocks[row][col]=0;
                }
                else
                {
                    if (grid[row][col] == '#')
                        rocks[row][col] = rocks[row][col+1] + 1;
                    else
                        rocks[row][col] = rocks[row][col+1];
                }
            }
        }

        int cnt = 0;
        for (int col = 0; col < n; col++)
        {
            int rock_down = 0;
            for (int row = n-1; row >= 0; row--)
            {
                if (grid[row][col] == '#')
                    rock_down++;

                if (rock_down)
                    break;

                if (rocks[row][col] == 0)
                    cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}

