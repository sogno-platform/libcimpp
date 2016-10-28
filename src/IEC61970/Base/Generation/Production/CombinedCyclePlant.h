///////////////////////////////////////////////////////////
//  CombinedCyclePlant.h
//  Implementation of the Class CombinedCyclePlant
///////////////////////////////////////////////////////////

#ifndef COMBINEDCYCLEPLANT_H
#define COMBINEDCYCLEPLANT_H

#include <list>

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/ThermalGeneratingUnit.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A set of combustion turbines and steam turbines where the exhaust heat from the
				 * combustion turbines is recovered to make steam for the steam turbines,
				 * resulting in greater overall plant efficiency.
				 */
				class CombinedCyclePlant : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					CombinedCyclePlant();
					virtual ~CombinedCyclePlant();
					/**
					 * The combined cycle plant's active power output rating.
					 */
					IEC61970::Base::Domain::ActivePower combCyclePlantRating;
					/**
					 * A thermal generating unit may be a member of a combined cycle plant.
					 */
					std::list<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*> ThermalGeneratingUnits;

				};

			}

		}

	}

}
#endif // COMBINEDCYCLEPLANT_H
