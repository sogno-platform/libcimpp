///////////////////////////////////////////////////////////
//  IrregularIntervalSchedule.h
//  Implementation of the Class IrregularIntervalSchedule
//  Created on:      28-Jan-2016 12:45:30
///////////////////////////////////////////////////////////

#if !defined(EA_EE0E9152_B541_43c9_B607_B9D75CE1B581__INCLUDED_)
#define EA_EE0E9152_B541_43c9_B607_B9D75CE1B581__INCLUDED_

#include <list>

#include "IEC61970/Base/Core/BasicIntervalSchedule.h"
#include "IEC61970/Base/Core/IrregularTimePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The schedule has time points where the time between them varies.
			 */
			class IrregularIntervalSchedule : public IEC61970::Base::Core::BasicIntervalSchedule
			{

			public:
				IrregularIntervalSchedule();
				virtual ~IrregularIntervalSchedule();
				/**
				 * The point data values that define a curve.
				 */
				std::list<IEC61970::Base::Core::IrregularTimePoint*> TimePoints;

			};

		}

	}

}
#endif // !defined(EA_EE0E9152_B541_43c9_B607_B9D75CE1B581__INCLUDED_)
