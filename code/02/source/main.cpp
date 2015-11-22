#include "subject.h"
#include "observer.h"
#include "weather_data.h"
#include "current_condi_displayer.h"
#include "statistics_displayer.h"


int main()
{
    WeatherData wd;
    CurrentCondiDisplayer currDisp(&wd);
    StatisticsDisplayer statDisp(&wd);

    wd.SetMeasurements(79, 80, 2);
    wd.SetMeasurements(50, 70, 3);
    wd.SetMeasurements(100, 60, 4);

    return 0;
}
