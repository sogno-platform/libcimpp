#ifndef TransformerEnd_H
#define TransformerEnd_H
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
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"

namespace CIMPP
{
	class BaseVoltage;
	class PhaseTapChanger;
	class RatioTapChanger;
	class Terminal;

	/** \brief A conducting connection point of a power transformer. It corresponds to a physical transformer winding terminal.  In earlier CIM versions, the TransformerWinding class served a similar purpose, but this class is more flexible because it associates to terminal but is not a specialization of ConductingEquipment. */
	class TransformerEnd : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TransformerEnd();
		~TransformerEnd() override;

		/** \brief Base voltage of the transformer end.  This is essential for PU calculation. Default: 0 */
		CIMPP::BaseVoltage* BaseVoltage;

		/** \brief Phase tap changer associated with this transformer end. Default: 0 */
		CIMPP::PhaseTapChanger* PhaseTapChanger;

		/** \brief Ratio tap changer associated with this transformer end. Default: 0 */
		CIMPP::RatioTapChanger* RatioTapChanger;

		/** \brief Terminal of the power transformer to which this transformer end belongs. Default: 0 */
		CIMPP::Terminal* Terminal;

		/** \brief Number for this transformer end, corresponding to the end`s order in the power transformer vector group or phase angle clock number.  Highest voltage winding should be 1.  Each end within a power transformer should have a unique subsequent end number.   Note the transformer end number need not match the terminal sequence number. Default: 0 */
		CIMPP::Integer endNumber;

		/** \brief (for Yn and Zn connections) True if the neutral is solidly grounded. Default: false */
		CIMPP::Boolean grounded;

		/** \brief (for Yn and Zn connections) Resistance part of neutral impedance where `grounded` is true. Default: nullptr */
		CIMPP::Resistance rground;

		/** \brief (for Yn and Zn connections) Reactive part of neutral impedance where `grounded` is true. Default: nullptr */
		CIMPP::Reactance xground;

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

	BaseClass* TransformerEnd_factory();
}
#endif
