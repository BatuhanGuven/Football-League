// Şevki Batuhan GÜVEN - 394815
// Gürkan KIYMAZ - 421920
// Taha HİSOĞLU - 

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

using namespace std;

/* ---------------------------------------- Class Coach ---------------------------------------- */

class Coach
{
public:
	Coach(const string& coachNameRef = "Unknown Coach Name", const string& coachSurnamRef = "Unknown Coach Surname"); // constructor
	~Coach(); // destructor

	void setCoachName(const string&);
	string getCoachName();

	void setCoachSurname(const string&);
	string getCoachSurname();

private:
	string coachName;
	string coachSurname;

};

Coach::Coach(const string& coachNameRef, const string& coachSurnamRef)
	: coachName(coachNameRef),
	coachSurname(coachSurnamRef)
{
}

Coach::~Coach()
{}

void Coach::setCoachName(const string& coachNameRef)
{
	coachName = coachNameRef;
}

string Coach::getCoachName()
{
	return coachName;
}

void Coach::setCoachSurname(const string& coachSurnamRef)
{
	coachSurname = coachSurnamRef;
}

string Coach::getCoachSurname()
{
	return coachSurname;
}

/* ---------------------------------------- ~Class Coach ---------------------------------------- */

/* ---------------------------------------- Class Player ---------------------------------------- */

class Player
{
public:
	Player(const string& playerNameRef = "Unknown Player Name", const string& playerSurnameRef = "Unknown Player Surname", const int& playerAgeRef = -1, const int& playerNumberRef = -1, const int& playerPerformanceRef = -1, const char& playerPositionRef = '-');
	~Player();

	void setPlayerName(const string&);
	string getPlayerName();

	void setPlayerSurname(const string&);
	string getPlayerSurname();

	void setPlayerAge(const int&);
	int getPlayerAge();

	void setPlayerNumber(const int&);
	int getPlayerNumber();

	void setPlayerPerformance(const int&);
	int getPlayerPerformance();

	void setPlayerPosition(const char&);
	char getPlayerPosition();

private:
	string playerName;
	string playerSurname;

	int playerAge;
	int playerNumber;
	int playerPerformance;

	char playerPosition;
};

Player::Player(const string& playerNameRef, const string& playerSurnameRef, const int& playerAgeRef, const int& playerNumberRef, const int& playerPerformanceRef, const char& playerPositionRef)
	: playerName(playerNameRef),
	playerSurname(playerSurnameRef),
	playerAge(playerAgeRef),
	playerNumber(playerNumberRef),
	playerPerformance(playerPerformanceRef),
	playerPosition(playerPositionRef)
{
}

Player::~Player()
{
}

void Player::setPlayerName(const string& playerNameRef)
{
	playerName = playerNameRef;
}

string Player::getPlayerName()
{
	return playerName;
}

void Player::setPlayerSurname(const string& playerSurnameRef)
{
	playerSurname = playerSurnameRef;
}

string Player::getPlayerSurname()
{
	return playerSurname;
}

void Player::setPlayerAge(const int& playerAgeRef)
{
	playerAge = playerAgeRef;
}

int Player::getPlayerAge()
{
	return playerAge;
}

void Player::setPlayerNumber(const int& playerNumberRef)
{
	playerNumber = playerNumberRef;
}

int Player::getPlayerNumber()
{
	return playerNumber;
}

void Player::setPlayerPerformance(const int& playerPerformanceRef)
{
	playerPerformance = playerPerformanceRef;
}

int Player::getPlayerPerformance()
{
	return playerPerformance;
}

void Player::setPlayerPosition(const char& playerPositionRef)
{
	playerPosition = playerPositionRef;
}

char Player::getPlayerPosition()
{
	return playerPosition;
}

/* ---------------------------------------- ~Class Player ---------------------------------------- */

/* ---------------------------------------- Class Team ---------------------------------------- */

class Team
{
public:
	Team(const string& teamNameRef = "Unknown Team Name", const string& teamNicknameRef = "Unknown Team Nickname", const string& teamFormationRef = "4-4-2", const int& teamAveragePerformanceRef = -1, const int& teamAverageAgeRef = -1); // constructor
	~Team(); // destructor

	void setTeamName(const string&);
	string getTeamName();

	void setTeamNickname(const string&);
	string getTeamNickname();

	void setTeamFormation(const string&);
	string getTeamFormation();

	void setTeamAveragePerformance(const int&);
	int getTeamAveragePerformance();

	void setTeamAverageAge(const int&);
	int getTeamAverageAge();

	void setCoach(const string&, const string&);
	Coach getCoach();

	void setPlayers(vector<string>& namesRef, vector<string>& surnamesRef, const string formation = "4-4-2");
	void addPlayer(Player&);
	vector<Player>& getPlayers();

private:
	string teamName;
	string teamNickname;
	string teamFormation;

	int teamAveragePerformance;
	int teamAverageAge;

	Coach coach;

	vector<Player> players;
};

Team::Team(const string& teamNameRef, const string& teamNicknameRef, const string& teamFormationRef, const int& teamAveragePerformanceRef, const int& teamAverageAgeRef)
	: teamName(teamNameRef),
	teamNickname(teamNicknameRef),
	teamFormation(teamFormationRef),
	teamAveragePerformance(teamAveragePerformanceRef),
	teamAverageAge(teamAverageAgeRef)
{
}

Team::~Team()
{
	players.clear();
}

void Team::setTeamName(const string& teamNameRef)
{
	teamName = teamNameRef;
}

string Team::getTeamName()
{
	return teamName;
}

void Team::setTeamNickname(const string& teamNicknameRef)
{
	teamNickname = teamNicknameRef;
}

string Team::getTeamNickname()
{
	return teamNickname;
}

void Team::setTeamFormation(const string& teamFormationRef)
{
	teamFormation = teamFormationRef;
}

string Team::getTeamFormation()
{
	return teamFormation;
}

void Team::setTeamAveragePerformance(const int& teamAveragePerformanceRef)
{
	teamAveragePerformance = teamAveragePerformanceRef;
}

int Team::getTeamAveragePerformance()
{
	return teamAveragePerformance;
}

void Team::setTeamAverageAge(const int& teamAverageAgeRef)
{
	teamAverageAge = teamAverageAgeRef;
}

int Team::getTeamAverageAge()
{
	return teamAverageAge;
}

void Team::setCoach(const string& coachNameRef, const string& coachSurnameRef)
{
	coach.setCoachName(coachNameRef);

	coach.setCoachSurname(coachSurnameRef);
}

Coach Team::getCoach()
{
	return coach;
}

