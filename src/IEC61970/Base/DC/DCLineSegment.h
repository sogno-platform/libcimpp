///////////////////////////////////////////////////////////
//  DCLineSegment.h
//  Implementation of the Class DCLineSegment
//  Created on:      28-Jan-2016 12:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_965238EF_5495_4268_94B2_395AFD1E5772__INCLUDED_)
#define EA_965238EF_5495_4268_94B2_395AFD1E5772__INCLUDED_

#include "IEC61970/Base/Domain/Capacitance.h"
#include "IEC61970/Base/Domain/Inductance.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/DC/DCConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A wire or combination of wires not insulated from one another, with consistent
			 * electrical characteristics, used to carry direct current between points in the
			 * DC region of the power system.
			 */
			class DCLineSegment : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCLineSegment();
				virtual ~DCLineSegment();
				/**
				 * Capacitance of the DC line segment. Significant for cables only.
				 */
				IEC61970::Base::Domain::Capacitance capacitance;
				/**
				 * Inductance of the DC line segment. Neglectable compared with DCSeriesDevice
				 * used for smoothing.
				 */
				IEC61970::Base::Domain::Inductance inductance;
				/**
				 * Segment length for calculating line section capabilities.
				 */
				IEC61970::Base::Domain::Length length;
				/**
				 * Resistance of the DC line segment.
				 */
				IEC61970::Base::Domain::Resistance resistance;

			};

		}

	}

}
#endif // !defined(EA_965238EF_5495_4268_94B2_395AFD1E5772__INCLUDED_)
