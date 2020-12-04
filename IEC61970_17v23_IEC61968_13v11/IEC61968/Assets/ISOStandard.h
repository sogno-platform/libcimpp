///////////////////////////////////////////////////////////
//  ISOStandard.h
//  Implementation of the Class ISOStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ISOSTANDARD_H
#define ISOSTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/ISOStandardEditionKind.h"
#include "IEC61968/Assets/ISOStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by ISO (International Organization for Standardization).
		 */
		class ISOStandard : public BaseClass
		{

		public:
			ISOStandard();
			virtual ~ISOStandard();
			/**
			 * Edition of ISO standard.
			 */
			IEC61968::Assets::ISOStandardEditionKind standardEdition = IEC61968::Assets::ISOStandardEditionKind::_undef;
			/**
			 * ISO standard number.
			 */
			IEC61968::Assets::ISOStandardKind standardNumber = IEC61968::Assets::ISOStandardKind::_undef;

		};

	}

}
#endif // ISOSTANDARD_H
