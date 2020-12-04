///////////////////////////////////////////////////////////
//  PerLengthDCLineParameter.h
//  Implementation of the Class PerLengthDCLineParameter
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PERLENGTHDCLINEPARAMETER_H
#define PERLENGTHDCLINEPARAMETER_H

#include <list>

#include "IEC61970/Base/Domain/CapacitancePerLength.h"
#include "IEC61970/Base/Domain/InductancePerLength.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61970/Base/DC/DCLineSegment.h"
#include "IEC61970/Base/Wires/PerLengthLineParameter.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			class PerLengthDCLineParameter : public IEC61970::Base::Wires::PerLengthLineParameter
			{

			public:
				PerLengthDCLineParameter();
				virtual ~PerLengthDCLineParameter();
				/**
				 * Capacitance per unit of length of the DC line segment; significant for cables
				 * only.
				 */
				IEC61970::Base::Domain::CapacitancePerLength capacitance;
				/**
				 * Inductance per unit of length of the DC line segment.
				 */
				IEC61970::Base::Domain::InductancePerLength inductance;
				/**
				 * Resistance per length of the DC line segment.
				 */
				IEC61970::Base::Domain::ResistancePerLength resistance;
				/**
				 * All line segments described by this set of per-length parameters.
				 */
				std::list<IEC61970::Base::DC::DCLineSegment*> DCLineSegments;

			};

		}

	}

}
#endif // PERLENGTHDCLINEPARAMETER_H
