///////////////////////////////////////////////////////////
//  ErpQuote.h
//  Implementation of the Class ErpQuote
///////////////////////////////////////////////////////////

#ifndef ERPQUOTE_H
#define ERPQUOTE_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Document describing the prices of goods or services provided by a supplier. It
			 * includes the terms of the purchase, delivery proposals, identification of goods
			 * or services ordered, as well as their quantities.
			 */
			class ErpQuote : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpQuote();
				virtual ~ErpQuote();

			};

		}

	}

}
#endif // ERPQUOTE_H