void Team::setPlayers(vector<string>& namesRef, vector<string>& surnamesRef, const string formation)
{
	this->setTeamFormation(formation);

	Player newPlayer;

	int averagePerformance = 0;
	int totalPerformance = 0;

	int averageAge = 0;
	int totalAge = 0;

	do
	{
		this->players.clear();

		averagePerformance = 0;
		totalPerformance = 0;

		averageAge = 0;
		totalAge = 0;

		for (int i = 0; i < 1; i++) // For One Goalkeeper
		{
			newPlayer.setPlayerName(namesRef[(rand() % namesRef.size())]);
			newPlayer.setPlayerSurname(surnamesRef[(rand() % surnamesRef.size())]);
			newPlayer.setPlayerAge(((rand() % 19) + 18)); // between 18 - 36
			newPlayer.setPlayerNumber(((rand() % 99) + 1)); // between 1 - 100
			newPlayer.setPlayerPosition('K');
			newPlayer.setPlayerPerformance(((rand() % 71) + 30)); // between 30 - 100

			this->players.push_back(newPlayer);
		}

		for (int i = 0; i < ((int)formation[0] - 48); i++) // For Defences
		{
			newPlayer.setPlayerName(namesRef[(rand() % namesRef.size())]);
			newPlayer.setPlayerSurname(surnamesRef[(rand() % surnamesRef.size())]);
			newPlayer.setPlayerAge(((rand() % 19) + 18)); // between 18 - 36
			newPlayer.setPlayerNumber(((rand() % 99) + 1));
			newPlayer.setPlayerPosition('D');
			newPlayer.setPlayerPerformance(((rand() % 71) + 30)); // between 30 - 100

			this->players.push_back(newPlayer);
		}

		for (int i = 0; i < ((int)formation[2] - 48); i++) // For Midfielder
		{
			newPlayer.setPlayerName(namesRef[(rand() % namesRef.size())]);
			newPlayer.setPlayerSurname(surnamesRef[(rand() % surnamesRef.size())]);
			newPlayer.setPlayerAge(((rand() % 19) + 18)); // between 18 - 36
			newPlayer.setPlayerNumber(((rand() % 99) + 1)); // between 1 - 100
			newPlayer.setPlayerPosition('O');
			newPlayer.setPlayerPerformance(((rand() % 71) + 30)); // between 30 - 100

			this->players.push_back(newPlayer);
		}

		for (int i = 0; i < ((int)formation[4] - 48); i++) // For Forward
		{
			newPlayer.setPlayerName(namesRef[(rand() % namesRef.size())]);
			newPlayer.setPlayerSurname(surnamesRef[(rand() % surnamesRef.size())]);
			newPlayer.setPlayerAge(((rand() % 19) + 18)); // between 18 - 36
			newPlayer.setPlayerNumber(((rand() % 99) + 1)); // between 1 - 100
			newPlayer.setPlayerPosition('F');
			newPlayer.setPlayerPerformance(((rand() % 71) + 30)); // between 30 - 100

			this->players.push_back(newPlayer);
		}

		for (int i = 0; i < 11; i++)
		{
			totalPerformance += this->players[i].getPlayerPerformance();

			totalAge += this->players[i].getPlayerAge();
		}

		averagePerformance = (totalPerformance / 11);
		this->setTeamAveragePerformance(averagePerformance);

		averageAge = (totalAge / 11);
		this->setTeamAverageAge(averageAge);

	} while ((averagePerformance < 60) || ((averageAge < 25) || (averageAge > 32)));
}

void Team::addPlayer(Player& playerRef)
{
	this->players.push_back(playerRef);
}

vector<Player>& Team::getPlayers()
{
	return players;
}

/* ---------------------------------------- ~Class Team ---------------------------------------- */

/* ---------------------------------------- Class TeamInLeague ---------------------------------------- */

class Match;

class TeamInLeague : public Team
{
public:
	TeamInLeague(const int& numberOfMatchesPlayedRef = 0, const int& numberOfMatchesWonRef = 0, const int& numberOfMatchesLostRef = 0, const int& numberOfMatchesTiedRef = 0, const int& totalScoredGoalNumberRef = 0, const int& totalConcededGoalNumberRef = 0, const int& goalAverageRef = 0, const int& totalPointRef = 0, const int& DPORef = 0, const int& OSPORef = 0, const int& FPORef = 0); // constructor
	~TeamInLeague(); // destructor

	const TeamInLeague& operator=(TeamInLeague);

	void setNumberOfMatchesPlayed(const int&);
	int getNumberOfMatchesPlayed();

	void setNumberOfMatchesWon(const int&);
	int getNumberOfMatchesWon();

	void setNumberOfMatchesLost(const int&);
	int getNumberOfMatchesLost();

	void setNumberOfMatchesTied(const int&);
	int getNumberOfMatchesTied();

	void setTotalScoredGoalNumber(const int&);
	int getTotalScoredGoalNumber();

	void setTotalConcededGoalNumber(const int&);
	int getTotalConcededGoalNumber();

	void setGoalAverage(const int&);
	int getGoalAverage();

	void setTotalPoint(const int&);
	int getTotalPoint();

	void addPlayedMatch(const Match&);
	vector<Match> getPlayedMatches();

	void calculateDPO();
	int getDPO();

	void calculateOSPO();
	int getOSPO();

	void calculateFPO();
	int getFPO();

private:
	int numberOfMatchesPlayed;
	int numberOfMatchesWon;
	int numberOfMatchesLost;
	int numberOfMatchesTied;

	int totalScoredGoalNumber; // Goals For
	int totalConcededGoalNumber; // Goals Against
	int goalAverage; // Goal Difference

	int totalPoint;

	vector<Match> playedMatches;

	int DPO; // Defans Performans Ortalaması
	int OSPO; // Orta Saha Performans Ortalaması
	int FPO; // Forvet Performans Ortalaması
};

TeamInLeague::TeamInLeague(const int& numberOfMatchesPlayedRef, const int& numberOfMatchesWonRef, const int& numberOfMatchesLostRef, const int& numberOfMatchesTiedRef, const int& totalScoredGoalNumberRef, const int& totalConcededGoalNumberRef, const int& goalAverageRef, const int& totalPointRef, const int& DPORef, const int& OSPORef, const int& FPORef) // constructor
	: numberOfMatchesPlayed(numberOfMatchesPlayedRef),
	numberOfMatchesWon(numberOfMatchesWonRef),
	numberOfMatchesLost(numberOfMatchesLostRef),
	numberOfMatchesTied(numberOfMatchesTiedRef),
	totalScoredGoalNumber(totalScoredGoalNumberRef),
	totalConcededGoalNumber(totalConcededGoalNumberRef),
	goalAverage(goalAverageRef),
	totalPoint(totalPointRef),
	DPO(DPORef),
	OSPO(OSPORef),
	FPO(FPORef)
{

}

TeamInLeague::~TeamInLeague() // destructor
{
	playedMatches.clear();
}

const TeamInLeague& TeamInLeague::operator=(TeamInLeague teamInLeagueRef)
{
	this->setTeamName(teamInLeagueRef.getTeamName());
	this->setTeamNickname(teamInLeagueRef.getTeamNickname());
	this->setTeamFormation(teamInLeagueRef.getTeamFormation());

	this->setTeamAveragePerformance(teamInLeagueRef.getTeamAveragePerformance());
	this->setTeamAverageAge(teamInLeagueRef.getTeamAverageAge());
	this->setCoach(teamInLeagueRef.getCoach().getCoachName(), teamInLeagueRef.getCoach().getCoachSurname());

	for (unsigned int i = 0; i < teamInLeagueRef.getPlayers().size(); i++)
	{
		this->addPlayer(teamInLeagueRef.getPlayers().at(i));
	}

	this->numberOfMatchesPlayed = teamInLeagueRef.numberOfMatchesPlayed;
	this->numberOfMatchesWon = teamInLeagueRef.numberOfMatchesWon;
	this->numberOfMatchesLost = teamInLeagueRef.numberOfMatchesLost;
	this->numberOfMatchesTied = teamInLeagueRef.numberOfMatchesTied;

	this->totalScoredGoalNumber = teamInLeagueRef.totalScoredGoalNumber;
	this->totalConcededGoalNumber = teamInLeagueRef.totalConcededGoalNumber;
	this->goalAverage = teamInLeagueRef.goalAverage;

	this->totalPoint = teamInLeagueRef.totalPoint;

	for (unsigned int i = 0; i < teamInLeagueRef.playedMatches.size(); i++)
	{
		this->playedMatches.push_back(teamInLeagueRef.playedMatches.at(i));
	}

	this->DPO = teamInLeagueRef.DPO;
	this->OSPO = teamInLeagueRef.OSPO;
	this->FPO = teamInLeagueRef.FPO;

	return (*this);
}

