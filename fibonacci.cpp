unsigned long long fibo(long long n)
{
	if (n == 0 || n == 1) // điều kiện dừng
		return n; // nếu n bằng 0 hoặc bằng 1 thi trả về n
	else
		return (fibo(n - 2) + fibo(n - 1));
}