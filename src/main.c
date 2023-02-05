#include <stdio.h>

void calculateSumOfSquare()
{

    /*
    Pseudo Code:

    start
    sum = 0
    num = 0
    i = 0
    while i < 10
       read num
       if num < 0
           break
       else
           sum = sum + num
           i = i + 1
       end while
       print sum
    end

    */

    int sum = 0;
    int num = 0;
    int i = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        else
        {
            sum += num;
            i++;
        }
    }

    printf("The sum of the first %d natural numbers is %d \n", n, sum);

    // flowchart for the above code
    // 1. start
    // 2. sum = 0
    // 3. num = 0
    // 4. i = 0
    // 5. goto 6
    // 6. if i < 10 goto 7 else goto 12
    // 7. read num
    // 8. if num < 0 goto 12 else goto 9
    // 9. sum = sum + num
    // 10. i = i + 1
    // 11. goto 6
    // 12. print sum
    // 13. stop
}

void readThreeNumbers()
{
    /*
    start
    input a, b, c, temp
    if a > b
       temp = a
       a = b
       b = temp
    end if
    if b > c
       temp = b
       b = c
       c = temp
    end if
    if a > b
       temp = a
       a = b
       b = temp
    end if
    output a, b, c
    end
    */

    int a, b, c, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("The numbers in ascending order are: %d %d %d \n", a, b, c);

    // flowchart for the above code
    // 1. start
    // 2. input a, b, c, temp
    // 3. if a > b goto 4 else goto 7
    // 4. temp = a
    // 5. a = b
    // 6. b = temp
    // 7. if b > c goto 8 else goto 11
    // 8. temp = b
    // 9. b = c
    // 10. c = temp
    // 11. if a > b goto 12 else goto 15
    // 12. temp = a
    // 13. a = b
    // 14. b = temp
    // 15. output a, b, c
    // 16. stop
}

void calculateRinnginSum()
{

    /*
    Pseudo Code:

    start
    sum = 0
    i = 0
    read n
    while i < n:
       sum += i
       i += 1
    output sum
    end
    */

    int sum = 0;
    int i = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i < n)
    {
        sum += i;
        i++;
    }
    printf("The sum of the first %d natural numbers is %d \n", n, sum);

    // flowchart for the above code
    // 1. start
    // 2. sum = 0
    // 3. i = 0
    // 4. read n
    // 5. goto 6
    // 6. if i < n goto 7 else goto 10
    // 7. sum = sum + i
    // 8. i = i + 1
    // 9. goto 5
    // 10. output sum
    // 11. stop
}

int main(void)
{
    calculateRinnginSum();
    calculateSumOfSquare();
    readThreeNumbers();
    return 0;
}