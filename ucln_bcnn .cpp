long long UCLN(long long a, long long b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

long long BCNN(long long a, long long b)
{
    long long kq = UCLN(a, b);
    return (a * b / kq);
}
