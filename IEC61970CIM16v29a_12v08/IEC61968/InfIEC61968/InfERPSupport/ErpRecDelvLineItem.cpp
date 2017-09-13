///////////////////////////////////////////////////////////
//  ErpRecDelvLineItem.cpp
//  Implementation of the Class ErpRecDelvLineItem
///////////////////////////////////////////////////////////

#include "ErpRecDelvLineItem.h"

using IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem;


ErpRecDelvLineItem::ErpRecDelvLineItem()
	: ErpReceiveDelivery(nullptr), ErpPOLineItem(nullptr), ErpInvoiceLineItem(nullptr)
{

}



ErpRecDelvLineItem::~ErpRecDelvLineItem(){

}
