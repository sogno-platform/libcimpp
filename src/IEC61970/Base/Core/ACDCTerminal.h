///////////////////////////////////////////////////////////
//  ACDCTerminal.h
//  Implementation of the Class ACDCTerminal
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ACDCTERMINAL_H
#define ACDCTERMINAL_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * An electrical connection point (AC or DC) to a piece of conducting equipment.
			 * Terminals are connected at physical connection points called connectivity nodes.
			 */
			class ACDCTerminal : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ACDCTerminal();
				virtual ~ACDCTerminal();
				/**
				 * The connected status is related to a bus-branch model and the topological node
				 * to terminal relation.  True implies the terminal is connected to the related
				 * topological node and false implies it is not.
				 * In a bus-branch model, the connected status is used to tell if equipment is
				 * disconnected without having to change the connectivity described by the
				 * topological node to terminal relation. A valid case is that conducting
				 * equipment can be connected in one end and open in the other. In particular for
				 * an AC line segment, where the reactive line charging can be significant, this
				 * is a relevant case.
				 */
				IEC61970::Base::Domain::Boolean connected;
				/**
				 * The orientation of the terminal connections for a multiple terminal conducting
				 * equipment.  The sequence numbering starts with 1 and additional terminals
				 * should follow in increasing order.   The first terminal is the "starting point"
				 * for a two terminal branch.
				 */
				IEC61970::Base::Domain::Integer sequenceNumber;

			};

		}

	}

}
#endif // ACDCTERMINAL_H
