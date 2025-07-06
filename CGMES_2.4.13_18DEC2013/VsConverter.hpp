#ifndef VsConverter_H
#define VsConverter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ACDCConverter.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "AngleDegrees.hpp"
#include "CurrentFlow.hpp"
#include "PU.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Simple_Float.hpp"
#include "Voltage.hpp"
#include "VsPpccControlKind.hpp"
#include "VsQpccControlKind.hpp"

namespace CIMPP
{
	class VsCapabilityCurve;

	/** \brief DC side of the voltage source converter (VSC). */
	class VsConverter : public ACDCConverter
	{
	public:
		/* constructor initialising all attributes to null */
		VsConverter();
		~VsConverter() override;

		/** \brief All converters with this capability curve. Default: 0 */
		CIMPP::VsCapabilityCurve* CapabilityCurve;

		/** \brief Angle between uf and uc. Converter state variable used in power flow. Default: nullptr */
		CIMPP::AngleDegrees delta;

		/** \brief Droop constant; pu value is obtained as D [kV^2 / MW] x Sb / Ubdc^2. Default: nullptr */
		CIMPP::PU droop;

		/** \brief Compensation (resistance) constant. Used to compensate for voltage drop when controlling voltage at a distant bus. Default: nullptr */
		CIMPP::Resistance droopCompensation;

		/** \brief The max quotient between the AC converter voltage (Uc) and DC voltage (Ud). A factor typically less than 1. VSC configuration data used in power flow. Default: nullptr */
		CIMPP::Simple_Float maxModulationIndex;

		/** \brief The maximum current through a valve. This current limit is the basis for calculating the capability diagram. VSC  configuration data. Default: nullptr */
		CIMPP::CurrentFlow maxValveCurrent;

		/** \brief Kind of control of real power and/or DC voltage. Default: 0 */
		CIMPP::VsPpccControlKind pPccControl;

		/** \brief  Default: 0 */
		CIMPP::VsQpccControlKind qPccControl;

		/** \brief Reactive power sharing factor among parallel converters on Uac control. Default: nullptr */
		CIMPP::PerCent qShare;

		/** \brief Reactive power injection target in AC grid, at point of common coupling. Default: nullptr */
		CIMPP::ReactivePower targetQpcc;

		/** \brief Voltage target in AC grid, at point of common coupling. Default: nullptr */
		CIMPP::Voltage targetUpcc;

		/** \brief Filter bus voltage. Converter state variable, result from power flow. Default: nullptr */
		CIMPP::Voltage uf;

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

	BaseClass* VsConverter_factory();
}
#endif
