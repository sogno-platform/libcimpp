///////////////////////////////////////////////////////////
//  UKMinistryOfDefenceStandard.h
//  Implementation of the Class UKMinistryOfDefenceStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef UKMINISTRYOFDEFENCESTANDARD_H
#define UKMINISTRYOFDEFENCESTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/UKMinistryOfDefenceStandardEditionKind.h"
#include "IEC61968/Assets/UKMinistryofDefenceStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by United Kingdom Ministry of Defence.
		 */
		class UKMinistryOfDefenceStandard : public BaseClass
		{

		public:
			UKMinistryOfDefenceStandard();
			virtual ~UKMinistryOfDefenceStandard();
			/**
			 * Edition of UK Ministry of Defence standard.
			 */
			IEC61968::Assets::UKMinistryOfDefenceStandardEditionKind standardEdition = IEC61968::Assets::UKMinistryOfDefenceStandardEditionKind::_undef;
			/**
			 * UK Ministry of Defence standard number.
			 */
			IEC61968::Assets::UKMinistryofDefenceStandardKind standardNumber = IEC61968::Assets::UKMinistryofDefenceStandardKind::_undef;

		};

	}

}
#endif // UKMINISTRYOFDEFENCESTANDARD_H
