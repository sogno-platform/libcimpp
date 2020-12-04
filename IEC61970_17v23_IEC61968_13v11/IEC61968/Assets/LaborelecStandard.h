///////////////////////////////////////////////////////////
//  LaborelecStandard.h
//  Implementation of the Class LaborelecStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef LABORELECSTANDARD_H
#define LABORELECSTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/LaborelecStandardEditionKind.h"
#include "IEC61968/Assets/LaborelecStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by Laborelec.
		 */
		class LaborelecStandard : public BaseClass
		{

		public:
			LaborelecStandard();
			virtual ~LaborelecStandard();
			/**
			 * Edition of Laborelec standard.
			 */
			IEC61968::Assets::LaborelecStandardEditionKind standardEdition = IEC61968::Assets::LaborelecStandardEditionKind::_undef;
			/**
			 * Laborelec standard number.
			 */
			IEC61968::Assets::LaborelecStandardKind standardNumber = IEC61968::Assets::LaborelecStandardKind::_undef;

		};

	}

}
#endif // LABORELECSTANDARD_H
