/* Copyright (C) 2015-2016 Alexander Shishenko <GamePad64@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "pch.h"
#include <QApplication>

class MainWindow;
class TrayIcon;
class FolderModel;
class ControlClient;

class Client : public QApplication {
Q_OBJECT

public:
	Client(int &argc, char **argv, int appflags = ApplicationFlags);
	~Client();

public slots:
	void exit();

private:
	// GUI
	std::unique_ptr<MainWindow> main_window_;
	std::unique_ptr<TrayIcon> trayicon_;

	std::unique_ptr<FolderModel> folder_model_;

	std::unique_ptr<ControlClient> control_client_;
};
