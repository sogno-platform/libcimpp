///////////////////////////////////////////////////////////
//  EquivalentShunt.h
//  Implementation of the Class EquivalentShunt
///////////////////////////////////////////////////////////

#ifndef EQUIVALENTSHUNT_H
#define EQUIVALENTSHUNT_H

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
#endif // EQUIVALENTSHUNT_H
