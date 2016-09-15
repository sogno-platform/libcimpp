///////////////////////////////////////////////////////////
//  Terminal.h
//  Implementation of the Class Terminal
//  Created on:      28-Jan-2016 12:47:15
///////////////////////////////////////////////////////////

#if !defined(EA_11BB1AC9_299E_4eaa_852F_FBBD0EBE94EA__INCLUDED_)
#define EA_11BB1AC9_299E_4eaa_852F_FBBD0EBE94EA__INCLUDED_

#include <list>

#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Core/ConnectivityNode.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"
#include "IEC61970/Base/Wires/RegulatingControl.h"
#include "IEC61970/Base/Core/ACDCTerminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * An AC electrical connection point to a piece of conducting equipment. Terminals
			 * are connected at physical connection points called connectivity nodes.
			 */
			class Terminal : public IEC61970::Base::Core::ACDCTerminal
			{

			public:
				Terminal();
				virtual ~Terminal();
				/**
				 * Represents the normal network phasing condition.
				 * If the attribute is missing three phases (ABC or ABCN) shall be assumed.
				 */
				IEC61970::Base::Core::PhaseCode phases;
				/**
				 * The connectivity node to which this terminal connects with zero impedance.
				 */
				IEC61970::Base::Core::ConnectivityNode *ConnectivityNode;
				/**
				 * The conducting equipment of the terminal.  Conducting equipment have  terminals
				 * that may be connected to other conducting equipment terminals via connectivity
				 * nodes or topological nodes.
				 */
				IEC61970::Base::Core::ConductingEquipment *ConductingEquipment;
				/**
				 * The controls regulating this terminal.
				 */
				std::list<IEC61970::Base::Wires::RegulatingControl*> RegulatingControl;

			};

		}

	}

}
#endif // !defined(EA_11BB1AC9_299E_4eaa_852F_FBBD0EBE94EA__INCLUDED_)
