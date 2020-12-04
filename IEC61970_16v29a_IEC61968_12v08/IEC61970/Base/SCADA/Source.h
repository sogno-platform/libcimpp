///////////////////////////////////////////////////////////
//  Source.h
//  Implementation of the Class Source
///////////////////////////////////////////////////////////

#ifndef SOURCE_H
#define SOURCE_H

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * Source gives information related to the origin of a value.
			 */
			enum class Source
			{
				/**
				 * The value is provided by input from the process I/O or being calculated from
				 * some function.
				 */
				 _undef = -1, 	PROCESS,
				/**
				 * The value contains a default value.
				 */
				DEFAULTED,
				/**
				 * The value is provided by input of an operator or by an automatic source.
				 */
				SUBSTITUTED
			};

		}

	}

}
#endif // SOURCE_H
