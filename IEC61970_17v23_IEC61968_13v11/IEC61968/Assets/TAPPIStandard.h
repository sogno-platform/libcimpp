///////////////////////////////////////////////////////////
//  TAPPIStandard.h
//  Implementation of the Class TAPPIStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TAPPISTANDARD_H
#define TAPPISTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/TAPPIStandardEditionKind.h"
#include "IEC61968/Assets/TAPPIStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by TAPPI. 
		 */
		class TAPPIStandard : public BaseClass
		{

		public:
			TAPPIStandard();
			virtual ~TAPPIStandard();
			/**
			 * Edition of TAPPI standard.
			 */
			IEC61968::Assets::TAPPIStandardEditionKind standardEdition = IEC61968::Assets::TAPPIStandardEditionKind::_undef;
			/**
			 * TAPPI standard number.
			 */
			IEC61968::Assets::TAPPIStandardKind standardNumber = IEC61968::Assets::TAPPIStandardKind::_undef;

		};

	}

}
#endif // TAPPISTANDARD_H
