///////////////////////////////////////////////////////////
//  String.h
//  Implementation of the Class String
///////////////////////////////////////////////////////////

#ifndef STRING_H
#define STRING_H

#include <string>

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * A string consisting of a sequence of characters. The character encoding is UTF-
			 * 8. The string length is unspecified and unlimited.
			 */
			typedef std::string String;

		}

	}

}
#endif // STRING_H
