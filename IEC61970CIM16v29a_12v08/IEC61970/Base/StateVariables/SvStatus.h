///////////////////////////////////////////////////////////
//  SvStatus.h
//  Implementation of the Class SvStatus
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SVSTATUS_H
#define SVSTATUS_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/StateVariables/StateVariable.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace StateVariables
		{
			/**
			 * State variable for status.
			 */
			class SvStatus : public IEC61970::Base::StateVariables::StateVariable
			{

			public:
				SvStatus();
				virtual ~SvStatus();
				/**
				 * The in service status as a result of topology processing.
				 */
				IEC61970::Base::Domain::Boolean inService;
				/**
				 * The conducting equipment associated with the status state variable.
				 */
				IEC61970::Base::Core::ConductingEquipment *ConductingEquipment;

			};

		}

	}

}
#endif // SVSTATUS_H
