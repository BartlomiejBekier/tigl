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

#pragma once

#include <string>
#include <tixi.h>
#include <typeinfo>
#include "CTiglError.h"
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSSparPosition
    // CPACSWingRibsPositioning

    // generated from /xsd:schema/xsd:complexType[323]
    /// @brief etaXsiPointType
    /// 
    /// Point described by eta-xsi coordinates.
    /// Can be either segment or component segment coordinates.
    /// 
    class CPACSEtaXsiPoint
    {
    public:
        TIGL_EXPORT CPACSEtaXsiPoint();
        TIGL_EXPORT virtual ~CPACSEtaXsiPoint();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const double& GetEta() const;
        TIGL_EXPORT virtual void SetEta(const double& value);

        TIGL_EXPORT virtual const double& GetXsi() const;
        TIGL_EXPORT virtual void SetXsi(const double& value);

        TIGL_EXPORT virtual const std::string& GetReferenceUID() const;
        TIGL_EXPORT virtual void SetReferenceUID(const std::string& value);

    protected:
        /// Relative spanwise position. Eta refers to the segment or componentSegment depending on the referenced uID.
        double      m_eta;

        /// Relative chordwise position. Xsi refers to the segment or componentSegment depending on the referenced uID.
        double      m_xsi;

        /// This reference uID determines the reference coordinate system.
        /// If it points to a segment, then the eta-xsi values are considered to be in segment
        /// eta-xsi coordinates; if it points to a componentSegment,
        /// then componentSegment eta-xsi coordinates are used.
        std::string m_referenceUID;

    private:
        CPACSEtaXsiPoint(const CPACSEtaXsiPoint&) = delete;
        CPACSEtaXsiPoint& operator=(const CPACSEtaXsiPoint&) = delete;

        CPACSEtaXsiPoint(CPACSEtaXsiPoint&&) = delete;
        CPACSEtaXsiPoint& operator=(CPACSEtaXsiPoint&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSEtaXsiPoint = generated::CPACSEtaXsiPoint;
} // namespace tigl
