///////////////////////////////////////////////////////////
//  DINStandard.h
//  Implementation of the Class DINStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DINSTANDARD_H
#define DINSTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/DINStandardEditionKind.h"
#include "IEC61968/Assets/DINStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by DIN (German Institute of Standards).
		 */
		class DINStandard : public BaseClass
		{

		public:
			DINStandard();
			virtual ~DINStandard();
			/**
			 * Edition of DIN standard.
			 */
			IEC61968::Assets::DINStandardEditionKind standardEdition = IEC61968::Assets::DINStandardEditionKind::_undef;
			/**
			 * DIN standard number.
			 */
			IEC61968::Assets::DINStandardKind standardNumber = IEC61968::Assets::DINStandardKind::_undef;

		};

	}

}
#endif // DINSTANDARD_H
