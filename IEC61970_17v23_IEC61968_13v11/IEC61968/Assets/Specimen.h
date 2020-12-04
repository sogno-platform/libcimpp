///////////////////////////////////////////////////////////
//  Specimen.h
//  Implementation of the Class Specimen
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef SPECIMEN_H
#define SPECIMEN_H

#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/AssetTestSampleTaker.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Sample or specimen of a material (fluid or solid).
		 */
		class Specimen : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Specimen();
			virtual ~Specimen();
			/**
			 * Operating ambient temperature (in °C).
			 */
			IEC61970::Base::Domain::Temperature ambientTemperatureAtSampling;
			/**
			 * Operating ambient humidity (in percent).
			 */
			IEC61970::Base::Domain::PerCent humidityAtSampling;
			/**
			 * Identifier of specimen used in inspection or test.
			 */
			IEC61970::Base::Domain::String specimenID;
			/**
			 * Date and time sample specimen taken.
			 */
			IEC61970::Base::Domain::DateTime specimenSampleDateTime;
			/**
			 * Date and time the specimen was received by the lab.
			 */
			IEC61970::Base::Domain::DateTime specimenToLabDateTime;
			/**
			 * Test sampler taker who gathered this specimen.
			 */
			IEC61968::Assets::AssetTestSampleTaker *AssetTestSampleTaker;

		};

	}

}
#endif // SPECIMEN_H
