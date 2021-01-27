///////////////////////////////////////////////////////////
//  PrimeMover.h
//  Implementation of the Class PrimeMover
///////////////////////////////////////////////////////////

#ifndef PRIMEMOVER_H
#define PRIMEMOVER_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Wires/SynchronousMachine.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * The machine used to develop mechanical energy used to drive a generator.
				 */
				class PrimeMover : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					PrimeMover();
					virtual ~PrimeMover();
					/**
					 * Rating of prime mover.
					 */
					IEC61970::Base::Domain::Float primeMoverRating;
					/**
					 * Synchronous machines this Prime mover drives.
					 */
					std::list<IEC61970::Base::Wires::SynchronousMachine*> SynchronousMachines;

				};

			}

		}

	}

}
#endif // PRIMEMOVER_H
