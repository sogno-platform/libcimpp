#ifndef WindContQIEC_H
#define WindContQIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "WindLVRTQcontrolModesKind.hpp"
#include "WindQcontrolModesKind.hpp"

namespace CIMPP
{
	class WindTurbineType3or4IEC;

	/** \brief Q control model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.6. */
	class WindContQIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQIEC();
		~WindContQIEC() override;

		/** \brief Wind turbine type 3 or 4 model with which this reactive control mode is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum reactive current injection during dip (i). It is type dependent parameter. Default: nullptr */
		CIMPP::PU iqh1;

		/** \brief Maximum reactive current injection (i). It is type dependent parameter. Default: nullptr */
		CIMPP::PU iqmax;

		/** \brief Minimum reactive current injection (i). It is type dependent parameter. Default: nullptr */
		CIMPP::PU iqmin;

		/** \brief Post fault reactive current injection (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU iqpost;

		/** \brief Reactive power PI controller integration gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kiq;

		/** \brief Voltage PI controller integration gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kiu;

		/** \brief Reactive power PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kpq;

		/** \brief Voltage PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kpu;

		/** \brief Voltage scaling factor for LVRT current (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU kqv;

		/** \brief Maximum reactive power (q). It is type dependent parameter. Default: nullptr */
		CIMPP::PU qmax;

		/** \brief Minimum reactive power (q). It is type dependent parameter. Default: nullptr */
		CIMPP::PU qmin;

		/** \brief Resistive component of voltage drop impedance (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU rdroop;

		/** \brief Time constant in reactive current lag (T). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tiq;

		/** \brief Power measurement filter time constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfilt;

		/** \brief Length of time period where post fault reactive power is injected (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tpost;

		/** \brief Time constant in reactive power order lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tqord;

		/** \brief Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tufilt;

		/** \brief Voltage dead band lower limit (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU udb1;

		/** \brief Voltage dead band upper limit (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU udb2;

		/** \brief Maximum voltage in voltage PI controller integral term (u). It is type dependent parameter. Default: nullptr */
		CIMPP::PU umax;

		/** \brief Minimum voltage in voltage PI controller integral term (u). It is type dependent parameter. Default: nullptr */
		CIMPP::PU umin;

		/** \brief Voltage threshold for LVRT detection in q control (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU uqdip;

		/** \brief User defined bias in voltage reference (), used when  =. It is case dependent parameter. Default: nullptr */
		CIMPP::PU uref0;

		/** \brief Types of LVRT Q control modes (). It is project dependent parameter. Default: 0 */
		CIMPP::WindLVRTQcontrolModesKind windLVRTQcontrolModesType;

		/** \brief Types of general wind turbine Q control modes ().  It is project dependent parameter. Default: 0 */
		CIMPP::WindQcontrolModesKind windQcontrolModesType;

		/** \brief Inductive component of voltage drop impedance (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU xdroop;

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

	BaseClass* WindContQIEC_factory();
}
#endif
