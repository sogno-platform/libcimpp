///////////////////////////////////////////////////////////
//  NonConformLoad.h
//  Implementation of the Class NonConformLoad
///////////////////////////////////////////////////////////

#ifndef NONCONFORMLOAD_H
#define NONCONFORMLOAD_H

#include "IEC61970/Base/Wires/EnergyConsumer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * NonConformLoad represent loads that do not follow a daily load change pattern
			 * and changes are not correlated with the daily load change pattern.
			 */
			class NonConformLoad : public IEC61970::Base::Wires::EnergyConsumer
			{

			public:
				NonConformLoad();
				virtual ~NonConformLoad();

			};

		}

	}

}
#endif // NONCONFORMLOAD_H
