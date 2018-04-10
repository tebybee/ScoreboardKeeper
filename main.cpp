#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;
vector<vector<int> > board;
int main()
{
        int periods;
        int teams;

        cout<<"How many competitors? ";
        cin>>teams;
        cout<<"How many scoring periods? ";
        cin>>periods;

        if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
                        teams > MAX_TEAMS || periods > MAX_PERIODS )
        {
                cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
                cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
                return 0;
        }
        else
        {
                cout<<"SCOREBOARD\n";
                board.resize(teams);
                for(int i=0; i< board.size(); i++)
                {
                        board[i].resize(periods);
                        cout<< "Player " <<i+1<< ": ";
                        for(int k=0; k< board[i].size(); k++)
                        {
                                board[i][k] = 0;
                                cout<<board[i][k]<< "|";
                        }
                        cout<<"\n";
                }        

                //make scoreboard and fill it with zeros

                //once created, display the scoreboard
        }
        return 0;
}
