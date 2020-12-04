///////////////////////////////////////////////////////////
//  Conductor.h
//  Implementation of the Class Conductor
///////////////////////////////////////////////////////////

#ifndef CONDUCTOR_H
#define CONDUCTOR_H

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
#endif // CONDUCTOR_H
