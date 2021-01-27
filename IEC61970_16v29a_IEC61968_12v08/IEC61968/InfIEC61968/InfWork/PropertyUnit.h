///////////////////////////////////////////////////////////
//  PropertyUnit.h
//  Implementation of the Class PropertyUnit
///////////////////////////////////////////////////////////

#ifndef PROPERTYUNIT_H
#define PROPERTYUNIT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkActionKind.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/CompatibleUnit.h"
#include "IEC61968/InfIEC61968/InfWork/CUMaterialItem.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Unit of property for reporting purposes.
			 */
			class PropertyUnit : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				PropertyUnit();
				virtual ~PropertyUnit();
				/**
				 * A code that identifies appropriate type of property accounts such as
				 * distribution, streetlgihts, communications.
				 */
				IEC61970::Base::Domain::String accountingUsage;
				/**
				 * Activity code identifies a specific and distinguishable work action.
				 */
				IEC61968::InfIEC61968::InfWork::WorkActionKind activityCode = IEC61968::InfIEC61968::InfWork::WorkActionKind::_undef;
				/**
				 * Used for property record accounting. For example, in the USA, this would be a
				 * FERC account.
				 */
				IEC61970::Base::Domain::String propertyAccount;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;
				std::list<IEC61968::InfIEC61968::InfWork::CUMaterialItem*> CUMaterialItems;

			};

		}

	}

}
#endif // PROPERTYUNIT_H
