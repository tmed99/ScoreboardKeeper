#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

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
   //make scoreboard and fill it with zeros
  
  //periods = periods + 1;

  vector <vector <float > > score;
 
  score.resize(teams);
 
  for (int teams = 0; teams <score.size(); teams++)
    {
      score[teams].resize(periods);
    }
 
  for (int teams = 0 ; teams < score.size(); teams++)
  {
    for (int periods = 1; periods < score[teams].size(); periods++)
      {
        score[teams][periods] = 0;
      }
  }
  
  //once created, display the scoreboard
  
  cout<<"SCOREBOARD\n";

  for (int teams = 0; teams <score.size(); teams++)
    {
      for (int periods = 0; periods < score[teams].size(); periods++)
        {
          cout<< score[teams][periods]; 
          cout<< "|"; 
        }
        cout<<endl;
    } 
  }
  return 0;
}
