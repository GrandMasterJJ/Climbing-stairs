//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include <stdio.h>

int climbStairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n > 2)
    {
        int first_one = n - 1;
        int first_two = n - 2;
        int one_result = climbStairs(first_one);
        int two_result = climbStairs(first_two);
        return one_result + two_result;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int ans = climbStairs(n);
    printf("%d", ans);


    return 0;
}