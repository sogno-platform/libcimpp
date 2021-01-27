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
			 * (if applicable) Area or region code.
			 */
			IEC61970::Base::Domain::String areaCode;
			/**
			 * City code.
			 */
			IEC61970::Base::Domain::String cityCode;
			/**
			 * Country code.
			 */
			IEC61970::Base::Domain::String countryCode;
			/**
			 * (if applicable) Dial out code, for instance to call outside an enterprise.
			 */
			IEC61970::Base::Domain::String dialOut;
			/**
			 * (if applicable) Extension for this telephone number.
			 */
			IEC61970::Base::Domain::String extension;
			/**
			 * (if applicable) Prefix used when calling an international number.
			 */
			IEC61970::Base::Domain::String internationalPrefix;
			/**
			 * Phone number according to ITU E.164.
			 */
			IEC61970::Base::Domain::String ituPhone;
			/**
			 * Main (local) part of this telephone number.
			 */
			IEC61970::Base::Domain::String localNumber;

		};

	}

}
#endif // TELEPHONENUMBER_H
