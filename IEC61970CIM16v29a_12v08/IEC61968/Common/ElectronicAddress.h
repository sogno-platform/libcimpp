///////////////////////////////////////////////////////////
//  ElectronicAddress.h
//  Implementation of the Class ElectronicAddress
///////////////////////////////////////////////////////////

#ifndef ELECTRONICADDRESS_H
#define ELECTRONICADDRESS_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Electronic address information.
		 */
		class ElectronicAddress : public BaseClass
		{

		public:
			ElectronicAddress();
			virtual ~ElectronicAddress();
			/**
			 * Primary email address.
			 */
			IEC61970::Base::Domain::String email1;
			/**
			 * Alternate email address.
			 */
			IEC61970::Base::Domain::String email2;
			/**
			 * Address on local area network.
			 */
			IEC61970::Base::Domain::String lan;
			/**
			 * MAC (Media Access Control) address.
			 */
			IEC61970::Base::Domain::String mac;
			/**
			 * Password needed to log in.
			 */
			IEC61970::Base::Domain::String password;
			/**
			 * Radio address.
			 */
			IEC61970::Base::Domain::String radio;
			/**
			 * User ID needed to log in, which can be for an individual person, an
			 * organisation, a location, etc.
			 */
			IEC61970::Base::Domain::String userID;
			/**
			 * World wide web address.
			 */
			IEC61970::Base::Domain::String web;

		};

	}

}
#endif // ELECTRONICADDRESS_H
