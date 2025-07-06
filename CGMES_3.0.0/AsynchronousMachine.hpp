#ifndef AsynchronousMachine_H
#define AsynchronousMachine_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RotatingMachine.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "AsynchronousMachineKind.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Frequency.hpp"
#include "Integer.hpp"
#include "PerCent.hpp"
#include "RotationSpeed.hpp"

namespace CIMPP
{
	class AsynchronousMachineDynamics;

	/** \brief A rotating machine whose shaft rotates asynchronously with the electrical field.  Also known as an induction machine with no external connection to the rotor windings, e.g. squirrel-cage induction machine. */
	class AsynchronousMachine : public RotatingMachine
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachine();
		~AsynchronousMachine() override;

		/** \brief Asynchronous machine dynamics model used to describe dynamic behaviour of this asynchronous machine. Default: 0 */
		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;

		/** \brief Indicates the type of Asynchronous Machine (motor or generator). Default: 0 */
		CIMPP::AsynchronousMachineKind asynchronousMachineType;

		/** \brief Indicates whether the machine is a converter fed drive. Used for short circuit data exchange according to IEC 60909. Default: false */
		CIMPP::Boolean converterFedDrive;

		/** \brief Efficiency of the asynchronous machine at nominal operation as a percentage. Indicator for converter drive motors. Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::PerCent efficiency;

		/** \brief Ratio of locked-rotor current to the rated current of the motor (Ia/Ir). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float iaIrRatio;

		/** \brief Nameplate data indicates if the machine is 50 Hz or 60 Hz. Default: nullptr */
		CIMPP::Frequency nominalFrequency;

		/** \brief Nameplate data.  Depends on the slip and number of pole pairs. Default: nullptr */
		CIMPP::RotationSpeed nominalSpeed;

		/** \brief Number of pole pairs of stator. Used for short circuit data exchange according to IEC 60909. Default: 0 */
		CIMPP::Integer polePairNumber;

		/** \brief Rated mechanical power (Pr in IEC 60909-0). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::ActivePower ratedMechanicalPower;

		/** \brief Indicates for converter drive motors if the power can be reversible. Used for short circuit data exchange according to IEC 60909. Default: false */
		CIMPP::Boolean reversible;

		/** \brief Locked rotor ratio (R/X). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float rxLockedRotorRatio;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* AsynchronousMachine_factory();
}
#endif
