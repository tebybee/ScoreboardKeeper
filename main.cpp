#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;
vector<vector<int> > board;
void printScoreboard(vector < vector<int> >);
int randomBetween(int, int);
int main()
{
        int teams;
        int periods;
        srand((int) time(0));
        cout<<"How many competitors? ";
        cin>>teams;
        cout<<"How many scoring periods? ";
        cin>>periods;

        if( teams < MIN_TEAMS || periods < MIN_PERIODS ||teams > MAX_TEAMS || periods > MAX_PERIODS )
        {
                cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
                cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
                return 0;
        }
        else
        {
                board.resize( teams);
                for(int i=0; i< board.size(); i++)
                {
                        board[i].resize( periods);
                        for(int k=0; k< board[i].size(); k++)
                        {
                                board[i][k] = 0;
                        }
                } 

                printScoreboard(board);
                for(int i=0; i< board.size(); i++)
                {       for(int k=0; k< board[i].size(); k++)
                        {

                                board[i][k] = randomBetween(0,9);
                        }
                        cout<<"\n";
                }
                printScoreboard(board);
        }
        return 0;
}
void printScoreboard(vector< vector<int> > board)
{
        cout<<"SCOREBOARD\n";
        //go through the score board and report the coresponding score
        //based on the team and the scoring period.
        for(int i=0; i< board.size(); i++)
        {
                cout<< "Player " <<i+1<< ": ";
                for(int k=0; k< board[i].size(); k++)
                {
                        cout<<board[i][k]<< "|";
                }
                cout<<"\n";
        } 
}
int randomBetween(int first, int second)
{   
    //generates a random number between the two parameters.
    if(second > first)
    {
        return second + rand()%(first-second+1);
    }
    else if(first > second)
    {   
        return first + rand()%(second-first+1);
    }
}
