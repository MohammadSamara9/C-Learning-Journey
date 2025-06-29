double find_z(int x, int y)
{
    double z = 1 + x;
    int i, power = x;
    for(i = 2; i <= y; i *= 2)
    {
        power *= power;
        z += power;
    }
    return z;
}
