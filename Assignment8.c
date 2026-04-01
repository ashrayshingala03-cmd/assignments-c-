#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float per;
 
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
    {
     printf("Result: FAIL");
    }
    else
    {
        total = m1+m2+m3+m4+m5;
        per = total / 5.0;
        printf("Result: PASS\n");
        printf("Percentage: %f\n",per);
 
        if (per >= 75)
            printf("Grade: Distinction");
        else if (per >= 60)
            printf("Grade: FirstDivision");

        else if (per >= 50)
            printf("Grade: SecondDivision");
        else 
            printf("Grade: ThirdDivision");
    }
    return 0;
}
