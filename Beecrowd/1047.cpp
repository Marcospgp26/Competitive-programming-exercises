#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h_s, m_s, h_e, m_e, m_p = 0, h_p = 0;

    scanf("%i %i %i %i ", &h_s, &m_s, &h_e, &m_e);

    while(m_s != m_e)
    {
        m_s++;
        m_p++;
        if(m_s == 60)
        {
            m_s = 0;
            h_s++;
        }
    }

    while(h_s != h_e)
    {
        h_s++;
        h_p++;
        if(h_s == 24) h_s = 0;
    }

    if((h_p == 0) && (m_p == 0)) h_p = 24;

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", h_p, m_p);
    return 0;
}
