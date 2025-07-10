#ifndef WindGenTurbineType2IEC_H
#define WindGenTurbineType2IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class WindContRotorRIEC;
	class WindPitchContEmulIEC;

	/** \brief Wind turbine IEC Type 2.  Reference: IEC Standard 61400-27-1, section 6.5.3. */
	class WindGenTurbineType2IEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType2IEC();
		~WindGenTurbineType2IEC() override;

		/** \brief Wind control rotor resistance model associated with wind turbine type 2 model. Default: 0 */
		CIMPP::WindContRotorRIEC* WindContRotorRIEC;

		/** \brief Pitch control emulator model associated with this wind turbine type 2 model. Default: 0 */
		CIMPP::WindPitchContEmulIEC* WindPitchContEmulIEC;

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

	BaseClass* WindGenTurbineType2IEC_factory();
}
#endif
