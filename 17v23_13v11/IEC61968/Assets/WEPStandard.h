///////////////////////////////////////////////////////////
//  WEPStandard.h
//  Implementation of the Class WEPStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WEPSTANDARD_H
#define WEPSTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/WEPStandardEditionKind.h"
#include "IEC61968/Assets/WEPStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by Westinghouse - a WEP (Westinghouse Engineering Procedure).
		 */
		class WEPStandard : public BaseClass
		{

		public:
			WEPStandard();
			virtual ~WEPStandard();
			/**
			 * Edition of WEP standard.
			 */
			IEC61968::Assets::WEPStandardEditionKind standardEdition = IEC61968::Assets::WEPStandardEditionKind::_undef;
			/**
			 * WEP standard number.
			 */
			IEC61968::Assets::WEPStandardKind standardNumber = IEC61968::Assets::WEPStandardKind::_undef;

		};

	}

}
#endif // WEPSTANDARD_H
