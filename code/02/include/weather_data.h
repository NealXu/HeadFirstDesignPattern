#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_

#include <vector>
#include "subject.h"


using std::vector;

class WeatherData : public ISubject
{
public:
    WeatherData();
    ~WeatherData();

    virtual void RegisterObserver(IObserver *pOb);
    virtual void RemoveObserver(IObserver *pOb);
    virtual void NotifyObservers();

    void MeasurementsChanged();
    void SetMeasurements(float temp, float humi, float pres);

    /* other methods */

private:
    vector<IObserver *> Obs;
    float temperature;
    float humidity;
    float pressure;
    
};


#endif
/* end of weather_data.h */

