int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

int BCNN(int a, int b)
{
    int kq = UCLN(a, b);
    return a * b / kq;
}
