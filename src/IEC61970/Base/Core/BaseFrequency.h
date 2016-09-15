///////////////////////////////////////////////////////////
//  BaseFrequency.h
//  Implementation of the Class BaseFrequency
//  Created on:      28-Jan-2016 12:43:25
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_A2AC2591_9349_4515_973F_10591A311984__INCLUDED_)
#define EA_A2AC2591_9349_4515_973F_10591A311984__INCLUDED_

#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The class describe a base frequency for a power system network. In case of
			 * multiple power networks with different frequencies, e.g. 50 or 60 Hertz each
			 * network will have it's own base frequency class. Hence it is assumed that power
			 * system objects having different base frequencies appear in separate documents
			 * where each document has a single base frequency instance.
			 */
			class BaseFrequency : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BaseFrequency();
				virtual ~BaseFrequency();
				/**
				 * The base frequency.
				 */
				IEC61970::Base::Domain::Frequency frequency;

			};

		}

	}

}
#endif // !defined(EA_A2AC2591_9349_4515_973F_10591A311984__INCLUDED_)
