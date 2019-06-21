///////////////////////////////////////////////////////////
//  UserAttribute.h
//  Implementation of the Class UserAttribute
///////////////////////////////////////////////////////////

#ifndef USERATTRIBUTE_H
#define USERATTRIBUTE_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/StringQuantity.h"
#include "IEC61968/InfIEC61968/InfAssets/Specification.h"
#include "IEC61968/Assets/ProcedureDataSet.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		class Transaction;
	}
}

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Generic name-value pair class, with optional sequence number and units for
		 * value; can be used to model parts of information exchange when concrete types
		 * are not known in advance.
		 */
		class UserAttribute : public BaseClass
		{

		public:
			UserAttribute();
			virtual ~UserAttribute();
			/**
			 * Name of an attribute.
			 */
			IEC61970::Base::Domain::String name;
			/**
			 * Sequence number for this attribute in a list of attributes.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * Value of an attribute, including unit information.
			 */
			IEC61970::Base::Domain::StringQuantity value;
			IEC61968::InfIEC61968::InfAssets::Specification *RatingSpecification;
			IEC61968::InfIEC61968::InfAssets::Specification *PropertySpecification;
			std::list<IEC61968::Assets::ProcedureDataSet*> ProcedureDataSets;
			/**
			 * Transaction for which this snapshot has been recorded.
			 */
			IEC61968::PaymentMetering::Transaction *Transaction;

		};

	}

}
#endif // USERATTRIBUTE_H
