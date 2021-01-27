///////////////////////////////////////////////////////////
//  AirCompressor.h
//  Implementation of the Class AirCompressor
///////////////////////////////////////////////////////////

#ifndef AIRCOMPRESSOR_H
#define AIRCOMPRESSOR_H

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
#endif // AIRCOMPRESSOR_H
