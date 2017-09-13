///////////////////////////////////////////////////////////
//  StandardIndustryCode.h
//  Implementation of the Class StandardIndustryCode
///////////////////////////////////////////////////////////

#ifndef STANDARDINDUSTRYCODE_H
#define STANDARDINDUSTRYCODE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * The Standard Industrial Classification (SIC) are the codes that identify the
			 * type of products/service an industry is involved in, and used for statutory
			 * reporting purposes. For example, in the USA these codes are located by the
			 * federal government, and then published in a book entitled "The Standard
			 * Industrial Classification Manual". The codes are arranged in a hierarchical
			 * structure.
			 * Note that Residential Service Agreements are not classified according to the
			 * SIC codes.
			 */
			class StandardIndustryCode : public IEC61968::Common::Document
			{

			public:
				StandardIndustryCode();
				virtual ~StandardIndustryCode();
				/**
				 * Standard alphanumeric code assigned to a particular product/service within an
				 * industry.
				 */
				IEC61970::Base::Domain::String code;

			};

		}

	}

}
#endif // STANDARDINDUSTRYCODE_H
