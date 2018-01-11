///////////////////////////////////////////////////////////
//  WeatherData.h
//  Implementation of the Class WeatherData
//  Original author: mmi
///////////////////////////////////////////////////////////

#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Speed.h"

namespace Sinergien
{
	namespace EnergyGrid
	{
		namespace SimulationData
		{
			class WeatherData : public BaseClass
			{

			public:
				WeatherData();
				virtual ~WeatherData();
				IEC61970::Base::Domain::Temperature* temperature;
				IEC61970::Base::Domain::Seconds* time;
				IEC61970::Base::Domain::Speed* windSpeed;

			};

		}

	}

}
#endif // WEATHERDATA_H
