#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
void sieve(long long int n)
{
    vector<int> is_prime(n + 1, 1);

    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] == 1)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int q, n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << primes[n - 1] << endl;
    }
}