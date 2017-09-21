///////////////////////////////////////////////////////////
//  MechLoad1.h
//  Implementation of the Class MechLoad1
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef MECHLOAD1_H
#define MECHLOAD1_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/MechanicalLoadDynamics/MechanicalLoadDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace MechanicalLoadDynamics
			{
				/**
				 * Mechanical load model type 1.
				 */
				class MechLoad1 : public IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics
				{

				public:
					MechLoad1();
					virtual ~MechLoad1();
					/**
					 * Speed squared coefficient (a).
					 */
					IEC61970::Base::Domain::Float a;
					/**
					 * Speed coefficient (b).
					 */
					IEC61970::Base::Domain::Float b;
					/**
					 * Speed to the exponent coefficient (d).
					 */
					IEC61970::Base::Domain::Float d;
					/**
					 * Exponent (e).
					 */
					IEC61970::Base::Domain::Float e;

				};

			}

		}

	}

}
#endif // MECHLOAD1_H
