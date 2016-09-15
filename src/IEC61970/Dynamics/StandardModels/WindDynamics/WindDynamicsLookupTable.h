///////////////////////////////////////////////////////////
//  WindDynamicsLookupTable.h
//  Implementation of the Class WindDynamicsLookupTable
//  Created on:      28-Jan-2016 12:47:50
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_59082EEB_D836_486e_945F_6B2FF17641B5__INCLUDED_)
#define EA_59082EEB_D836_486e_945F_6B2FF17641B5__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindLookupTableFunctionKind.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindContRotorRIEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindContCurrLimIEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindPlantFreqPcontrolIEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindContPType3IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * The class models a look up table for the purpose of wind standard models.
				 */
				class WindDynamicsLookupTable : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindDynamicsLookupTable();
					virtual ~WindDynamicsLookupTable();
					/**
					 * Input value (x) for the lookup table function.
					 */
					IEC61970::Base::Domain::Float input;
					/**
					 * Type of the lookup table function.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindLookupTableFunctionKind lookupTableFunctionType;
					/**
					 * Output value (y) for the lookup table function.
					 */
					IEC61970::Base::Domain::Float output;
					/**
					 * Sequence numbers of the pairs of the input (x) and the output (y) of the lookup
					 * table function.
					 */
					IEC61970::Base::Domain::Integer sequence;
					/**
					 * The rotor resistance control model with which this wind dynamics lookup table
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindContRotorRIEC *WindContRotorRIEC;
					/**
					 * The current control limitation model with which this wind dynamics lookup table
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindContCurrLimIEC *WindContCurrLimIEC;
					/**
					 * The frequency and active power wind plant control model with which this wind
					 * dynamics lookup table is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantFreqPcontrolIEC *WindPlantFreqPcontrolIEC;
					/**
					 * The P control type 3 model with which this wind dynamics lookup table is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType3IEC *WindContPType3IEC;

				};

			}

		}

	}

}
#endif // !defined(EA_59082EEB_D836_486e_945F_6B2FF17641B5__INCLUDED_)
