///////////////////////////////////////////////////////////
//  IEC62351-6ApplicationSecurityKind.h
//  Implementation of the Class IEC62351_6ApplicationSecurityKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef IEC62351_6APPLICATIONSECURITYKIND_H
#define IEC62351_6APPLICATIONSECURITYKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Specifies the expected security mechanism, per IEC 62351-6, to be utilized.
			 */
			enum class IEC62351_6ApplicationSecurityKind
			{
				/**
				 * Indicates that the link does not require security.
				 */
				 _undef = -1, 	noSecurity,
				/**
				 * Indicates that authentication based upon ACSE is required.
				 */
				applicationLevel,
				/**
				 * Indicates that the Edition 3, end-to-end security is needed. (this would not be
				 * utilized for ICCP, but for IEC 61850).
				 */
				end_to_end
			};

		}

	}

}
#endif // IEC62351_6APPLICATIONSECURITYKIND_H
