#include <bits/stdc++.h>

using namespace std;

int main()
{
    int beg, endin, tm;
    scanf("%i ", &beg);
    scanf("%i ", &endin);

    beg++;
    tm++;
    if(beg == 24) beg = 0;
    while(beg != endin)
    {
        tm++;
        beg++;
        if(beg == 24) beg = 0;
    }

    printf("O JOGO DUROU %i HORA(S)\n", tm);
    return 0;
}
