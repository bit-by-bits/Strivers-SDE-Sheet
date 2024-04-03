class Solution
{
public:
    double power(double y, int n)
    {

        if (n == 0)
            return 1;
        else if (n == 1)
            return y;
        else if (n == -1)
            return 1.0 / y;

        if (n % 2)
        {
            return y * power(y, n - 1);
        }

        else
        {
            double half = power(y, n / 2);
            return half * half;
        }
    }

    double myPow(double x, int n)
    {
        return power(x, n);
    }
};