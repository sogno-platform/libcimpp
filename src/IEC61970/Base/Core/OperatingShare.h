///////////////////////////////////////////////////////////
//  OperatingShare.h
//  Implementation of the Class OperatingShare
//  Created on:      28-Jan-2016 12:45:51
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_C4C8AA38_31DA_4928_B20F_A1ED846FDE9F__INCLUDED_)
#define EA_C4C8AA38_31DA_4928_B20F_A1ED846FDE9F__INCLUDED_

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Core/OperatingParticipant.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Specifies the operations contract relationship between a power system resource
			 * and a contract participant.
			 */
			class OperatingShare : public BaseClass
			{

			public:
				OperatingShare();
				virtual ~OperatingShare();
				/**
				 * Percentage operational ownership between the pair (power system resource and
				 * operatging participant) associated with this share. The total percentage
				 * ownership for a power system resource should add to 100%.
				 */
				IEC61970::Base::Domain::PerCent percentage;
				/**
				 * The operating participant having this share with the associated power system
				 * resource.
				 */
				IEC61970::Base::Core::OperatingParticipant *OperatingParticipant;
				/**
				 * The power system resource to which the share applies.
				 */
				IEC61970::Base::Core::PowerSystemResource *PowerSystemResource;

			};

		}

	}

}
#endif // !defined(EA_C4C8AA38_31DA_4928_B20F_A1ED846FDE9F__INCLUDED_)
