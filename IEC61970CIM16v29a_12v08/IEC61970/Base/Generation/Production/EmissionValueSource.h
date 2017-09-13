///////////////////////////////////////////////////////////
//  EmissionValueSource.h
//  Implementation of the Class EmissionValueSource
///////////////////////////////////////////////////////////

#ifndef EMISSIONVALUESOURCE_H
#define EMISSIONVALUESOURCE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The source of the emission value.
				 */
				enum class EmissionValueSource
				{
					/**
					 * Measured.
					 */
					measured,
					/**
					 * Calculated.
					 */
					calculated
				};

			}

		}

	}

}
#endif // EMISSIONVALUESOURCE_H
