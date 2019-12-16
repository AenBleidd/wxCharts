/*
    Copyright (c) 2016-2018 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "wxchartoptions.h"

wxChartOptions::wxChartOptions()
    : m_enableSaveAsMenu(true)
    , m_enableMoving(true)
{
}

const wxChartCommonOptions& wxChartOptions::GetCommonOptions() const
{
    return m_commonOptions;
}

wxChartCommonOptions& wxChartOptions::GetCommonOptions()
{
    return m_commonOptions;
}

const wxChartPadding& wxChartOptions::GetPadding() const
{
    return m_padding;
}

void wxChartOptions::SetPadding(const wxChartPadding &padding)
{
    m_padding = padding;
}

bool wxChartOptions::IsSaveAsMenuEnabled() const
{
    return m_enableSaveAsMenu;
}

void wxChartOptions::SetSaveAsMenuEnabled(bool enable)
{
    m_enableSaveAsMenu = enable;
};

bool wxChartOptions::IsMovingEnabled() const
{
    return m_enableMoving;
};

void wxChartOptions::SetMovingEnabled(bool enable)
{
    m_enableMoving = enable;
};