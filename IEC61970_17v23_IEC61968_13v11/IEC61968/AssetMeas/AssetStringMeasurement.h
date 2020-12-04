///////////////////////////////////////////////////////////
//  AssetStringMeasurement.h
//  Implementation of the Class AssetStringMeasurement
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETSTRINGMEASUREMENT_H
#define ASSETSTRINGMEASUREMENT_H

#include "IEC61968/AssetMeas/AssetStringKind.h"
#include "IEC61970/Base/Meas/StringMeasurement.h"
#include "IEC61968/Assets/TestStandard.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		class AssetStringMeasurement : public IEC61970::Base::Meas::StringMeasurement
		{

		public:
			AssetStringMeasurement();
			virtual ~AssetStringMeasurement();
			/**
			 * Kind of string useful in asset domain.
			 */
			IEC61968::AssetMeas::AssetStringKind kind = IEC61968::AssetMeas::AssetStringKind::_undef;
			IEC61968::Assets::TestStandard *TestStandard;

		};

	}

}
#endif // ASSETSTRINGMEASUREMENT_H
