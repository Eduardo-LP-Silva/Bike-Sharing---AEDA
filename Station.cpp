#include "Station.h"

using namespace std;

Station::Station(int max_spots,string localization, int x, int y)
{
    vector<Bike *> empty_available_bikes;

    no_max_spots = max_spots;
    position = localization;
    available_bikes = empty_available_bikes;
	Localization.first = x;
	Localization.second = y;
}

vector<Bike *> Station::getAvailableBikes() const
{
	return available_bikes;
}

bool Station::findBike(string type) const
{
	for (unsigned int i = 0; i < available_bikes.size(); i++)
		if(available_bikes[i]->getID() == type)
			return true;
		
	return false;
}

pair<int, int> Station::getLocalization() const
{
	return Localization;
}

