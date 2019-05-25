///////////////////////////////////////////////////////////
//  OilTemperatureSource.h
//  Implementation of the Class OilTemperatureSource
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILTEMPERATURESOURCE_H
#define OILTEMPERATURESOURCE_H

namespace IEC61968
{
	namespace Assets
	{
		enum class OilTemperatureSource
		{
			 _undef = -1, 	topOilTemperatureGauge,
			infraredGun,
			other
		};

	}

}
#endif // OILTEMPERATURESOURCE_H
