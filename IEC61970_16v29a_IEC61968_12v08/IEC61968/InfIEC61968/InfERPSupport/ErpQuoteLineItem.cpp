///////////////////////////////////////////////////////////
//  ErpQuoteLineItem.cpp
//  Implementation of the Class ErpQuoteLineItem
///////////////////////////////////////////////////////////

#include "ErpQuoteLineItem.h"
#include "IEC61968/InfIEC61968/InfWork/Design.h"

using IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem;


ErpQuoteLineItem::ErpQuoteLineItem()
	: ErpReqLineItem(nullptr), ErpQuote(nullptr), ErpInvoiceLineItem(nullptr), Design(nullptr)
{

}



ErpQuoteLineItem::~ErpQuoteLineItem(){

}
