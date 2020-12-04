///////////////////////////////////////////////////////////
//  URI.h
//  Implementation of the Class URI
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef URI_H
#define URI_H
#include "BaseClass.h"

namespace IEC61970
{
	namespace Part552Header
	{
		/**
		 * URI is a string following the rules defined by the W3C/IETF URI Planning
		 * Interest Group in a set of RFCs of which one is RFC 3305.
		 */
		class URI : public BaseClass
		{

		public:
			URI();
			virtual ~URI();

		};

	}

}
#endif // URI_H
