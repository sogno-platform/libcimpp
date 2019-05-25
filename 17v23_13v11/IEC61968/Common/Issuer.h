///////////////////////////////////////////////////////////
//  Issuer.h
//  Implementation of the Class Issuer
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ISSUER_H
#define ISSUER_H

#include <list>

#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/DocumentPersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Person who issued the document and is responsible for its content.
		 */
		class Issuer : public IEC61968::Common::DocumentPersonRole
		{

		public:
			Issuer();
			virtual ~Issuer();
			/**
			 * All documents for this issuer.
			 */
			std::list<IEC61968::Common::Document*> Documents;

		};

	}

}
#endif // ISSUER_H
