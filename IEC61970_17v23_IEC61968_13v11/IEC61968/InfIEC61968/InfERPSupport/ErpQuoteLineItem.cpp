///////////////////////////////////////////////////////////
//  ErpQuoteLineItem.cpp
//  Implementation of the Class ErpQuoteLineItem
///////////////////////////////////////////////////////////

#include "ErpQuoteLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceLineItem.h"

using IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem;


ErpQuoteLineItem::ErpQuoteLineItem()
	: ErpReqLineItem(nullptr), ErpInvoiceLineItem(nullptr), ErpQuote(nullptr), Design(nullptr)
{

}



ErpQuoteLineItem::~ErpQuoteLineItem(){

}
