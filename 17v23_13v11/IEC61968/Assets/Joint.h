///////////////////////////////////////////////////////////
//  Joint.h
//  Implementation of the Class Joint
///////////////////////////////////////////////////////////

#ifndef JOINT_H
#define JOINT_H

#include "IEC61968/InfIEC61968/InfAssets/JointConfigurationKind.h"
#include "IEC61968/InfIEC61968/InfAssets/JointFillKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Joint connects two or more cables. It includes the portion of cable under wipes,
		 * welds, or other seals.
		 */
		class Joint : public IEC61968::Assets::Asset
		{

		public:
			Joint();
			virtual ~Joint();
			/**
			 * Configuration of joint.
			 */
			IEC61968::InfIEC61968::InfAssets::JointConfigurationKind configurationKind = IEC61968::InfIEC61968::InfAssets::JointConfigurationKind::_undef;
			/**
			 * Material used to fill the joint.
			 */
			IEC61968::InfIEC61968::InfAssets::JointFillKind fillKind = IEC61968::InfIEC61968::InfAssets::JointFillKind::_undef;
			/**
			 * The type of insulation around the joint, classified according to the utility's
			 * asset management standards and practices.
			 */
			IEC61970::Base::Domain::String insulation;

		};

	}

}
#endif // JOINT_H
