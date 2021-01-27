///////////////////////////////////////////////////////////
//  OperationalRestriction.h
//  Implementation of the Class OperationalRestriction
///////////////////////////////////////////////////////////

#ifndef OPERATIONALRESTRICTION_H
#define OPERATIONALRESTRICTION_H

#include <list>

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/FloatQuantity.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Assets/ProductAssetModel.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * A document that can be associated with equipment to describe any sort of
		 * restrictions compared with the original manufacturer's specification or with
		 * the usual operational practice e.g. temporary maximum loadings, maximum
		 * switching current, do not operate if bus couplers are open, etc.
		 * In the UK, for example, if a breaker or switch ever mal-operates, this is
		 * reported centrally and utilities use their asset systems to identify all the
		 * installed devices of the same manufacturer's type. They then apply operational
		 * restrictions in the operational systems to warn operators of potential problems.
		 * After appropriate inspection and maintenance, the operational restrictions may
		 * be removed.
		 */
		class OperationalRestriction : public IEC61968::Common::Document
		{

		public:
			OperationalRestriction();
			virtual ~OperationalRestriction();
			/**
			 * Interval during which this restriction is applied.
			 */
			IEC61970::Base::Domain::DateTimeInterval activePeriod;
			/**
			 * Restricted (new) value; includes unit of measure and potentially multiplier.
			 */
			IEC61970::Base::Domain::FloatQuantity restrictedValue;
			/**
			 * All equipments to which this restriction applies.
			 */
			std::list<IEC61970::Base::Core::Equipment*> Equipments;
			/**
			 * Asset model to which this restriction applies.
			 */
			IEC61968::Assets::ProductAssetModel *ProductAssetModel;

		};

	}

}
#endif // OPERATIONALRESTRICTION_H
