///////////////////////////////////////////////////////////
//  WindDynamicsLookupTable.h
//  Implementation of the Class WindDynamicsLookupTable
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDDYNAMICSLOOKUPTABLE_H
#define WINDDYNAMICSLOOKUPTABLE_H

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
					IEC61970::Dynamics::StandardModels::WindDynamics::WindLookupTableFunctionKind lookupTableFunctionType = IEC61970::Dynamics::StandardModels::WindDynamics::WindLookupTableFunctionKind::_undef;
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
#endif // WINDDYNAMICSLOOKUPTABLE_H
