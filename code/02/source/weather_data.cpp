#include <iostream>
#include "weather_data.h"

using std::cout;
using std::endl;


WeatherData::WeatherData()
{
    temperature = 0;
    humidity = 0;
    pressure = 0;
    changed = false;
}

WeatherData::~WeatherData()
{}

void WeatherData::RegisterObserver(IObserver * pOb)
{
    if (NULL == pOb)
    {
        cout << "pOb is null, can't register" << endl;
        return;
    }

    Obs.push_back(pOb);
    //cout << "registerd ob: " << pOb << endl;
}

void WeatherData::RemoveObserver(IObserver * pOb)
{
    if (NULL == pOb)
    {
        cout << "pOb is null, can't remove" << endl;
        return;
    }

    for (vector<IObserver *>::iterator iter = Obs.begin(); iter != Obs.end(); ++iter)
    {
        if (*iter == pOb)
        {
            //cout << "removed ob: " << *iter << endl;
            Obs.erase(iter);
            return;
        }
    }
}

void WeatherData::NotifyObservers()
{
    if (HasChanged())
    {
        for (vector<IObserver *>::iterator iter = Obs.begin(); iter != Obs.end(); ++iter)
        {
            //cout << "notified ob: " << *iter << endl;
            (*iter)->Update(temperature, humidity, pressure);
        }

        ClearChanged();
    }
    
}

void WeatherData::SetChanged()
{
    changed = true;
}
void WeatherData::ClearChanged()
{
    changed = false;
}

bool WeatherData::HasChanged()
{
    return changed;
}


void WeatherData::MeasurementsChanged()
{
    SetChanged();
    NotifyObservers();
}

void WeatherData::SetMeasurements(float temp, float humi, float pres)
{
    this->temperature = temp;
    this->humidity = humi;
    this->pressure = pres;

    MeasurementsChanged();
}

/* end of weather_data.cpp */
