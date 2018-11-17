///////////////////////////////////////////////////////////
//  TransformerEnd.h
//  Implementation of the Class TransformerEnd
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMEREND_H
#define TRANSFORMEREND_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/PhaseTapChanger.h"
#include "IEC61970/Base/Wires/TransformerStarImpedance.h"
#include "IEC61970/Base/Wires/RatioTapChanger.h"
#include "IEC61970/Base/Core/BaseVoltage.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A conducting connection point of a power transformer. It corresponds to a
			 * physical transformer winding terminal.  In earlier CIM versions, the
			 * TransformerWinding class served a similar purpose, but this class is more
			 * flexible because it associates to terminal but is not a specialization of
			 * ConductingEquipment.
			 */
			class TransformerEnd : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TransformerEnd();
				virtual ~TransformerEnd();
				/**
				 * Core shunt magnetizing susceptance in the saturation region.
				 */
				IEC61970::Base::Domain::PerCent bmagSat;
				/**
				 * Number for this transformer end, corresponding to the end's order in the power
				 * transformer vector group or phase angle clock number.  Highest voltage winding
				 * should be 1.  Each end within a power transformer should have a unique
				 * subsequent end number.   Note the transformer end number need not match the
				 * terminal sequence number.
				 */
				IEC61970::Base::Domain::Integer endNumber;
				/**
				 * (for Yn and Zn connections) True if the neutral is solidly grounded.
				 */
				IEC61970::Base::Domain::Boolean grounded;
				/**
				 * The reference voltage at which the magnetizing saturation measurements were made
				 */
				IEC61970::Base::Domain::Voltage magBaseU;
				/**
				 * Core magnetizing saturation curve knee flux level.
				 */
				IEC61970::Base::Domain::PerCent magSatFlux;
				/**
				 * (for Yn and Zn connections) Resistance part of neutral impedance where
				 * 'grounded' is true.
				 */
				IEC61970::Base::Domain::Resistance rground;
				/**
				 * (for Yn and Zn connections) Reactive part of neutral impedance where 'grounded'
				 * is true.
				 */
				IEC61970::Base::Domain::Reactance xground;
				/**
				 * Phase tap changer associated with this transformer end.
				 */
				IEC61970::Base::Wires::PhaseTapChanger *PhaseTapChanger;
				/**
				 * (accurate for 2- or 3-winding transformers only) Pi-model impedances of this
				 * transformer end. By convention, for a two winding transformer, the full values
				 * of the transformer should be entered on the high voltage end (endNumber=1).
				 */
				IEC61970::Base::Wires::TransformerStarImpedance *StarImpedance;
				/**
				 * Ratio tap changer associated with this transformer end.
				 */
				IEC61970::Base::Wires::RatioTapChanger *RatioTapChanger;
				/**
				 * Base voltage of the transformer end.  This is essential for PU calculation.
				 */
				IEC61970::Base::Core::BaseVoltage *BaseVoltage;
				/**
				 * Terminal of the power transformer to which this transformer end belongs.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // TRANSFORMEREND_H
