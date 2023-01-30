#include <stdio.h>
#include <sys/time.h>

static double get_wall_seconds()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    double seconds = tv.tv_sec + (double)tv.tv_usec / 1000000;
    return seconds;
}

int main()
{
    clock_t start, end;
    double add_time, subtract_time, multiply_time, divide_time;
    long iterations = 1000000000;
    start = get_wall_seconds();
    for (int i = 0; i < iterations; i++)
    {
        int a = i + i;
    }
    end = get_wall_seconds();
    add_time = (double)(end - start) / CLOCKS_PER_SEC;

    start = get_wall_seconds();
    for (int i = 0; i < iterations; i++)
    {
        int a = i - i;
    }
    end = get_wall_seconds();
    subtract_time = (double)(end - start) / CLOCKS_PER_SEC;

    start = get_wall_seconds();
    for (int i = 0; i < iterations; i++)
    {
        int a = i * i;
    }
    end = get_wall_seconds();
    multiply_time = (double)(end - start) / CLOCKS_PER_SEC;

    start = get_wall_seconds();
    for (int i = 0; i < iterations; i++)
    {
        int a = i / 2;
    }
    end = get_wall_seconds();
    divide_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Addition time: %f\n", add_time);
    printf("Subtraction time: %f\n", subtract_time);
    printf("Multiplication time: %f\n", multiply_time);
    printf("Division time: %f\n", divide_time);

    return 0;
}