void TeamInLeague::setNumberOfMatchesPlayed(const int& numberOfMatchesPlayedRef)
{
	numberOfMatchesPlayed = numberOfMatchesPlayedRef;
}

int TeamInLeague::getNumberOfMatchesPlayed()
{
	return numberOfMatchesPlayed;
}

void TeamInLeague::setNumberOfMatchesWon(const int& numberOfMatchesWonRef)
{
	numberOfMatchesWon = numberOfMatchesWonRef;
}

int TeamInLeague::getNumberOfMatchesWon()
{
	return numberOfMatchesWon;
}

void TeamInLeague::setNumberOfMatchesLost(const int& numberOfMatchesLostRef)
{
	numberOfMatchesLost = numberOfMatchesLostRef;
}

int TeamInLeague::getNumberOfMatchesLost()
{
	return numberOfMatchesLost;
}

void TeamInLeague::setNumberOfMatchesTied(const int& numberOfMatchesTiedRef)
{
	numberOfMatchesTied = numberOfMatchesTiedRef;
}

int TeamInLeague::getNumberOfMatchesTied()
{
	return numberOfMatchesTied;
}

void TeamInLeague::setTotalScoredGoalNumber(const int& totalScoredGoalNumberRef)
{
	totalScoredGoalNumber = totalScoredGoalNumberRef;
}

int TeamInLeague::getTotalScoredGoalNumber()
{
	return totalScoredGoalNumber;
}

void TeamInLeague::setTotalConcededGoalNumber(const int& totalConcededGoalNumberRef)
{
	totalConcededGoalNumber = totalConcededGoalNumberRef;
}

int TeamInLeague::getTotalConcededGoalNumber()
{
	return totalConcededGoalNumber;
}

void TeamInLeague::setGoalAverage(const int& goalAverageRef)
{
	goalAverage = goalAverageRef;
}

int TeamInLeague::getGoalAverage()
{
	return goalAverage;
}

void TeamInLeague::setTotalPoint(const int& totalPointRef)
{
	totalPoint = totalPointRef;
}

int TeamInLeague::getTotalPoint()
{
	return totalPoint;
}

void TeamInLeague::addPlayedMatch(const Match& playedMatchRef)
{
	this->playedMatches.push_back(playedMatchRef);
}

vector<Match> TeamInLeague::getPlayedMatches()
{
	return playedMatches;
}

void TeamInLeague::calculateDPO()
{
	DPO = 0;

	for (unsigned int i = 0; i < this->getPlayers().size(); i++)
	{
		if (this->getPlayers().at(i).getPlayerPosition() == 'D')
		{
			DPO += this->getPlayers().at(i).getPlayerPerformance();
		}
	}
}

int TeamInLeague::getDPO()
{
	return DPO;
}

void TeamInLeague::calculateOSPO()
{
	OSPO = 0;

	for (unsigned int i = 0; i < this->getPlayers().size(); i++)
	{
		if (this->getPlayers().at(i).getPlayerPosition() == 'O')
		{
			OSPO += this->getPlayers().at(i).getPlayerPerformance();
		}
	}
}

int TeamInLeague::getOSPO()
{
	return OSPO;
}

void TeamInLeague::calculateFPO()
{
	FPO = 0;

	for (unsigned int i = 0; i < this->getPlayers().size(); i++)
	{
		if (this->getPlayers().at(i).getPlayerPosition() == 'F')
		{
			FPO += this->getPlayers().at(i).getPlayerPerformance();
		}
	}
}

int TeamInLeague::getFPO()
{
	return FPO;
}

/* ---------------------------------------- ~Class TeamInLeague ---------------------------------------- */

/* ---------------------------------------- Class Match ---------------------------------------- */

class Match
{
	friend ostream& operator<<(ostream&, const Match&);

public:
	Match(const int& team1WinPossibilityRef = 0, const int& team2WinPossibilityRef = 0, const int& team1GoalsRef = 0, const int& team2GoalsRef = 0, const int& matchOnWeekRef = 0, const string& matchIDRef = "");
	~Match();

	void playMatch(TeamInLeague& team1Ref, TeamInLeague& team2Ref, const unsigned int& matchOnWeek);

	void goalCalculation();

	string createMatchID();

	void setTeam1(TeamInLeague&);
	TeamInLeague getTeam1();

	void setTeam2(TeamInLeague&);
	TeamInLeague getTeam2();

	void calculateTeam1WinPossibility();
	int getTeam1WinPossibility();

	void calculateTeam2WinPossibility();
	int getTeam2WinPossibility();

	void setTeam1Goals(const int&);
	int getTeam1Goals();

	void setTeam2Goals(const int&);
	int getTeam2Goals();

	void setMatchOnWeek(const int&);
	int getMatchOnWeek();

	void setMatchID(const string&);
	string getMatchID();

private:
	TeamInLeague team1;
	TeamInLeague team2;

	int team1WinPossibility;
	int team2WinPossibility;

	int team1Goals;
	int team2Goals;

	int matchOnWeek;

	string matchID;

};

ostream& operator<<(ostream& output, Match& match)
{
	output << left << setw(35) << setfill(' ') << match.getTeam1().getTeamName() << ": " << match.getTeam1Goals() << "   -   " << match.getTeam2Goals() << " :" << right << setw(35) << setfill(' ') << match.getTeam2().getTeamName() << "   (" << match.getMatchID() << ")";

	return output;
}

Match::Match(const int& team1WinPossibilityRef, const int& team2WinPossibilityRef, const int& team1GoalsRef, const int& team2GoalsRef, const int& matchOnWeekRef, const string& matchIDRef)
	: team1WinPossibility(team1WinPossibilityRef),
	team2WinPossibility(team2WinPossibilityRef),
	team1Goals(team1GoalsRef),
	team2Goals(team2GoalsRef),
	matchOnWeek(matchOnWeekRef),
	matchID(matchIDRef)
{

}

Match::~Match()
{

}

