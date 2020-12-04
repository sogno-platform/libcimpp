///////////////////////////////////////////////////////////
//  SVC.h
//  Implementation of the Class SVC
///////////////////////////////////////////////////////////

#ifndef SVC_H
#define SVC_H

#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/ShuntCompensator.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWiresExt
		{
			/**
			 * SVC asset allows the capacitive and inductive ratings for each phase to be
			 * specified individually if required.
			 */
			class SVC : public IEC61970::Base::Wires::ShuntCompensator
			{

			public:
				SVC();
				virtual ~SVC();
				/**
				 * Maximum capacitive reactive power.
				 */
				IEC61970::Base::Domain::Reactance capacitiveRating;
				/**
				 * Maximum inductive reactive power.
				 */
				IEC61970::Base::Domain::Reactance inductiveRating;

			};

		}

	}

}
#endif // SVC_H
