///////////////////////////////////////////////////////////
//  TelephoneNumber.h
//  Implementation of the Class TelephoneNumber
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TELEPHONENUMBER_H
#define TELEPHONENUMBER_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Telephone number.
		 */
		class TelephoneNumber : public BaseClass
		{

		public:
			TelephoneNumber();
			virtual ~TelephoneNumber();
			/**
			 * Area or region code.
			 */
			IEC61970::Base::Domain::String areaCode;
			/**
			 * (if applicable) City code.
			 */
			IEC61970::Base::Domain::String cityCode;
			/**
			 * Country code.
			 */
			IEC61970::Base::Domain::String countryCode;
			/**
			 * (if applicable) Extension for this telephone number.
			 */
			IEC61970::Base::Domain::String extension;
			/**
			 * Main (local) part of this telephone number.
			 */
			IEC61970::Base::Domain::String localNumber;

		};

	}

}
#endif // TELEPHONENUMBER_H
