int main()
{
    int n = 2, counter = 0, i, f;
    while(counter < 50)
    {
    f = 0;
    for(i=2; i<= n/2; i++)
    {
        if(n%i == 0)
            {
                f = 1;
                break;
            }
    }
    if( f == 0)
    {
        printf("%d\n",n);
        counter++;
    }
    n++;
    }
    return 0;
}
