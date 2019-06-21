///////////////////////////////////////////////////////////
//  Channel.h
//  Implementation of the Class Channel
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CHANNEL_H
#define CHANNEL_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * A single path for the collection or reporting of register values over a period
		 * of time. For example, a register which measures forward energy can have two
		 * channels, one providing bulk quantity readings and the other providing interval
		 * readings of a fixed interval size.
		 */
		class Channel : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Channel();
			virtual ~Channel();
			/**
			 * If true, the data is being calculated by an enterprise system rather than
			 * metered directly.
			 */
			IEC61970::Base::Domain::Boolean isVirtual;

		};

	}

}
#endif // CHANNEL_H
