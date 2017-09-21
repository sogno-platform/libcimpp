///////////////////////////////////////////////////////////
//  TownDetail.h
//  Implementation of the Class TownDetail
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TOWNDETAIL_H
#define TOWNDETAIL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Town details, in the context of address.
		 */
		class TownDetail : public BaseClass
		{

		public:
			TownDetail();
			virtual ~TownDetail();
			/**
			 * Town code.
			 */
			IEC61970::Base::Domain::String code;
			/**
			 * Name of the country.
			 */
			IEC61970::Base::Domain::String country;
			/**
			 * Town name.
			 */
			IEC61970::Base::Domain::String name;
			/**
			 * Town section. For example, it is common for there to be 36 sections per
			 * township.
			 */
			IEC61970::Base::Domain::String section;
			/**
			 * Name of the state or province.
			 */
			IEC61970::Base::Domain::String stateOrProvince;

		};

	}

}
#endif // TOWNDETAIL_H
