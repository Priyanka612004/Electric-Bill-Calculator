#include<stdio.h>

    int main()
{
    int b, d, i, c = 115;
    float e, f, r, s, p, g, j, k, l, m, h = 1.35;

    printf("enter your unit:\n");
    scanf("%d", &b);

    if (b >= 0 && b <= 100)
    {
        printf("fixed bill:%d\n", c);
        e = b * 3.36;
        printf("Electric Bill:%f\n", g = e);
        printf("Transmission Bill:%f\n", j = h * b);
        printf("Fuel Bill : %f \n", k = b * 0.1);
        printf("Total:%d\n", i = c + g + j + k);
        printf("total 16%: %f\n", l = (i * 16 / 100));
        printf("Total Bill: %f\n", m = c + g + j + k + l);
    }

    else if (b >= 101 && b <= 300)
    {
        printf("fixed bill:%d\n", c);
        d = b - 100;
        e = 100 * 3.36;
        f = d * 7.34;
        printf("Electric Bill:%f\n", g = e + f);
        printf("Transmission Bill:%f\n", j = h * b);
        printf("Fuel Bill:%f\n", k = (100 * 0.1) + (d * 0.2));
        printf("Total:%d\n", i = c + g + j + k);
        printf("total 16% : %f\n", l = (i * 16 / 100));
        printf("Total Bill: %f\n", m = c + g + j + k + l);
    }

    else if (b >= 301 && b <= 500)
    {
        printf("fixed bill:%d\n", c);
        d = b - 300;
        e = 100 * 3.36;
        f = 200 * 7.34;
        r = d * 10.37;
        printf("Electric Bill:%f\n", g = e + f + r);
        printf("Transmission Bill:%f\n", j = h * b);
        printf("Fuel Bill:%f\n", k = (100 * 0.1) + (200 * 0.2) + (d * 0.25));
        printf("Total:%d\n", i = c + g + j + k);
        printf("total 16% : %f\n", l = (i * 16 / 100));
        printf("Total Bill: %f\n", m = c + g + j + k + l);
    }

    else if (b >= 501 && b <= 1000)
    {
        printf("fixed bill:%d\n", c);
        d = b - 500;
        e = 100 * 3.36;
        f = 200 * 7.34;
        r = 200 * 10.37;
        s = d * 11.86;
        printf("Electric Bill:%f\n", g = e + f + r + s);
        printf("Transmission Bill:%f\n", j = h * b);
        printf("Fuel Bill:%f\n", k = (100 * 0.1) + (200 * 0.2) + (200 * 0.25) + (d * 0.25));
        printf("Total:%d\n", i = c + g + j + k);
        printf("total 16% : %f\n", l = (i * 16 / 100));
        printf("Total Bill: %f\n", m = c + g + j + k + l);
    }

    else if (b > 1000)
    {
        printf("fixed bill:%d\n", c);
        d = b - 1000;
        e = 100 * 3.36;
        f = 200 * 7.34;
        r = 200 * 10.37;
        s = 500 * 11.86;
        p = d * 11.86;
        printf("Electric Bill:%f\n", g = e + f + r + s + p);
        printf("Transmission Bill:%f\n", j = h * b);
        printf("Fuel Bill:%f\n", k = (100 * 0.1) + (200 * 0.2) + (200 * 0.25) + (500 * 0.25) + (d * 0.25));
        printf("Total:%d\n", i = c + g + j + k);
        printf("total 16% : %f\n", l = (i * 16 / 100));
        printf("Total Bill: %f\n", m = c + g + j + k + l);
    }

    else
    {
        printf("please check your unit\n");
    }

    return 0;
}