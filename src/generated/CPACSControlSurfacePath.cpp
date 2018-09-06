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
#include "CCPACSTrailingEdgeDevice.h"
#include "CPACSControlSurfacePath.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSControlSurfacePath::CPACSControlSurfacePath(CCPACSTrailingEdgeDevice* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
        , m_innerHingePoint(this)
        , m_outerHingePoint(this)
        , m_steps(this, m_uidMgr)
    {
        //assert(parent != NULL);
        m_parent = parent;
    }

    CPACSControlSurfacePath::~CPACSControlSurfacePath()
    {
    }

    CCPACSTrailingEdgeDevice* CPACSControlSurfacePath::GetParent() const
    {
        return m_parent;
    }

    CTiglUIDManager& CPACSControlSurfacePath::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSControlSurfacePath::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSControlSurfacePath::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read element innerHingePoint
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/innerHingePoint")) {
            m_innerHingePoint.ReadCPACS(tixiHandle, xpath + "/innerHingePoint");
        }
        else {
            LOG(ERROR) << "Required element innerHingePoint is missing at xpath " << xpath;
        }

        // read element outerHingePoint
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/outerHingePoint")) {
            m_outerHingePoint.ReadCPACS(tixiHandle, xpath + "/outerHingePoint");
        }
        else {
            LOG(ERROR) << "Required element outerHingePoint is missing at xpath " << xpath;
        }

        // read element steps
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/steps")) {
            m_steps.ReadCPACS(tixiHandle, xpath + "/steps");
        }
        else {
            LOG(ERROR) << "Required element steps is missing at xpath " << xpath;
        }

    }

    void CPACSControlSurfacePath::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write element innerHingePoint
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/innerHingePoint");
        m_innerHingePoint.WriteCPACS(tixiHandle, xpath + "/innerHingePoint");

        // write element outerHingePoint
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/outerHingePoint");
        m_outerHingePoint.WriteCPACS(tixiHandle, xpath + "/outerHingePoint");

        // write element steps
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/steps");
        m_steps.WriteCPACS(tixiHandle, xpath + "/steps");

    }

    const CCPACSControlSurfaceHingePoint& CPACSControlSurfacePath::GetInnerHingePoint() const
    {
        return m_innerHingePoint;
    }

    CCPACSControlSurfaceHingePoint& CPACSControlSurfacePath::GetInnerHingePoint()
    {
        return m_innerHingePoint;
    }

    const CCPACSControlSurfaceHingePoint& CPACSControlSurfacePath::GetOuterHingePoint() const
    {
        return m_outerHingePoint;
    }

    CCPACSControlSurfaceHingePoint& CPACSControlSurfacePath::GetOuterHingePoint()
    {
        return m_outerHingePoint;
    }

    const CCPACSControlSurfaceSteps& CPACSControlSurfacePath::GetSteps() const
    {
        return m_steps;
    }

    CCPACSControlSurfaceSteps& CPACSControlSurfacePath::GetSteps()
    {
        return m_steps;
    }

} // namespace generated
} // namespace tigl
