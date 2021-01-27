///////////////////////////////////////////////////////////
//  CIGREStandard.h
//  Implementation of the Class CIGREStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef CIGRESTANDARD_H
#define CIGRESTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/CIGREStandardEditionKind.h"
#include "IEC61968/Assets/CIGREStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by CIGRE (Council on Large Electric Systems).
		 */
		class CIGREStandard : public BaseClass
		{

		public:
			CIGREStandard();
			virtual ~CIGREStandard();
			/**
			 * Edition of CIGRE standard.
			 */
			IEC61968::Assets::CIGREStandardEditionKind standardEdition = IEC61968::Assets::CIGREStandardEditionKind::_undef;
			/**
			 * CIGRE standard number.
			 */
			IEC61968::Assets::CIGREStandardKind standardNumber = IEC61968::Assets::CIGREStandardKind::_undef;

		};

	}

}
#endif // CIGRESTANDARD_H
