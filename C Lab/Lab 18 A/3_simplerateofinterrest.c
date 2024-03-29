#include <stdio.h>
void sroi(int rateofp, int r, int t)
{
    int fa;
    fa = rateofp * (1 + r * t);
    printf("%d", fa);
}
int main()
{
    int rateofp, r, t;
    scanf("%d %d %d", &rateofp, &r, &t);
    sroi(rateofp, r, t);
    return 0;
}
