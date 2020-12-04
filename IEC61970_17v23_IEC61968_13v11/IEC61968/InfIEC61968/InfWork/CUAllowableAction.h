///////////////////////////////////////////////////////////
//  CUAllowableAction.h
//  Implementation of the Class CUAllowableAction
///////////////////////////////////////////////////////////

#ifndef CUALLOWABLEACTION_H
#define CUALLOWABLEACTION_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/CompatibleUnit.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Allowed actions: Install, Remove, Transfer, Abandon, etc.
			 */
			class CUAllowableAction : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CUAllowableAction();
				virtual ~CUAllowableAction();
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;

			};

		}

	}

}
#endif // CUALLOWABLEACTION_H
