///////////////////////////////////////////////////////////
//  ErpRecDelvLineItem.cpp
//  Implementation of the Class ErpRecDelvLineItem
///////////////////////////////////////////////////////////

#include "ErpRecDelvLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceLineItem.h"

using IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem;


ErpRecDelvLineItem::ErpRecDelvLineItem()
	: ErpReceiveDelivery(nullptr), ErpPOLineItem(nullptr), ErpInvoiceLineItem(nullptr)
{

}



ErpRecDelvLineItem::~ErpRecDelvLineItem(){

}
