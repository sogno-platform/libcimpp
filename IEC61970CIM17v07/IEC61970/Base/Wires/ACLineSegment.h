///////////////////////////////////////////////////////////
//  ACLineSegment.h
//  Implementation of the Class ACLineSegment
///////////////////////////////////////////////////////////

#ifndef ACLINESEGMENT_H
#define ACLINESEGMENT_H

#include <list>

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/Conductor.h"
#include "IEC61970/Base/Wires/Clamp.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A wire or combination of wires, with consistent electrical characteristics,
			 * building a single electrical system, used to carry alternating current between
			 * points in the power system.
			 * For symmetrical, transposed 3ph lines, it is sufficient to use  attributes of
			 * the line segment, which describe impedances and admittances for the entire
			 * length of the segment.  Additionally impedances can be computed by using length
			 * and associated per length impedances.
			 * The BaseVoltage at the two ends of ACLineSegments in a Line shall have the same
			 * BaseVoltage.nominalVoltage. However, boundary lines  may have slightly
			 * different BaseVoltage.nominalVoltages and  variation is allowed. Larger voltage
			 * difference in general requires use of an equivalent branch.
			 */
			class ACLineSegment : public IEC61970::Base::Wires::Conductor
			{

			public:
				ACLineSegment();
				virtual ~ACLineSegment();
				/**
				 * Zero sequence shunt (charging) susceptance, uniformly distributed, of the
				 * entire line section.
				 */
				IEC61970::Base::Domain::Susceptance b0ch;
				/**
				 * Positive sequence shunt (charging) susceptance, uniformly distributed, of the
				 * entire line section.  This value represents the full charging over the full
				 * length of the line.
				 */
				IEC61970::Base::Domain::Susceptance bch;
				/**
				 * Zero sequence shunt (charging) conductance, uniformly distributed, of the
				 * entire line section.
				 */
				IEC61970::Base::Domain::Conductance g0ch;
				/**
				 * Positive sequence shunt (charging) conductance, uniformly distributed, of the
				 * entire line section.
				 */
				IEC61970::Base::Domain::Conductance gch;
				/**
				 * Positive sequence series resistance of the entire line section.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence series resistance of the entire line section.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Maximum permitted temperature at the end of SC for the calculation of minimum
				 * short-circuit currents. Used for short circuit data exchange according to IEC
				 * 60909
				 */
				IEC61970::Base::Domain::Temperature shortCircuitEndTemperature;
				/**
				 * Positive sequence series reactance of the entire line section.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero sequence series reactance of the entire line section.
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * The clamps connected to the line segment.
				 */
				std::list<IEC61970::Base::Wires::Clamp*> Clamp;

			};

		}

	}

}
#endif // ACLINESEGMENT_H
