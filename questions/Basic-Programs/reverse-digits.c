#include <stdio.h>
#include <math.h>

int main()
{
    FILE *f_in, *f_out;
    double x1, y1, x2, y2, d, X, Y;

    f_in = fopen("in.txt", "r");
    f_out = fopen("out.txt", "w");

    fscanf(f_in, "%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    X = pow((x2-x1),2);
    Y = pow((y2-y1),2);

    d = sqrt((X+ Y));

    fprintf(f_out, "The distance = %lf", d);

    fclose(f_in);
    fclose(f_out);

    return 0;
}
