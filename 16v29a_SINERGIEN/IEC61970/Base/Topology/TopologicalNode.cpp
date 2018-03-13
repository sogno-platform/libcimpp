///////////////////////////////////////////////////////////
//  TopologicalNode.cpp
//  Implementation of the Class TopologicalNode
///////////////////////////////////////////////////////////

#include "TopologicalNode.h"

using IEC61970::Base::Topology::TopologicalNode;


TopologicalNode::TopologicalNode()
	: ReportingGroup(nullptr), ConnectivityNodeContainer(nullptr), BaseVoltage(nullptr)
{

}



TopologicalNode::~TopologicalNode(){

}
