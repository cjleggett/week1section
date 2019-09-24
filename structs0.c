#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    string name;
    float gpa;
}
student;

int main(void)
{
    student alice;
    alice.id = 43;
    alice.name = "Alice Riley";
    alice.gpa = 3.47;

    // alice did well in CS50!
    alice.gpa += .5;

}
