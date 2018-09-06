// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cassert>
#include "CCPACSWingComponentSegments.h"
#include "CPACSComponentSegment.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSComponentSegment::CPACSComponentSegment(CCPACSWingComponentSegments* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
        //assert(parent != NULL);
        m_parent = parent;
    }

    CPACSComponentSegment::~CPACSComponentSegment()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CCPACSWingComponentSegments* CPACSComponentSegment::GetParent() const
    {
        return m_parent;
    }

    CTiglUIDManager& CPACSComponentSegment::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSComponentSegment::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSComponentSegment::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read attribute uID
        if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
            m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            if (m_uID.empty()) {
                LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
        }

        // read element name
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/name")) {
            m_name = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
            if (m_name.empty()) {
                LOG(WARNING) << "Required element name is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element name is missing at xpath " << xpath;
        }

        // read element description
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/description")) {
            m_description = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
            if (m_description->empty()) {
                LOG(WARNING) << "Optional element description is present but empty at xpath " << xpath;
            }
        }

        // read element fromElementUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/fromElementUID")) {
            m_fromElementUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/fromElementUID");
            if (m_fromElementUID.empty()) {
                LOG(WARNING) << "Required element fromElementUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element fromElementUID is missing at xpath " << xpath;
        }

        // read element toElementUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/toElementUID")) {
            m_toElementUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/toElementUID");
            if (m_toElementUID.empty()) {
                LOG(WARNING) << "Required element toElementUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element toElementUID is missing at xpath " << xpath;
        }

        // read element structure
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/structure")) {
            m_structure = boost::in_place(reinterpret_cast<CCPACSWingComponentSegment*>(this), m_uidMgr);
            try {
                m_structure->ReadCPACS(tixiHandle, xpath + "/structure");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read structure at xpath " << xpath << ": " << e.what();
                m_structure = boost::none;
            }
        }

        // read element controlSurfaces
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/controlSurfaces")) {
            m_controlSurfaces = boost::in_place(reinterpret_cast<CCPACSWingComponentSegment*>(this), m_uidMgr);
            try {
                m_controlSurfaces->ReadCPACS(tixiHandle, xpath + "/controlSurfaces");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read controlSurfaces at xpath " << xpath << ": " << e.what();
                m_controlSurfaces = boost::none;
            }
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSComponentSegment::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element name
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/name");
        tixi::TixiSaveElement(tixiHandle, xpath + "/name", m_name);

        // write element description
        if (m_description) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/description");
            tixi::TixiSaveElement(tixiHandle, xpath + "/description", *m_description);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/description")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/description");
            }
        }

        // write element fromElementUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/fromElementUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/fromElementUID", m_fromElementUID);

        // write element toElementUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/toElementUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/toElementUID", m_toElementUID);

        // write element structure
        if (m_structure) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/structure");
            m_structure->WriteCPACS(tixiHandle, xpath + "/structure");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/structure")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/structure");
            }
        }

        // write element controlSurfaces
        if (m_controlSurfaces) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/controlSurfaces");
            m_controlSurfaces->WriteCPACS(tixiHandle, xpath + "/controlSurfaces");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/controlSurfaces")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/controlSurfaces");
            }
        }

    }

    const std::string& CPACSComponentSegment::GetUID() const
    {
        return m_uID;
    }

    void CPACSComponentSegment::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const std::string& CPACSComponentSegment::GetName() const
    {
        return m_name;
    }

    void CPACSComponentSegment::SetName(const std::string& value)
    {
        m_name = value;
    }

    const boost::optional<std::string>& CPACSComponentSegment::GetDescription() const
    {
        return m_description;
    }

    void CPACSComponentSegment::SetDescription(const boost::optional<std::string>& value)
    {
        m_description = value;
    }

    const std::string& CPACSComponentSegment::GetFromElementUID() const
    {
        return m_fromElementUID;
    }

    void CPACSComponentSegment::SetFromElementUID(const std::string& value)
    {
        m_fromElementUID = value;
    }

    const std::string& CPACSComponentSegment::GetToElementUID() const
    {
        return m_toElementUID;
    }

    void CPACSComponentSegment::SetToElementUID(const std::string& value)
    {
        m_toElementUID = value;
    }

    const boost::optional<CCPACSWingCSStructure>& CPACSComponentSegment::GetStructure() const
    {
        return m_structure;
    }

    boost::optional<CCPACSWingCSStructure>& CPACSComponentSegment::GetStructure()
    {
        return m_structure;
    }

    const boost::optional<CCPACSControlSurfaces>& CPACSComponentSegment::GetControlSurfaces() const
    {
        return m_controlSurfaces;
    }

    boost::optional<CCPACSControlSurfaces>& CPACSComponentSegment::GetControlSurfaces()
    {
        return m_controlSurfaces;
    }

    CCPACSWingCSStructure& CPACSComponentSegment::GetStructure(CreateIfNotExistsTag)
    {
        if (!m_structure)
            m_structure = boost::in_place(reinterpret_cast<CCPACSWingComponentSegment*>(this), m_uidMgr);
        return *m_structure;
    }

    void CPACSComponentSegment::RemoveStructure()
    {
        m_structure = boost::none;
    }

    CCPACSControlSurfaces& CPACSComponentSegment::GetControlSurfaces(CreateIfNotExistsTag)
    {
        if (!m_controlSurfaces)
            m_controlSurfaces = boost::in_place(reinterpret_cast<CCPACSWingComponentSegment*>(this), m_uidMgr);
        return *m_controlSurfaces;
    }

    void CPACSComponentSegment::RemoveControlSurfaces()
    {
        m_controlSurfaces = boost::none;
    }

} // namespace generated
} // namespace tigl
