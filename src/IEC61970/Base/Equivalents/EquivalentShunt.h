///////////////////////////////////////////////////////////
//  EquivalentShunt.h
//  Implementation of the Class EquivalentShunt
//  Created on:      28-Jan-2016 12:44:18
///////////////////////////////////////////////////////////

#if !defined(EA_BE13EB23_7BD5_43ec_8F89_9E3693D2564B__INCLUDED_)
#define EA_BE13EB23_7BD5_43ec_8F89_9E3693D2564B__INCLUDED_

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Equivalents/EquivalentEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Equivalents
		{
			/**
			 * The class represents equivalent shunts.
			 */
			class EquivalentShunt : public IEC61970::Base::Equivalents::EquivalentEquipment
			{

			public:
				EquivalentShunt();
				virtual ~EquivalentShunt();
				/**
				 * Positive sequence shunt susceptance.
				 */
				IEC61970::Base::Domain::Susceptance b;
				/**
				 * Positive sequence shunt conductance.
				 */
				IEC61970::Base::Domain::Conductance g;

			};

		}

	}

}
#endif // !defined(EA_BE13EB23_7BD5_43ec_8F89_9E3693D2564B__INCLUDED_)
