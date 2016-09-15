///////////////////////////////////////////////////////////
//  MechLoad1.h
//  Implementation of the Class MechLoad1
//  Created on:      28-Jan-2016 12:45:43
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_DE168CE4_3DC7_496d_B361_AF7ED271517D__INCLUDED_)
#define EA_DE168CE4_3DC7_496d_B361_AF7ED271517D__INCLUDED_

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
#endif // !defined(EA_DE168CE4_3DC7_496d_B361_AF7ED271517D__INCLUDED_)
