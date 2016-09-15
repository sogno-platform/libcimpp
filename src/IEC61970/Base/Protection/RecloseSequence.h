///////////////////////////////////////////////////////////
//  RecloseSequence.h
//  Implementation of the Class RecloseSequence
//  Created on:      28-Jan-2016 12:46:27
///////////////////////////////////////////////////////////

#if !defined(EA_86017B80_3FE6_47d3_9C72_60A15B8B0196__INCLUDED_)
#define EA_86017B80_3FE6_47d3_9C72_60A15B8B0196__INCLUDED_

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Protection
		{
			/**
			 * A reclose sequence (open and close) is defined for each possible reclosure of a
			 * breaker.
			 */
			class RecloseSequence : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				RecloseSequence();
				virtual ~RecloseSequence();
				/**
				 * Indicates the time lapse before the reclose step will execute a reclose.
				 */
				IEC61970::Base::Domain::Seconds recloseDelay;
				/**
				 * Indicates the ordinal position of the reclose step relative to other steps in
				 * the sequence.
				 */
				IEC61970::Base::Domain::Integer recloseStep;

			};

		}

	}

}
#endif // !defined(EA_86017B80_3FE6_47d3_9C72_60A15B8B0196__INCLUDED_)
