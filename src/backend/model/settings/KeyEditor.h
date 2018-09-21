// Pegasus Frontend
// Copyright (C) 2017-2018  Mátyás Mustoha
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include "AppSettings.h"

#include <QObject>


namespace model {
class KeyEditor: public QObject {
    Q_OBJECT
    Q_PROPERTY(int eventCount READ eventCount CONSTANT)

public:
    explicit KeyEditor(QObject* parent = nullptr);

    Q_INVOKABLE void addKey(int event_id, int key);
    Q_INVOKABLE void delKey(int event_id, int key);
    Q_INVOKABLE void changeKey(int event_id, int old_key, int new_key);
    Q_INVOKABLE void resetKeys();
    Q_INVOKABLE const QVector<int> keysOf(int event_id) const;
    Q_INVOKABLE const QString keyName(int) const;

    static constexpr int eventCount() { return static_cast<int>(::KeyEvent::PAGE_DOWN) + 1; }

signals:
    void keysChanged();

private:
    const HashMap<int, QString> m_button_names;
};
} // namespace model
