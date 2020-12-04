///////////////////////////////////////////////////////////
//  Transactor.h
//  Implementation of the Class Transactor
///////////////////////////////////////////////////////////

#ifndef TRANSACTOR_H
#define TRANSACTOR_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The entity that ultimately executes the transaction and which is in control of
		 * the process; typically this is embodied in secure software running on a server
		 * that may employ secure hardware encryption devices for secure transaction
		 * processing.
		 */
		class Transactor : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Transactor();
			virtual ~Transactor();

		};

	}

}
#endif // TRANSACTOR_H
