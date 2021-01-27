///////////////////////////////////////////////////////////
//  DERGroupDispatch.h
//  Implementation of the Class DERGroupDispatch
//  Original author: Margaret
///////////////////////////////////////////////////////////

#ifndef DERGROUPDISPATCH_H
#define DERGROUPDISPATCH_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace DER
	{
		class DERGroupDispatch : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			DERGroupDispatch();
			virtual ~DERGroupDispatch();

		};

	}

}
#endif // DERGROUPDISPATCH_H
