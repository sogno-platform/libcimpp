///////////////////////////////////////////////////////////
//  IEEEStandard.h
//  Implementation of the Class IEEEStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef IEEESTANDARD_H
#define IEEESTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/IEEEStandardEditionKind.h"
#include "IEC61968/Assets/IEEEStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by IEEE (Institute of Electrical and Electronics Engineers).
		 */
		class IEEEStandard : public BaseClass
		{

		public:
			IEEEStandard();
			virtual ~IEEEStandard();
			/**
			 * Edition of IEEE standard.
			 */
			IEC61968::Assets::IEEEStandardEditionKind standardEdition = IEC61968::Assets::IEEEStandardEditionKind::_undef;
			/**
			 * IEEE standard number.
			 */
			IEC61968::Assets::IEEEStandardKind standardNumber = IEC61968::Assets::IEEEStandardKind::_undef;

		};

	}

}
#endif // IEEESTANDARD_H