void Match::playMatch(TeamInLeague& team1Ref, TeamInLeague& team2Ref, const unsigned int& matchOnWeekRef)
{
	this->setTeam1(team1Ref);
	this->setTeam2(team2Ref);

	this->goalCalculation();

	this->calculateTeam1WinPossibility();
	this->calculateTeam2WinPossibility();

	this->setMatchID(createMatchID());

	this->setMatchOnWeek(matchOnWeekRef);

	team1Ref.setNumberOfMatchesPlayed(team1Ref.getNumberOfMatchesPlayed() + 1);
	team2Ref.setNumberOfMatchesPlayed(team2Ref.getNumberOfMatchesPlayed() + 1);

	if (team1Goals > team2Goals) // Team 1 Won
	{
		team1Ref.setNumberOfMatchesWon(team1Ref.getNumberOfMatchesWon() + 1);

		team2Ref.setNumberOfMatchesLost(team2Ref.getNumberOfMatchesLost() + 1);
	}
	else if (team2Goals > team1Goals) // Team 2 Won
	{
		team2Ref.setNumberOfMatchesWon(team2Ref.getNumberOfMatchesWon() + 1);

		team1Ref.setNumberOfMatchesLost(team1Ref.getNumberOfMatchesLost() + 1);
	}
	else // (team1Goals == team2Goals) (Tied)
	{
		team1Ref.setNumberOfMatchesTied(team1Ref.getNumberOfMatchesTied() + 1);

		team2Ref.setNumberOfMatchesTied(team2Ref.getNumberOfMatchesTied() + 1);
	}

	team1Ref.setTotalScoredGoalNumber(team1Ref.getTotalScoredGoalNumber() + team1Goals);
	team1Ref.setTotalConcededGoalNumber(team1Ref.getTotalConcededGoalNumber() + team2Goals);
	team1Ref.setGoalAverage(team1Ref.getTotalScoredGoalNumber() - team1Ref.getTotalConcededGoalNumber());

	team2Ref.setTotalScoredGoalNumber(team2Ref.getTotalScoredGoalNumber() + team2Goals);
	team2Ref.setTotalConcededGoalNumber(team2Ref.getTotalConcededGoalNumber() + team1Goals);
	team2Ref.setGoalAverage(team2Ref.getTotalScoredGoalNumber() - team2Ref.getTotalConcededGoalNumber());

	team1Ref.setTotalPoint((team1Ref.getNumberOfMatchesWon() * 3) + (team1Ref.getNumberOfMatchesTied()));
	team2Ref.setTotalPoint((team2Ref.getNumberOfMatchesWon() * 3) + (team2Ref.getNumberOfMatchesTied()));
}

void Match::goalCalculation()
{
	int team1RandomGoal = (rand() % 7);
	int team2RandomGoal = (rand() % 7);

	// A.FPO > B.FPO durumunda A.gol++ (A.gol = 4 , B.gol = 1)
	// B.FPO > A.FPO durumunda B.gol++ (A.gol = 3, B.gol = 2)
	if (team1.getFPO() > team2.getFPO())
	{
		team1RandomGoal++;
	}
	else if (team2.getFPO() > team1.getFPO())
	{
		team2RandomGoal++;
	}

	// A.DPO > B.DPO durumunda B.gol-- (A.gol = 3 , B.gol = 0)
	// B.DPO > A.DPO durumunda A.gol-- (A.gol = 2 , B.gol = 1)
	if (team1.getDPO() > team2.getDPO())
	{
		team2RandomGoal--;
	}
	else if (team2.getDPO() > team1.getDPO())
	{
		team1RandomGoal--;
	}

	// A.OSPO > B.OSPO durumunda A.gol++ ve B.gol-- (A.gol = 4 , B.gol = 0)
	// B.OSPO > A.OSPO durumunda B.gol++ ve A.gol-- (A.gol = 2 , B.gol = 2)
	if (team1.getOSPO() > team2.getOSPO())
	{
		team1RandomGoal++;
		team2RandomGoal--;
	}
	else if (team2.getOSPO() > team1.getOSPO())
	{
		team2RandomGoal++;
		team1RandomGoal--;
	}

	// Son olarak ilgili takımların TOP değerleri karşılaştırılarak aşağıdaki biçimde güncelleme yapılır ve maç skoru elde edilmiş olur.
	// A.TOP > B.TOP durumunda A.gol++ veya B.gol-- (İlgili durumlardan biri rastgele seçilecek)
	// B.TOP > A.TOP durumunda B.gol++ veya A.gol-- (İlgili durumlardan biri rastgele seçilecek)
	if (team1.getTeamAveragePerformance() > team2.getTeamAveragePerformance())
	{
		int random = (rand() % 2); // random = 0 || random = 1

		// (İlgili durumlardan biri rastgele seçilecek)
		if (random == 0)
		{
			team1RandomGoal++;
		}
		else // random == 1
		{
			team2RandomGoal--;
		}
	}
	else if (team2.getTeamAveragePerformance() > team1.getTeamAveragePerformance())
	{
		int random = (rand() % 2); // random = 0 || random = 1

		// (İlgili durumlardan biri rastgele seçilecek)
		if (random == 0)
		{
			team2RandomGoal++;
		}
		else // random == 1
		{
			team1RandomGoal--;
		}
	}

	// (Hesaplanacak olacak en son gol değerinin negatif olamayacağını unutmayınız)
	if (team1RandomGoal < 0)
	{
		team1RandomGoal = 0;
	}

	if (team2RandomGoal < 0)
	{
		team2RandomGoal = 0;
	}

	this->team1Goals = team1RandomGoal;
	this->team2Goals = team2RandomGoal;
}

string Match::createMatchID()
{
	return (team1.getTeamNickname() + to_string(this->matchOnWeek) + team2.getTeamNickname());
}

void Match::setTeam1(TeamInLeague& team1Ref)
{
	team1 = team1Ref;
}

TeamInLeague Match::getTeam1()
{
	return team1;
}

void Match::setTeam2(TeamInLeague& team2Ref)
{
	team2 = team2Ref;
}

TeamInLeague Match::getTeam2()
{
	return team2;
}

void Match::calculateTeam1WinPossibility()
{
	this->team1WinPossibility = (int)round(team1.getTeamAveragePerformance() / (team1.getTeamAveragePerformance() + team2.getTeamAveragePerformance()));
}

int Match::getTeam1WinPossibility()
{
	return this->team1WinPossibility;
}

void Match::calculateTeam2WinPossibility()
{
	this->team2WinPossibility = (int)round(team2.getTeamAveragePerformance() / (team1.getTeamAveragePerformance() + team2.getTeamAveragePerformance()));
}

int Match::getTeam2WinPossibility()
{
	return this->team2WinPossibility;
}

void Match::setTeam1Goals(const int& team1GoalsRef)
{
	team1Goals = team1GoalsRef;
}

int Match::getTeam1Goals()
{
	return team1Goals;
}

void Match::setTeam2Goals(const int& team2GoalsRef)
{
	team2Goals = team2GoalsRef;
}

int Match::getTeam2Goals()
{
	return team2Goals;
}

void Match::setMatchOnWeek(const int& matchOnWeekRef)
{
	matchOnWeek = matchOnWeekRef;
}

int Match::getMatchOnWeek()
{
	return matchOnWeek;
}

void Match::setMatchID(const string& matchIDRef)
{
	matchID = matchIDRef;
}

string Match::getMatchID()
{
	return matchID;
}

/* ---------------------------------------- ~Class Match ---------------------------------------- */

/* ---------------------------------------- Class League ---------------------------------------- */

class League
{
public:
	League();
	~League();

	vector<vector<Match>> createFixture(vector<TeamInLeague>&);
	void printFixture();


private:
	vector<vector<Match>> leagueWeeks;

};

League::League()
{

}

League::~League()
{
	leagueWeeks.clear();
}

vector<vector<Match>> League::createFixture(vector<TeamInLeague>& stl_vector_team)
{
	Match tempMatch;

	vector<Match> tempMatchVector;

	for (unsigned int i = 0; i < stl_vector_team.size(); i++)
	{
		for (unsigned int j = i + 1; j < stl_vector_team.size(); j++)
		{
			tempMatch.playMatch(stl_vector_team.at(i), stl_vector_team.at(j), (i + 1));

			tempMatchVector.push_back(tempMatch);

			stl_vector_team.at(i).addPlayedMatch(tempMatch);
			stl_vector_team.at(j).addPlayedMatch(tempMatch);
		}

		this->leagueWeeks.push_back(tempMatchVector);

		tempMatchVector.clear();
	}

	return this->leagueWeeks;
}

