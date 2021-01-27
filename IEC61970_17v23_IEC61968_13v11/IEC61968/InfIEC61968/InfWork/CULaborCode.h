///////////////////////////////////////////////////////////
//  CULaborCode.h
//  Implementation of the Class CULaborCode
///////////////////////////////////////////////////////////

#ifndef CULABORCODE_H
#define CULABORCODE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Labor code associated with various compatible unit labor items.
			 */
			class CULaborCode : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CULaborCode();
				virtual ~CULaborCode();
				/**
				 * Labor code.
				 */
				IEC61970::Base::Domain::String code;
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // CULABORCODE_H
