#include "MissionManager.h"

void MissionManager::newMission(const Mission& mission)
{
	this->missions.push_back(mission);
}

void MissionManager::completeMission(Mission& mission, bool failed)
{
	mission.complete(failed);
}

vector<Mission> MissionManager::all()
{
	return this->missions;
}

Mission MissionManager::get(string id)
{
	for (Mission mission : this->missions)
	{
		if (mission.id == id)
		{
			return mission;
		}
	}
}

MissionManager::~MissionManager()
{
	delete this->missions;
}