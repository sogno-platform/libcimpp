///////////////////////////////////////////////////////////
//  LineFault.h
//  Implementation of the Class LineFault
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef LINEFAULT_H
#define LINEFAULT_H

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Wires/ACLineSegment.h"
#include "IEC61970/Base/Faults/Fault.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Faults
		{
			/**
			 * A fault that occurs on an AC line segment at some point along the length.
			 */
			class LineFault : public IEC61970::Base::Faults::Fault
			{

			public:
				LineFault();
				virtual ~LineFault();
				/**
				 * The length to the place where the fault is located starting from terminal with
				 * sequence number 1 of the faulted line segment.
				 */
				IEC61970::Base::Domain::Length lengthFromTerminal1;
				/**
				 * The line segment of this line fault.
				 */
				IEC61970::Base::Wires::ACLineSegment *ACLineSegment;

			};

		}

	}

}
#endif // LINEFAULT_H