void League::printFixture()
{
	for (unsigned int i = 0; i < leagueWeeks.size(); i++)
	{
		cout << endl << (i + 1) << ". Hafta Maçları" << endl;
		cout << "------------------------------" << endl;

		for (unsigned int j = 0; j < leagueWeeks.at(i).size(); j++)
		{
			cout << leagueWeeks.at(i).at(j) << endl;
		}
	}
}

/* ---------------------------------------- ~Class League ---------------------------------------- */

/* ---------------------------------------- Functions ---------------------------------------- */

inline string stringToUpper(const string str)
{
	string tempStr = "";

	for (unsigned int i = 0; i < str.size(); i++)
	{
		tempStr.push_back(toupper(str[i]));
	}

	return tempStr;
}

inline string stringToLower(const string str)
{
	string tempStr = "";

	for (unsigned int i = 0; i < str.size(); i++)
	{
		tempStr.push_back(tolower(str[i]));
	}

	return tempStr;
}

bool yesOrNo()
{
	string option;

	cout << "(Evet = E,e Hayır = H,h) = ";
	cin >> option;

	while (stringToUpper(option) != "E" && stringToUpper(option) != "H")
	{
		cout << endl << "(E,e veya H,h Harfleri Dışında Bir Değer Girildi!)" << endl;

		cout << "(Evet = E,e Hayır = H,h) = ";
		cin >> option;
	}

	if (stringToUpper(option) == "E")
	{
		return true;
	}
	else
	{
		return false;
	}

	cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)
}

vector<string> loadNames()
{
	vector<string> names;

	string line = "";

	ifstream nameFile("isim.txt");

	if (!(nameFile.is_open()))
	{
		cout << "!!! ERROR !!!" << endl;
		cout << "!!! Name File Couldn't Open Successfully !!!" << endl;

		return names;
	}

	while (getline(nameFile, line))
	{
		names.push_back(line);
	}

	nameFile.close();

	return names;
}

vector<string> loadSurnames()
{
	vector<string> surnames;

	string line = "";

	ifstream surnameFile("soyisim.txt");

	if (!(surnameFile.is_open()))
	{
		cout << "!!! ERROR !!!" << endl;
		cout << "!!! Surname File Couldn't Open Successfully !!!" << endl;

		return surnames;
	}

	while (getline(surnameFile, line))
	{
		surnames.push_back(line);
	}

	surnameFile.close();

	return surnames;
}

void printTeams(vector<TeamInLeague> stl_vector_team)
{
	typedef vector<TeamInLeague>::iterator Iterator; // iterator type

	int counter = 1;

	cout << left << setw(10) << setfill(' ') << "Numara" << left << setw(35) << setfill(' ') << "Takım" << left << setw(15) << setfill(' ') << " Takma İsim" << left << setw(25) << setfill(' ') << "  Teknik Direktör" << endl;
	cout << left << setw(10) << setfill(' ') << "------" << left << setw(35) << setfill(' ') << "-----" << left << setw(15) << setfill(' ') << "----------" << left << setw(25) << setfill(' ') << "---------------" << endl << endl;

	for (Iterator p = stl_vector_team.begin(); p != stl_vector_team.end(); ++p)
	{
		cout << left << setw(10) << setfill(' ') << ("[" + to_string(counter) + "]") << left << setw(35) << setfill(' ') << (*p).getTeamName() << left << setw(15) << setfill(' ') << (*p).getTeamNickname() << left << setw(25) << setfill(' ') << ((*p).getCoach().getCoachName() + " " + (*p).getCoach().getCoachSurname()) << endl;

		counter++;
	}

	stl_vector_team.clear();
}

void printChosenTeam(vector<TeamInLeague> stl_vector_team)
{
	typedef vector<TeamInLeague>::iterator Iterator; // iterator type

	string chosenTeamName;

	bool isItFound = false;

	int counter = 1;

	cout << left << setw(10) << setfill(' ') << "Numara" << left << setw(35) << setfill(' ') << "Takım" << endl;
	cout << left << setw(10) << setfill(' ') << "------" << left << setw(35) << setfill(' ') << "-----" << endl << endl;

	for (Iterator p = stl_vector_team.begin(); p != stl_vector_team.end(); ++p)
	{
		cout << left << setw(10) << setfill(' ') << ("[" + to_string(counter) + "]") << left << setw(35) << setfill(' ') << (*p).getTeamName() << endl;

		counter++;
	}

	cout << endl;

	cout << "Detaylı Görüntülenmesini İstediğiniz Takımın İsmini Giriniz = ";
	cin >> chosenTeamName;

	while (!isItFound)
	{
		counter = 0;

		for (Iterator p = stl_vector_team.begin(); p != stl_vector_team.end(); ++p)
		{
			if (stringToLower(chosenTeamName) == stringToLower(p->getTeamName()))
			{
				isItFound = true;

				break;
			}

			counter++;
		}

		if (isItFound)
		{
			system("cls");

			cout << left << setw(35) << setfill(' ') << "Takım" << left << setw(15) << setfill(' ') << " Takma İsim" << left << setw(25) << setfill(' ') << " Teknik Direktör" << endl;
			cout << left << setw(35) << setfill(' ') << "-----" << left << setw(15) << setfill(' ') << "----------" << left << setw(25) << setfill(' ') << "---------------" << endl << endl;

			cout << left << setw(35) << setfill(' ') << stl_vector_team[counter].getTeamName() << left << setw(15) << setfill(' ') << stl_vector_team[counter].getTeamNickname() << left << setw(25) << setfill(' ') << (stl_vector_team[counter].getCoach().getCoachName() + " " + stl_vector_team[counter].getCoach().getCoachSurname()) << endl;
		}
		else
		{
			cout << endl << "Takım İsmi Bulunamadı! Tekrar Denemek İstiyor Musunuz?";

			if (yesOrNo())
			{
				cout << "Detaylı Görüntülenmesini İstediğiniz Takımın İsmini Giriniz = ";
				cin >> chosenTeamName;
			}
			else
			{
				break;
			}
		}
	}

	stl_vector_team.clear();
}

inline bool isSameNickame(vector<TeamInLeague> stl_vector_team, const string str)
{
	for (unsigned int i = 0; i < stl_vector_team.size(); i++)
	{
		if (str.compare(stl_vector_team.at(i).getTeamNickname()) == 0)
		{
			return true;
		}
	}

	return false;
}

string wordAbbreviation(vector<TeamInLeague> stl_vector_team, TeamInLeague& teamRef)
{
	string teamRefName = teamRef.getTeamName();

	string teamNickname = "";

	int seperatorPos = teamRefName.find(" ");

	if (seperatorPos == -1) // if the string consists of one word 
	{
		teamNickname.push_back(teamRefName[0]);

		teamNickname.push_back(teamRefName[1]);

		if (isSameNickame(stl_vector_team, teamNickname))
		{
			teamNickname.push_back(teamRefName[2]);
		}

		unsigned int i = 3;

		while (isSameNickame(stl_vector_team, teamNickname) && (i < teamRefName.size()))
		{
			teamNickname.pop_back();

			teamNickname.push_back(teamRefName[i]);

			i++;
		}
	}
	else // if the string consists of more than one word 
	{
		teamNickname.push_back(teamRefName[0]);

		teamNickname.push_back(teamRefName[seperatorPos + 1]);

		if (isSameNickame(stl_vector_team, teamNickname))
		{
			teamNickname.push_back(teamRefName[seperatorPos + 2]);
		}

		unsigned int i = seperatorPos + 3;

		while (isSameNickame(stl_vector_team, teamNickname) && (i < teamRefName.size()))
		{
			teamNickname.pop_back();

			teamNickname.push_back(teamRefName[i]);

			i++;
		}
	}

	return stringToUpper(teamNickname);
}

