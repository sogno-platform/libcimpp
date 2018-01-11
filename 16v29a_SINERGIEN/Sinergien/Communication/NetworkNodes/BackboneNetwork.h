///////////////////////////////////////////////////////////
//  BackboneNetwork.h
//  Implementation of the Class BackboneNetwork
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef BACKBONENETWORK_H
#define BACKBONENETWORK_H

#include "Sinergien/Communication/NetworkNodes/BackboneNode.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class BackboneNetwork : public Sinergien::Communication::NetworkNodes::BackboneNode
			{

			public:
				BackboneNetwork();
				virtual ~BackboneNetwork();

			};

		}

	}

}
#endif // BACKBONENETWORK_H
