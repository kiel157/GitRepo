
double pow(double a, unsigned n)
{
    double result = 1.0;
    for(int i=0; i<n; i++)
        result *= a;
    return result;
}
