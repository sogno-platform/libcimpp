///////////////////////////////////////////////////////////
//  AirCompressor.h
//  Implementation of the Class AirCompressor
//  Created on:      28-Jan-2016 12:43:16
///////////////////////////////////////////////////////////

#if !defined(EA_19ED3621_5C7F_42e8_9398_26A291B3399F__INCLUDED_)
#define EA_19ED3621_5C7F_42e8_9398_26A291B3399F__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Combustion turbine air compressor which is an integral part of a compressed air
				 * energy storage (CAES) plant.
				 */
				class AirCompressor : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					AirCompressor();
					virtual ~AirCompressor();
					/**
					 * Rating of the CAES air compressor.
					 */
					IEC61970::Base::Domain::Float airCompressorRating;

				};

			}

		}

	}

}
#endif // !defined(EA_19ED3621_5C7F_42e8_9398_26A291B3399F__INCLUDED_)
