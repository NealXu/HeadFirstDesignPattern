#include <iostream>
#include "weather_data.h"

using std::cout;
using std::endl;


WeatherData::WeatherData()
{
    temperature = 0;
    humidity = 0;
    pressure = 0;
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
            Obs.erase(iter);
            return;
        }
    }
}

void WeatherData::NotifyObservers()
{
    for (vector<IObserver *>::iterator iter = Obs.begin(); iter != Obs.end(); ++iter)
    {
        (*iter)->Update(temperature, humidity, pressure);
    }
}

void WeatherData::MeasurementsChanged()
{
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
