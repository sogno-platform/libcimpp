#ifndef WindContRotorRIEC_H
#define WindContRotorRIEC_H
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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindGenTurbineType2IEC;

	/** \brief Rotor resistance control model. Reference: IEC 61400-27-1:2015, 5.6.5.3. */
	class WindContRotorRIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContRotorRIEC();
		~WindContRotorRIEC() override;

		/** \brief The wind dynamics lookup table associated with this rotor resistance control model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 2 model with whitch this wind control rotor resistance model is associated. Default: 0 */
		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;

		/** \brief Integral gain in rotor resistance PI controller (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Irr&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kirr;

		/** \brief Filter gain for generator speed measurement (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omegafilt&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Float komegafilt;

		/** \brief Filter gain for power measurement (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pfilt&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Float kpfilt;

		/** \brief Proportional gain in rotor resistance PI controller (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Prr&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kprr;

		/** \brief Maximum rotor resistance (&lt;i&gt;r&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContRotorRIEC.rmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU rmax;

		/** \brief Minimum rotor resistance (&lt;i&gt;r&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContRotorRIEC.rmax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU rmin;

		/** \brief Filter time constant for generator speed measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omegafiltrr&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tomegafiltrr;

		/** \brief Filter time constant for power measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pfiltrr&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfiltrr;

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

	BaseClass* WindContRotorRIEC_factory();
}
#endif
