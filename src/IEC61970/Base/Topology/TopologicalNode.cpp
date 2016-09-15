///////////////////////////////////////////////////////////
//  TopologicalNode.cpp
//  Implementation of the Class TopologicalNode
//  Created on:      28-Jan-2016 12:47:20
///////////////////////////////////////////////////////////

#include "TopologicalNode.h"

using IEC61970::Base::Topology::TopologicalNode;


TopologicalNode::TopologicalNode()
	: ReportingGroup(nullptr), ConnectivityNodeContainer(nullptr), BaseVoltage(nullptr)
{

}



TopologicalNode::~TopologicalNode(){

}