vector<TeamInLeague> addEighteenTeamsFromFile(vector<string>& namesRef, vector<string>& surnamesRef)
{
	vector<TeamInLeague> teams;

	ifstream teamFile("takimlar.txt");

	if (!(teamFile.is_open()))
	{
		cout << "!!! ERROR !!!" << endl;
		cout << "!!! File Couldn't Open Successfully !!!" << endl;

		return teams;
	}

	for (int i = 0; i < 18; i++) // Read Teams From File 18 Times
	{
		TeamInLeague newTeam;

		string line = "";

		int seperatorPos = 0;
		int tempSeperatorPos = 0;

		getline(teamFile, line);

		seperatorPos = line.find("-");

		string newTeamName = line.substr(0, seperatorPos - 1);
		newTeam.setTeamName(newTeamName);

		tempSeperatorPos = seperatorPos + 2;

		seperatorPos = line.find(" ", tempSeperatorPos); // seperator ' ' finder
		string newCoachName = line.substr(tempSeperatorPos, seperatorPos - tempSeperatorPos);

		string newCoachSurname = line.substr(seperatorPos + 1, line.size() - seperatorPos);

		newTeam.setCoach(newCoachName, newCoachSurname);

		newTeam.setTeamNickname(wordAbbreviation(teams, newTeam));

		newTeam.setPlayers(namesRef, surnamesRef);

		teams.push_back(newTeam);
	}

	teamFile.close();

	return teams;
}

void addOneTeamFromFile(vector<string>& namesRef, vector<string>& surnamesRef, vector<TeamInLeague>& stl_vector_team)
{
	vector<TeamInLeague> teams;

	TeamInLeague newTeam;

	string newTeamName;
	string newCoachName;
	string newCoachSurname;
	string newFormation;

	ifstream teamFile("takimlar.txt");

	if (!(teamFile.is_open()))
	{
		cout << "!!! ERROR !!!" << endl;
		cout << "!!! File Couldn't Open Successfully !!!" << endl;

		return;
	}

	string line;

	while (getline(teamFile, line))
	{
		bool isMatching = false;

		int seperatorPos = 0;
		int tempSeperatorPos = 0;

		seperatorPos = line.find("-");

		newTeamName = line.substr(0, seperatorPos - 1);

		for (unsigned int i = 0; i < stl_vector_team.size(); i++)
		{
			if (newTeamName.compare(stl_vector_team.at(i).getTeamName()) == 0)
			{
				isMatching = true;

				break;
			}
		}

		if (!isMatching)
		{
			tempSeperatorPos = seperatorPos + 2;

			seperatorPos = line.find(" ", tempSeperatorPos); // seperator ' ' finder
			newCoachName = line.substr(tempSeperatorPos, seperatorPos - tempSeperatorPos);

			newCoachSurname = line.substr(seperatorPos + 1, line.size() - seperatorPos);

			newTeam.setTeamName(stringToUpper(newTeamName));
			newTeam.setCoach(stringToUpper(newCoachName), stringToUpper(newCoachSurname));
			newTeam.setTeamNickname(stringToUpper(wordAbbreviation(stl_vector_team, newTeam)));

			teams.push_back(newTeam);
		}
	}

	cout << right << setw(30) << setfill(' ') << "----------------------------------------------------------------------" << endl;
	cout << right << setw(30) << setfill(' ') << "-------------------- Eklenebilir Takımlar Listesi --------------------" << endl;
	cout << right << setw(30) << setfill(' ') << "----------------------------------------------------------------------" << endl << endl;

	printTeams(teams);

	unsigned int teamNumber;

	int counter = 1;

	cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

	cout << endl << "Eklemek İstediğiniz Takımın Numarasını Giriniz = ";
	cin >> teamNumber;

	while (teamNumber < 1 || teamNumber > teams.size())
	{
		cout << endl << teamNumber << ". Numarada Bir Takım Yoktur! Lütfen Tekrar Deneyiniz!";

		cout << endl << "Eklemek İstediğiniz Takımın Numarasını Giriniz = ";
		cin >> teamNumber;
	}

	cout << endl;

	cout << "Takım Formasyonu Eklemek İstiyor Musunuz? (Eklemek İstemezseniz Varsayılan Olarak 4-4-2 Olacaktır)" << endl;

	if (yesOrNo())
	{
		cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

		cout << "Eklemek İstediğiniz Takımın Formasyonunu Giriniz (Örnek: 4-4-2, 3-5-2, 4-5-1 vb.) = ";
		cin >> newFormation;

		while ((newFormation.size() != 5) || ((((int)newFormation[0] - 48) + ((int)newFormation[2] - 48) + ((int)newFormation[4]) - 48) != 10) || (newFormation[1] != '-' || newFormation[3] != '-')) // For ASCII (Example: ((int)'4' = 52), (52 - 48 = 4), ((int)'4' - 48 = 4))
		{
			cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

			cout << endl << endl << "Yanlış bir formasyon girdiniz! (Formasyon Örnekte Belirtilen Biçimde Girilmelidir!) Lütfen Tekrar Deneyiniz!" << endl;

			cout << "Eklemek İstediğiniz Takımın Formasyonunu Giriniz (Örnek: 4-4-2, 3-5-2, 4-5-1 vb.) = ";
			cin >> newFormation;
		}

		cout << endl;
	}
	else
	{
		newFormation = "4-4-2";
	}

	teams[teamNumber].setPlayers(namesRef, surnamesRef, newFormation);

	typedef vector<TeamInLeague>::iterator Iterator; // iterator type

	for (Iterator p = teams.begin(); p != teams.end(); ++p)
	{
		if (teamNumber == counter)
		{
			stl_vector_team.push_back(teams.at(counter - 1));

			system("cls");

			cout << "Takım Başarıyla Eklendi!" << endl << endl;
			cout << right << setw(30) << setfill(' ') << "------------------------------------------------------------" << endl;
			cout << right << setw(30) << setfill(' ') << "-------------------- Yeni Takım Listesi --------------------" << endl;
			cout << right << setw(30) << setfill(' ') << "------------------------------------------------------------" << endl << endl;

			printTeams(stl_vector_team);

			return;
		}
		counter++;
	}

	teams.clear();

	teamFile.close();
}

