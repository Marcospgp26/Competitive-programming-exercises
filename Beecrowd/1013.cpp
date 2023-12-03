#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num[3], i = 1, m;
    scanf("%i ", &num[0]);
    m = num[0];

    while(i < 3)
    {
        scanf("%i ", &num[i]);
        if(m < num[i]) m = num[i];
        i++;
    }
    printf("%i eh o maior\n", m);
    return 0;
}
