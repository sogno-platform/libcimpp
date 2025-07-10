#ifndef WindGenTurbineType3bIEC_H
#define WindGenTurbineType3bIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindGenTurbineType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief IEC Type 3B generator set model.  Reference: IEC Standard 61400-27-1 Section 6.6.3.3. */
	class WindGenTurbineType3bIEC : public WindGenTurbineType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType3bIEC();
		~WindGenTurbineType3bIEC() override;

		/** \brief Crowbar duration versus voltage variation look-up table (f()). It is case dependent parameter. Default: nullptr */
		CIMPP::Simple_Float fducw;

		/** \brief Crowbar control mode ().   The parameter is case dependent parameter. Default: false */
		CIMPP::Boolean mwtcwp;

		/** \brief Current generation Time constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Time constant for crowbar washout filter (). It is case dependent parameter. Default: nullptr */
		CIMPP::Seconds two;

		/** \brief Electromagnetic transient reactance (x). It is type dependent parameter. Default: nullptr */
		CIMPP::PU xs;

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

	BaseClass* WindGenTurbineType3bIEC_factory();
}
#endif