void addTeam(vector<string>& namesRef, vector<string>& surnamesRef, vector<TeamInLeague>& stl_vector_team)
{
	TeamInLeague newTeam;

	string newTeamName;
	string newCoachName;
	string newCoachSurname;
	string newFormation;

	cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

	cout << "Eklemek İstediğiniz Takımın İsmini Giriniz = ";
	getline(cin, newTeamName);

	cout << endl;

	cout << "Eklemek İstediğiniz Takımın Koçunun İsmini Giriniz = ";
	getline(cin, newCoachName);

	cout << endl;

	cout << "Eklemek İstediğiniz Takımın Koçunun Soyismini Giriniz = ";
	getline(cin, newCoachSurname);

	cout << endl;

	cout << "Takım Formasyonu Eklemek İstiyor Musunuz? (Eklemek İstemezseniz Varsayılan Olarak 4-4-2 Olacaktır)" << endl;

	if (yesOrNo())
	{
		cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

		cout << "Eklemek İstediğiniz Takımın Formasyonunu Giriniz (Örnek: 4-4-2, 3-5-2, 4-5-1 vb.) = ";
		cin >> newFormation;

		while ((newFormation.size() != 5) || ((((int)newFormation[0] - 48) + ((int)newFormation[2] - 48) + ((int)newFormation[4]) - 48) != 10) || (newFormation[1] != '-' || newFormation[3] != '-')) // For ASCII (Example: ((int)'4' = 52), (52 - 48 = 4), ((int)'4' - 48 = 4))
		{
			cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

			cout << endl << endl << "Yanlış bir formasyon girdiniz! (Formasyon Örnekte Belirtilen Biçimde Girilmelidir!) Lütfen Tekrar Deneyiniz!" << endl;

			cout << "Eklemek İstediğiniz Takımın Formasyonunu Giriniz (Örnek: 4-4-2, 3-5-2, 4-5-1 vb.) = ";
			cin >> newFormation;
		}

		cout << endl;
	}
	else
	{
		newFormation = "4-4-2";
	}

	newTeam.setTeamName(stringToUpper(newTeamName));
	newTeam.setCoach(stringToUpper(newCoachName), stringToUpper(newCoachSurname));
	newTeam.setTeamNickname(stringToUpper(wordAbbreviation(stl_vector_team, newTeam)));

	newTeam.setPlayers(namesRef, surnamesRef, newFormation);

	stl_vector_team.push_back(newTeam);

	system("cls");

	cout << "Takım Başarıyla Eklendi!" << endl << endl;
	cout << right << setw(30) << setfill(' ') << "------------------------------------------------------------" << endl;
	cout << right << setw(30) << setfill(' ') << "-------------------- Yeni Takım Listesi --------------------" << endl;
	cout << right << setw(30) << setfill(' ') << "------------------------------------------------------------" << endl << endl;

	printTeams(stl_vector_team);
}

void removeTeam(vector<TeamInLeague>& stl_vector_team)
{
	printTeams(stl_vector_team);

	unsigned int teamNumber;

	int counter = 1;

	cout << endl << "Çıkarmak İstediğiniz Takımın Numarasını Giriniz = ";
	cin >> teamNumber;

	while (teamNumber < 1 || teamNumber > stl_vector_team.size())
	{
		cout << endl << teamNumber << ". Numarada Bir Takım Yoktur! Lütfen Tekrar Deneyiniz!";

		cout << endl << "Çıkarmak İstediğiniz Takımın Numarasını Giriniz = ";
		cin >> teamNumber;
	}

	typedef vector<TeamInLeague>::iterator Iterator; // iterator type

	for (Iterator p = stl_vector_team.begin(); p != stl_vector_team.end(); ++p)
	{
		if (teamNumber == counter)
		{
			stl_vector_team.erase(p);

			system("cls");

			cout << "Takım Başarıyla Çıkarıldı!" << endl << endl;
			cout << right << setw(30) << setfill(' ') << "------------------------------------------------------------" << endl;
			cout << right << setw(30) << setfill(' ') << "-------------------- Yeni Takım Listesi --------------------" << endl;
			cout << right << setw(30) << setfill(' ') << "------------------------------------------------------------" << endl << endl;

			printTeams(stl_vector_team);

			return;
		}

		counter++;
	}
}

string printPlayersFromChosenTeam(vector<TeamInLeague>& stl_vector_team)
{
	typedef vector<TeamInLeague>::iterator Iterator; // iterator type

	string chosenTeamNickname;

	bool isItFound = false;

	printTeams(stl_vector_team);

	cout << endl;

	cout << "Oyuncularının Görüntülenmesini İstediğiniz Takımın Takma İsmini Giriniz = ";
	cin >> chosenTeamNickname;

	while (!isItFound)
	{
		int counter = 0;

		for (Iterator p = stl_vector_team.begin(); p != stl_vector_team.end(); ++p)
		{
			if (stringToLower(chosenTeamNickname) == stringToLower(p->getTeamNickname()))
			{
				isItFound = true;

				break;
			}

			counter++;
		}

		if (isItFound)
		{
			system("cls");

			cout << "Takım = " << stl_vector_team[counter].getTeamName() << endl;
			cout << "Teknik Direktör = " << (stl_vector_team[counter].getCoach().getCoachName() + " " + stl_vector_team[counter].getCoach().getCoachSurname()) << endl;
			cout << "Takım Ortalama Performansı = " << stl_vector_team[counter].getTeamAveragePerformance() << endl;
			cout << "Takım Ortalama Yaşı = " << stl_vector_team[counter].getTeamAverageAge() << endl;
			cout << "Takımın Formasyon Bilgisi = " << stl_vector_team[counter].getTeamFormation() << endl << endl;

			cout << left << setw(20) << setfill(' ') << "Forma Numarası" << left << setw(35) << setfill(' ') << " Oyuncu" << left << setw(10) << setfill(' ') << " Mevki" << left << setw(10) << setfill(' ') << " Yaş" << left << setw(15) << setfill(' ') << "  Performans" << endl;
			cout << left << setw(20) << setfill(' ') << "--------------" << left << setw(35) << setfill(' ') << "------" << left << setw(10) << setfill(' ') << "-----" << left << setw(10) << setfill(' ') << "---" << left << setw(15) << setfill(' ') << "----------" << endl << endl;

			for (unsigned int i = 0; i < stl_vector_team[counter].getPlayers().size(); i++)
			{
				cout << left << setw(20) << setfill(' ') << stl_vector_team[counter].getPlayers()[i].getPlayerNumber() << left << setw(35) << setfill(' ') << (stl_vector_team[counter].getPlayers()[i].getPlayerName() + " " + stl_vector_team[counter].getPlayers()[i].getPlayerSurname()) << left << setw(10) << setfill(' ') << stl_vector_team[counter].getPlayers()[i].getPlayerPosition() << left << setw(10) << setfill(' ') << stl_vector_team[counter].getPlayers()[i].getPlayerAge() << left << setw(15) << setfill(' ') << stl_vector_team[counter].getPlayers()[i].getPlayerPerformance() << endl;
			}

		}
		else
		{
			cout << endl << "Takım İsmi Bulunamadı! Tekrar Denemek İstiyor Musunuz?";

			if (yesOrNo())
			{
				cout << endl << "Oyuncularının Görüntülenmesini İstediğiniz Takımın Takma İsmini Giriniz = ";
				cin >> chosenTeamNickname;
			}
			else
			{
				break;
			}
		}
	}

	return chosenTeamNickname;
}

