///////////////////////////////////////////////////////////
//  Clamp.h
//  Implementation of the Class Clamp
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef CLAMP_H
#define CLAMP_H

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A Clamp is a galvanic connection at a line segment where other equipment is
			 * connected. A Clamp does not cut the line segment.
			 * A Clamp is ConductingEquipment and has one Terminal with an associated
			 * ConnectivityNode. Any other ConductingEquipment can be connected to the Clamp
			 * ConnectivityNode.
			 */
			class Clamp : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				Clamp();
				virtual ~Clamp();
				/**
				 * The length to the place where the clamp is located starting from side one of
				 * the line segment, i.e. the line segment terminal with sequence number equal to
				 * 1.
				 */
				IEC61970::Base::Domain::Length lengthFromTerminal1;

			};

		}

	}

}
#endif // CLAMP_H
