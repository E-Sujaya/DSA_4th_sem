#include<stdio.h>
#include<string.h>
struct cricker_player
{
    char player_name[20];
    char team_name[20];
    float average;
    int highest_score;
    int centuries;
    int ODI_rank;
};
void display(char[],float,int);
main()
{
    struct cricker_player p1={"Virat","India",55.1,123,34,1};
    //function call
    display(p1.player_name,p1.average,p1.ODI_rank);
}


void display(char player_name[],float average, int ODI_rank)
{
    printf("%s\t%f\t%d\t",player_name,average,ODI_rank);
}

