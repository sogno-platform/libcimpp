///////////////////////////////////////////////////////////
//  BusbarSectionInfo.h
//  Implementation of the Class BusbarSectionInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BUSBARSECTIONINFO_H
#define BUSBARSECTIONINFO_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Busbar section data.
		 */
		class BusbarSectionInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			BusbarSectionInfo();
			virtual ~BusbarSectionInfo();
			/**
			 * Rated current.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Rated voltage.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;

		};

	}

}
#endif // BUSBARSECTIONINFO_H
