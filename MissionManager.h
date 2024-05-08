#pragma once
#include "Mission.h"

class MissionManager
{
private:
	vector<Mission> missions;
public:
	~MissionManager();

	void newMission(const Mission& mission);
	void completeMission(Mission& mission, bool failed);

	vector<Mission> all();
	Mission get(string id);
};