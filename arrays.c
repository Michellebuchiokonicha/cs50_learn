#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }


     printf("Average: %f\n", average(N, scores));
    string answer = get_string("What's your name?");
    printf("hello, %s\n", answer);

    for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++);
}
return sum / (float) length;

// command line argument is a word or phrase  you type atthe end of your program to make it behave
// differently
// debugger