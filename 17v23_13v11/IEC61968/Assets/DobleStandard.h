///////////////////////////////////////////////////////////
//  DobleStandard.h
//  Implementation of the Class DobleStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DOBLESTANDARD_H
#define DOBLESTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/DobleStandardEditionKind.h"
#include "IEC61968/Assets/DobleStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by Doble.
		 */
		class DobleStandard : public BaseClass
		{

		public:
			DobleStandard();
			virtual ~DobleStandard();
			/**
			 * Edition of Doble standard.
			 */
			IEC61968::Assets::DobleStandardEditionKind standardEdition = IEC61968::Assets::DobleStandardEditionKind::_undef;
			/**
			 * Doble standard number.
			 */
			IEC61968::Assets::DobleStandardKind standardNumber = IEC61968::Assets::DobleStandardKind::_undef;

		};

	}

}
#endif // DOBLESTANDARD_H
