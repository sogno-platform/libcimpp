///////////////////////////////////////////////////////////
//  SvShuntCompensatorSections.h
//  Implementation of the Class SvShuntCompensatorSections
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SVSHUNTCOMPENSATORSECTIONS_H
#define SVSHUNTCOMPENSATORSECTIONS_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/StateVariables/StateVariable.h"
#include "IEC61970/Base/Wires/ShuntCompensator.h"

namespace IEC61970
{
	namespace Base
	{
		namespace StateVariables
		{
			/**
			 * State variable for the number of sections in service for a shunt compensator.
			 */
			class SvShuntCompensatorSections : public IEC61970::Base::StateVariables::StateVariable
			{

			public:
				SvShuntCompensatorSections();
				virtual ~SvShuntCompensatorSections();
				/**
				 * The number of sections in service as a continous variable. To get integer value
				 * scale with ShuntCompensator.bPerSection.
				 */
				IEC61970::Base::Domain::Float sections;
				/**
				 * The shunt compensator for which the state applies.
				 */
				IEC61970::Base::Wires::ShuntCompensator *ShuntCompensator;

			};

		}

	}

}
#endif // SVSHUNTCOMPENSATORSECTIONS_H
