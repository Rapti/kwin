/********************************************************************
 KWin - the KDE window manager
 This file is part of the KDE project.

Copyright (C) 2016 Martin Gräßlin <mgraesslin@kde.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/
#ifndef KWIN_X11STANDALONE_PLATFORM_H
#define KWIN_X11STANDALONE_PLATFORM_H
#include "platform.h"

#include <kwin_export.h>

#include <QObject>

namespace KWin
{

class KWIN_EXPORT X11StandalonePlatform : public Platform
{
    Q_OBJECT
    Q_INTERFACES(KWin::Platform)
    Q_PLUGIN_METADATA(IID "org.kde.kwin.Platform" FILE "x11.json")
public:
    X11StandalonePlatform(QObject *parent = nullptr);
    virtual ~X11StandalonePlatform();
    void init() override;

    Screens *createScreens(QObject *parent = nullptr) override;
    OpenGLBackend *createOpenGLBackend() override;
    Edge *createScreenEdge(ScreenEdges *parent) override;

};

}

#endif