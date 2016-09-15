///////////////////////////////////////////////////////////
//  Conductor.h
//  Implementation of the Class Conductor
//  Created on:      28-Jan-2016 12:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_F0CC71F3_A786_499f_B90E_B3BA7A15C6B4__INCLUDED_)
#define EA_F0CC71F3_A786_499f_B90E_B3BA7A15C6B4__INCLUDED_

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Combination of conducting material with consistent electrical characteristics,
			 * building a single electrical system, used to carry current between points in
			 * the power system.  
			 */
			class Conductor : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				Conductor();
				virtual ~Conductor();
				/**
				 * Segment length for calculating line section capabilities
				 */
				IEC61970::Base::Domain::Length length;

			};

		}

	}

}
#endif // !defined(EA_F0CC71F3_A786_499f_B90E_B3BA7A15C6B4__INCLUDED_)
