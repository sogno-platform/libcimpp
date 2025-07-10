#ifndef BaseVoltage_H
#define BaseVoltage_H
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
#include "Voltage.hpp"

namespace CIMPP
{
	class ConductingEquipment;
	class TopologicalNode;
	class TransformerEnd;
	class VoltageLevel;

	/** \brief Defines a system base voltage which is referenced. */
	class BaseVoltage : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		BaseVoltage();
		~BaseVoltage() override;

		/** \brief All conducting equipment with this base voltage.  Use only when there is no voltage level container used and only one base voltage applies.  For example, not used for transformers. Default: 0 */
		std::list<CIMPP::ConductingEquipment*> ConductingEquipment;

		/** \brief The topological nodes at the base voltage. Default: 0 */
		std::list<CIMPP::TopologicalNode*> TopologicalNode;

		/** \brief Transformer ends at the base voltage.  This is essential for PU calculation. Default: 0 */
		std::list<CIMPP::TransformerEnd*> TransformerEnds;

		/** \brief The voltage levels having this base voltage. Default: 0 */
		std::list<CIMPP::VoltageLevel*> VoltageLevel;

		/** \brief The power system resource`s base voltage.  Shall be a positive value and not zero. Default: nullptr */
		CIMPP::Voltage nominalVoltage;

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

	BaseClass* BaseVoltage_factory();
}
#endif
