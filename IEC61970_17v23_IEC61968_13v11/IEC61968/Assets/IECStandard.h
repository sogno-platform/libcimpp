///////////////////////////////////////////////////////////
//  IECStandard.h
//  Implementation of the Class IECStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef IECSTANDARD_H
#define IECSTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/IECStandardEditionKind.h"
#include "IEC61968/Assets/IECStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by IEC (International Electrotechnical Commission).
		 */
		class IECStandard : public BaseClass
		{

		public:
			IECStandard();
			virtual ~IECStandard();
			/**
			 * Edition of IEC standard.
			 */
			IEC61968::Assets::IECStandardEditionKind standardEdition = IEC61968::Assets::IECStandardEditionKind::_undef;
			/**
			 * IEC standard number.
			 */
			IEC61968::Assets::IECStandardKind standardNumber = IEC61968::Assets::IECStandardKind::_undef;

		};

	}

}
#endif // IECSTANDARD_H
