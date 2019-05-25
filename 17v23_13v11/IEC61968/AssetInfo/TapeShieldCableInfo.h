///////////////////////////////////////////////////////////
//  TapeShieldCableInfo.h
//  Implementation of the Class TapeShieldCableInfo
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef TAPESHIELDCABLEINFO_H
#define TAPESHIELDCABLEINFO_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/AssetInfo/CableInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Tape shield cable data.
		 */
		class TapeShieldCableInfo : public IEC61968::AssetInfo::CableInfo
		{

		public:
			TapeShieldCableInfo();
			virtual ~TapeShieldCableInfo();
			/**
			 * Percentage of the tape shield width that overlaps in each wrap, typically 10%
			 * to 25%.
			 */
			IEC61970::Base::Domain::PerCent tapeLap;
			/**
			 * Thickness of the tape shield, before wrapping.
			 */
			IEC61970::Base::Domain::Length tapeThickness;

		};

	}

}
#endif // TAPESHIELDCABLEINFO_H
