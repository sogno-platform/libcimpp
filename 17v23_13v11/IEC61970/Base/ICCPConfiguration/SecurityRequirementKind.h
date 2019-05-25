///////////////////////////////////////////////////////////
//  SecurityRequirementKind.h
//  Implementation of the Class SecurityRequirementKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef SECURITYREQUIREMENTKIND_H
#define SECURITYREQUIREMENTKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Defines the expected level of security to be negotiated.
			 */
			enum class SecurityRequirementKind
			{
				/**
				 * Indicates that the actor does not support any security options
				 */
				 _undef = -1, 	not_supported,
				/**
				 * Indicates that the transport level security, per IEC 62351-6, is required.
				 */
				transportSecurityRequired,
				applicationSecurityRequired
			};

		}

	}

}
#endif // SECURITYREQUIREMENTKIND_H
