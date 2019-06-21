///////////////////////////////////////////////////////////
//  IOPointSource.h
//  Implementation of the Class IOPointSource
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef IOPOINTSOURCE_H
#define IOPOINTSOURCE_H

#include <list>

#include "IEC61970/Base/Meas/IOPoint.h"
#include "IEC61970/Base/Meas/MeasurementValueSource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Indicates the point source for an IO Point.
			 */
			class IOPointSource : public IEC61970::Base::Meas::MeasurementValueSource
			{

			public:
				IOPointSource();
				virtual ~IOPointSource();
				std::list<IEC61970::Base::Meas::IOPoint*> IOPoint;

			};

		}

	}

}
#endif // IOPOINTSOURCE_H
