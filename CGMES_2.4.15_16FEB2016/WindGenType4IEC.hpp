#ifndef WindGenType4IEC_H
#define WindGenType4IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEC Type 4 generator set model.  Reference: IEC Standard 61400-27-1 Section 6.6.3.4. */
	class WindGenType4IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType4IEC();
		~WindGenType4IEC() override;

		/** \brief Maximum active current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dipmax;

		/** \brief Maximum reactive current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;

		/** \brief Minimum reactive current ramp rate (d). It is case dependent parameter. Default: nullptr */
		CIMPP::PU diqmin;

		/** \brief Time constant (T). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tg;

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

	BaseClass* WindGenType4IEC_factory();
}
#endif
