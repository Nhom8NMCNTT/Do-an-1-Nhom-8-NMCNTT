int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int BCNN(int a, int b)
{
    int kq = UCLN(a, b);
    return a * b / kq;
}
