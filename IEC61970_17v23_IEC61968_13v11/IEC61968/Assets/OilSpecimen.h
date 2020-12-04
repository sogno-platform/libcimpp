///////////////////////////////////////////////////////////
//  OilSpecimen.h
//  Implementation of the Class OilSpecimen
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILSPECIMEN_H
#define OILSPECIMEN_H

#include "IEC61968/Assets/OilSampleLocation.h"
#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61968/Assets/OilTemperatureSource.h"
#include "IEC61968/Assets/SampleContainerType.h"
#include "IEC61968/Assets/Specimen.h"

namespace IEC61968
{
	namespace Assets
	{
		class OilSpecimen : public IEC61968::Assets::Specimen
		{

		public:
			OilSpecimen();
			virtual ~OilSpecimen();
			IEC61968::Assets::OilSampleLocation oilSampleTakenFrom = IEC61968::Assets::OilSampleLocation::_undef;
			IEC61970::Base::Domain::Temperature oilSampleTemperature;
			IEC61968::Assets::OilTemperatureSource oilTemperatureSource = IEC61968::Assets::OilTemperatureSource::_undef;
			IEC61968::Assets::SampleContainerType sampleContainer = IEC61968::Assets::SampleContainerType::_undef;

		};

	}

}
#endif // OILSPECIMEN_H
