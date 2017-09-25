///////////////////////////////////////////////////////////
//  JointConfigurationKind.h
//  Implementation of the Class JointConfigurationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef JOINTCONFIGURATIONKIND_H
#define JOINTCONFIGURATIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of configuration for joints.
			 */
			enum class JointConfigurationKind
			{
				wires3to1,
				wires2to1,
				wires1to1,
				other
			};

		}

	}

}
#endif // JOINTCONFIGURATIONKIND_H
