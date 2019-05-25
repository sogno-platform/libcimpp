///////////////////////////////////////////////////////////
//  EPAStandard.h
//  Implementation of the Class EPAStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef EPASTANDARD_H
#define EPASTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/EPAStandardEditionKind.h"
#include "IEC61968/Assets/EPAStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by EPA (United States Environmental Protection Agency).
		 */
		class EPAStandard : public BaseClass
		{

		public:
			EPAStandard();
			virtual ~EPAStandard();
			/**
			 * Edition of EPA standard.
			 */
			IEC61968::Assets::EPAStandardEditionKind standardEdition = IEC61968::Assets::EPAStandardEditionKind::_undef;
			/**
			 * EPA standard number.
			 */
			IEC61968::Assets::EPAStandardKind standardNumber = IEC61968::Assets::EPAStandardKind::_undef;

		};

	}

}
#endif // EPASTANDARD_H
