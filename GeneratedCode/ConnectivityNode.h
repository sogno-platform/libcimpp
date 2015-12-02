///////////////////////////////////////////////////////////
//  ConnectivityNode.h
//  Implementation of the Class ConnectivityNode
//  Created on:      27-Nov-2015 11:05:43
///////////////////////////////////////////////////////////

#if !defined(EA_567FE854_699D_4290_87B9_40E5C0B26033__INCLUDED_)
#define EA_567FE854_699D_4290_87B9_40E5C0B26033__INCLUDED_

#include "ConnectivityNodeContainer.h"
#include "IdentifiedObject.h"

/**
 * Connectivity nodes are points where terminals of AC conducting equipment are
 * connected together with zero impedance.
 */
class ConnectivityNode : public IdentifiedObject
{

public:
	ConnectivityNode();
	/**
	 * Container of this connectivity node.
	 */
	std::shared_ptr<ConnectivityNodeContainer> ConnectivityNodeContainer;

};
#endif // !defined(EA_567FE854_699D_4290_87B9_40E5C0B26033__INCLUDED_)
