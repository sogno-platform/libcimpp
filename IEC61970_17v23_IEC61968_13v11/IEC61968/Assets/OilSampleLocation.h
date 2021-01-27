///////////////////////////////////////////////////////////
//  OilSampleLocation.h
//  Implementation of the Class OilSampleLocation
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILSAMPLELOCATION_H
#define OILSAMPLELOCATION_H

namespace IEC61968
{
	namespace Assets
	{
		enum class OilSampleLocation
		{
			 _undef = -1, 	oilSampleValve,
			oilDrainageDevice,
			other
		};

	}

}
#endif // OILSAMPLELOCATION_H
