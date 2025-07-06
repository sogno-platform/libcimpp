#ifndef DCNode_H
#define DCNode_H
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

namespace CIMPP
{
	class DCBaseTerminal;
	class DCEquipmentContainer;
	class DCTopologicalNode;

	/** \brief DC nodes are points where terminals of DC conducting equipment are connected together with zero impedance. */
	class DCNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCNode();
		~DCNode() override;

		/** \brief The DC container for the DC nodes. Default: 0 */
		CIMPP::DCEquipmentContainer* DCEquipmentContainer;

		/** \brief DC base terminals interconnected with zero impedance at a this DC connectivity node. Default: 0 */
		std::list<CIMPP::DCBaseTerminal*> DCTerminals;

		/** \brief The DC topological node to which this DC connectivity node is assigned.  May depend on the current state of switches in the network. Default: 0 */
		CIMPP::DCTopologicalNode* DCTopologicalNode;

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

	BaseClass* DCNode_factory();
}
#endif
