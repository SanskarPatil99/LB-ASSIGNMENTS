#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligiblity(int Age)
{
    if(Age>18)
    {
        printf("Eligible For Voting");
    }
    else if(Age<18 && Age>1)
    {
        printf("Not Eligible For Voting");
    }
    else if(Age<0)
    {
        printf("Invalid Age");
    }
}

int main()
{
    int iAge=0;

    printf("Enter Your Age: ");
    scanf("%d",&iAge);

    CheckVotingEligiblity(iAge);

    return EXIT_SUCCESS;
}