void updatePlayerPerformance(vector<TeamInLeague>& stl_vector_team)
{
	string chosenTeamNickname = stringToUpper(printPlayersFromChosenTeam(stl_vector_team));

	TeamInLeague* tempTeam = NULL;

	bool isMatching = false;

	for (unsigned int i = 0; i < stl_vector_team.size(); i++)
	{
		if (chosenTeamNickname.compare(stl_vector_team.at(i).getTeamNickname()) == 0)
		{
			tempTeam = &(stl_vector_team.at(i));

			isMatching = true;

			break;
		}
	}

	if (!isMatching)
	{
		return;
	}

	int chosenPlayerNumber;

	cout << endl << "Performansını Güncellemek İstediğiniz Oyuncunun Forma Numarasını Giriniz = ";
	cin >> chosenPlayerNumber;

	int indexOfTempPlayer;

	isMatching = false;

	for (unsigned int i = 0; i < tempTeam->getPlayers().size(); i++)
	{
		if (chosenPlayerNumber == tempTeam->getPlayers().at(i).getPlayerNumber())
		{
			indexOfTempPlayer = i;

			isMatching = true;

			break;
		}
	}

	while (!isMatching)
	{
		cout << endl << chosenPlayerNumber << " Numarasına Sahip Bir Oyuncu Bulunamadı!";
		cout << endl << "Performansını Güncellemek İstediğiniz Oyuncunun Forma Numarasını Giriniz = ";
		cin >> chosenPlayerNumber;

		for (unsigned int i = 0; i < tempTeam->getPlayers().size(); i++)
		{
			if (chosenPlayerNumber == tempTeam->getPlayers().at(i).getPlayerNumber())
			{
				indexOfTempPlayer = i;

				isMatching = true;

				break;
			}
		}
	}

	cout << endl << "Oyuncunun Güncel Performansı = " << tempTeam->getPlayers().at(indexOfTempPlayer).getPlayerPerformance();

	int newPlayerPerformance;

	cout << endl << endl << "Oyuncunun Yeni Performans Değerini Giriniz = ";
	cin >> newPlayerPerformance;

	while (((newPlayerPerformance < 30) || (newPlayerPerformance > 100)) || ((((tempTeam->getTeamAveragePerformance() * 11) - tempTeam->getPlayers().at(indexOfTempPlayer).getPlayerPerformance() + newPlayerPerformance) / 11) < 60))
	{
		if (newPlayerPerformance < 30)
		{
			cout << "Girdiğiniz Performans Değeri 30dan Küçük Olmamalı! Lütfen Tekrar Giriniz!";
		}
		else if (newPlayerPerformance > 100)
		{
			cout << "Girdiğiniz Performans Değeri 100den Büyük Olmamalı! Lütfen Tekrar Giriniz!";
		}
		else if ((((tempTeam->getTeamAveragePerformance() * 11) - tempTeam->getPlayers().at(indexOfTempPlayer).getPlayerPerformance() + newPlayerPerformance) / 11) < 60)
		{
			cout << "Oyuncu İçin Girdiğiniz Performans Değeri Sonucunda Takım Ortalama Performansı 60tan Küçük Bir Değere Düştü! Lütfen Tekrar Giriniz!";
		}

		cout << endl << endl << "Oyuncunun Yeni Performans Değerini Giriniz = ";
		cin >> newPlayerPerformance;
	}

	int tempPlayerPerformance = tempTeam->getPlayers().at(indexOfTempPlayer).getPlayerPerformance();

	tempTeam->getPlayers().at(indexOfTempPlayer).setPlayerPerformance(newPlayerPerformance);

	tempTeam->setTeamAveragePerformance((((tempTeam->getTeamAveragePerformance() * 11) - tempPlayerPerformance + newPlayerPerformance) / 11));

	cout << endl << "Oyuncunun Performansı Başarıyla Güncellendi! " << tempPlayerPerformance << " ---> " << tempTeam->getPlayers().at(indexOfTempPlayer).getPlayerPerformance();
}

void printChosenTeamMatches(vector<TeamInLeague>& stl_vector_team)
{
	typedef vector<TeamInLeague>::iterator Iterator; // iterator type

	string chosenTeamNickname;

	bool isItFound = false;

	printTeams(stl_vector_team);

	cout << endl;

	cout << "Maçlarının Görüntülenmesini İstediğiniz Takımın Takma İsmini Giriniz = ";
	cin >> chosenTeamNickname;

	while (!isItFound)
	{
		int counter = 0;

		for (Iterator p = stl_vector_team.begin(); p != stl_vector_team.end(); ++p)
		{
			if (stringToLower(chosenTeamNickname) == stringToLower(p->getTeamNickname()))
			{
				isItFound = true;

				break;
			}

			counter++;
		}

		if (isItFound)
		{
			system("cls");

			cout << "Takım = " << stl_vector_team[counter].getTeamName() << endl;
			cout << "Teknik Direktör = " << (stl_vector_team[counter].getCoach().getCoachName() + " " + stl_vector_team[counter].getCoach().getCoachSurname()) << endl;
			cout << "Takım Ortalama Performansı = " << stl_vector_team[counter].getTeamAveragePerformance() << endl;
			cout << "Takım Ortalama Yaşı = " << stl_vector_team[counter].getTeamAverageAge() << endl;
			cout << "Takımın Formasyon Bilgisi = " << stl_vector_team[counter].getTeamFormation() << endl << endl;

			for (unsigned int i = 0; i < stl_vector_team[counter].getPlayedMatches().size(); i++)
			{
				cout << endl << (i + 1) << ". Hafta Maçı" << endl;
				cout << "-------------------------------" << endl;

				cout << stl_vector_team[counter].getPlayedMatches().at(i) << endl;
			}

		}
		else
		{
			cout << endl << "Takım İsmi Bulunamadı! Tekrar Denemek İstiyor Musunuz?";

			if (yesOrNo())
			{
				cout << endl << "Oyuncularının Görüntülenmesini İstediğiniz Takımın Takma İsmini Giriniz = ";
				cin >> chosenTeamNickname;
			}
			else
			{
				break;
			}
		}
	}
}

/* ---------------------------------------- ~Functions ---------------------------------------- */

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand((unsigned int)time(NULL));

	int x = 5;

	cout << x << endl;

	vector<string> names = loadNames();
	vector<string> surnames = loadSurnames();

	vector<TeamInLeague> teams = addEighteenTeamsFromFile(names, surnames); // The program automatically adds 18 teams when first time it runs, and all 18 teams are in a 4-4-2 formation.

	/*League league;

	league.createFixture(teams);*/

	char option;

	while (true)
	{
		system("cls");

		cout << "Programda Aktif Olarak " << teams.size() << " Adet Takım Bulunmaktadır!" << endl << endl;

		cout << "İŞLEMLER!" << endl << endl;

		cout << "[1] Dosyadan Bir Tane Takım Ekle" << endl;
		cout << "[2] Konsoldan Manuel Olarak Takım Ekle" << endl;
		cout << "[3] Takım Çıkar" << endl;
		cout << "[4] Bir Takımı Detaylı Görüntüle" << endl;
		cout << "[5] Tüm Takımları Detaylı Görüntüle" << endl;
		cout << "[6] Bir Takımın Tüm Oyuncularını Görüntüle" << endl;
		cout << "[7] Oyuncu Performansı Güncelle" << endl;
		cout << "------------------------------------------" << endl;
		cout << "[8] Fikstürü Görüntüle" << endl;
		cout << "------------------------------------------" << endl;
		cout << "[9] Programdan Çık" << endl;

		cout << endl << "SEÇİMİNİZ [0..7] = ";

		cin >> option;

		switch (option)
		{
		case '1':
			system("cls");
			addOneTeamFromFile(names, surnames, teams);
			break;
		case '2':
			system("cls");
			addTeam(names, surnames, teams);
			break;
		case '3':
			system("cls");
			removeTeam(teams);
			break;
		case '4':
			system("cls");
			printChosenTeam(teams);
			break;
		case '5':
			system("cls");
			printTeams(teams);
			break;
		case '6':
			system("cls");
			printPlayersFromChosenTeam(teams);
			break;
		case '7':
			system("cls");
			updatePlayerPerformance(teams);
			break;
		case '8':
			system("cls");
			//league.printFixture();
			break;
		case '9':
			return 0;
		default: // Invalid Operation!
			continue;
		}

		while (option != 'M' && option != 'm')
		{
			cout << endl << endl << "[M] Ana Menüye Dönmek İçin = ";

			cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)

			cin >> option;
		}
	}

	names.clear();
	surnames.clear();

	teams.clear();

	system("pause");
}